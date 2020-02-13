#!/usr/bin/python

import sys, argparse
import os
import platform
import subprocess

from distutils.spawn import find_executable

# Find the Protocol Compiler.
flatc_local = os.path.join(os.path.dirname(__file__), '../external/bin/flatc')
flatc_local_windows = os.path.join(os.path.dirname(__file__), '../external/bin/flatc.exe')
if os.path.isfile(flatc_local):
    flatc = flatc_local
elif os.path.isfile(flatc_local_windows):
    flatc = flatc_local_windows
elif 'FLATC' in os.environ and os.path.exists(os.environ['FLATC']):
    flatc = os.environ['FLATC']
else:
    flatc = find_executable("flatc")


def generateInits(pathToOutput):
   
    dirn = []
    start = True

    while len(dirn) != 0 or start:
        if start: p = pathToOutput 
        else: p = dirn.pop(0)
        
       
        for (dirpath, dirnames, filenames) in os.walk(p):
            dirn.extend([p+"/"+x for x in dirnames])
            filename = dirpath+'/__init__.py'
            #print(filename)
            os.makedirs(os.path.dirname(filename), exist_ok=True)
            if start != True:
                with open(filename, "w") as f:
                    pass
            break

        start = False


def getAllSourceFilesFBS(rootDirectory):

    dirn = []
    files = []
    start = True

    while len(dirn) != 0 or start:
        if start: p = rootDirectory 
        else: p = dirn.pop(0)

        start = False
        for (dirpath, dirnames, filenames) in os.walk(p):
            dirn.extend([p+"/"+x for x in dirnames])
            #destdir.extend([po+"/"+x for x in dirnames])
            files.extend(p+"/"+x for x in filenames)
            break
        
    return files

def compileFBS(sourceFile, outputPath, includePath, targetLanguage, require = True):
    """Invokes the Protocol Compiler to generate a language specific from the given
    .fbs file.  Does nothing if the output already exists and is newer than
    the input."""

    if not require and not os.path.exists(sourceFile):
        return

    #print('path to output: '+outputPath)

    if not os.path.exists(sourceFile):
        sys.stderr.write("Can't find required file: %s\n" % sourceFile)
        sys.exit(-1)

    if flatc is None:
        sys.stderr.write(
            "flatc is not installed nor found in /external/bin.  Please compile it "
            "or install the binary package.\n")
        sys.exit(-1)

    flatc_command = [ flatc, "-I " + includePath, "-I .", "--" + targetLanguage, "-o " + outputPath, sourceFile ]
    print(flatc_command)
    if subprocess.call(flatc_command) != 0:
        sys.exit(-1)

def compileAllFBS(outputPath = './../dist/flatbuffers/py', sourceRoot='./../src/flatbuffers', includePath='./../src/flatbuffers' , targetLanguage='python'):
    fileList = getAllSourceFilesFBS(sourceRoot)
    #print(fileList)
    os.makedirs(outputPath, exist_ok=True)

    """ if targetLanguage == 'js':
        ### build js library
        pathToOutputLibrary = 'library=protobuf_library,binary:' + outputPath
        flatc_command = [ flatc, "-I"+includePath, "-I.", "--"+targetLanguage+"_out="+pathToOutputLibrary ]
        for i in fileList:
            flatc_command.append(i)
        print(flatc_command)
        if subprocess.call(flatc_command) != 0:
            sys.exit(-1)

        # prepare output path for individual file compilation
        outputPath = 'import_style=commonjs,binary:' + outputPath """

    for f in fileList:
        compileFBS(f, outputPath, includePath, targetLanguage, False)

    return outputPath


def chosen_option(args):
    file_directory = os.path.dirname(__file__)
    proto_src_directory = os.path.join(file_directory, '../src/proto')
    src_directory = os.path.join(file_directory, '../src')

    if args.opt == 'py' or args.opt == 'python':
        p = compileAllFBS(os.path.join(file_directory, '../dist/py'), proto_src_directory, src_directory, 'python')
        generateInits(p)
    elif args.opt == 'j' or args.opt == 'java':
        compileAllFBS(os.path.join(file_directory, '../dist/java'), proto_src_directory, src_directory, 'java')
    elif args.opt == 'js' or args.opt == 'javascript':
        compileAllFBS(os.path.join(file_directory, '../dist/js'), proto_src_directory, src_directory, 'js')
    elif args.opt == 'cs' or args.opt == 'csharp':
        compileAllFBS(os.path.join(file_directory, '../dist/cs'), proto_src_directory, src_directory, 'csharp')
    elif args.opt == 'cpp' or args.opt == 'cplusplus':
        compileAllFBS(os.path.join(file_directory, '../dist/cpp'), proto_src_directory, src_directory, 'cpp')
    elif args.opt == 'all':
        # python
        p = compileAllFBS(os.path.join(file_directory, '../dist/py'), proto_src_directory, src_directory, 'python')
        generateInits(p)
        # java
        compileAllFBS(os.path.join(file_directory, '../dist/java'), proto_src_directory, src_directory, 'java')
        # javascript
        compileAllFBS(os.path.join(file_directory, '../dist/js'), proto_src_directory, src_directory, 'js')
        # C#
        compileAllFBS(os.path.join(file_directory, '../dist/cs'), proto_src_directory, src_directory, 'csharp')
        # C++
        compileAllFBS(os.path.join(file_directory, '../dist/cpp'), proto_src_directory, src_directory, 'cpp')



def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--opt', type=str, default='all',
                        help='Supported options: [py] python, [j] java, [js] javascript, [cs] csharp, [all] all')

    args = parser.parse_args()
    sys.stdout.write(str(chosen_option(args)))


if __name__ == "__main__":
    main()
