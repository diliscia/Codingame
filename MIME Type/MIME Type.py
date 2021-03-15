import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())  # Number of elements which make up the association table.
q = int(input())  # Number Q of file names to be analyzed.
mimetypes = {}  # Dictionary of MIME types
for i in range(n):
    # ext: file extension
    # mt: MIME type.
    ext, mt = input().split()
    mimetypes[ext.upper()] = mt # defining the dictionary considering uppercases
for i in range(q):  
    fname = input() # One file name per line.
    if (fname.find('.') != -1): # checking if there is a '.', that means an extension 
        name, ext2 = fname.rsplit('.', maxsplit=1)  # assigning the last substring as the extension (key)
        if ext2.upper() in mimetypes:               # if the extension (key) is present
            print(mimetypes[ext2.upper()])          # print the MIME type
            pass
        else:
            print("UNKNOWN")
    else:                       # if there is no '.', there is no extension 
        print('UNKNOWN')

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

# For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.
# print("UNKNOWN")
