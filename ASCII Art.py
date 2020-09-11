import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

l = int(input())    # length of each letter
h = int(input())    # height of each letter
t = input()         # word to be written in ASCII Art
asciialfa = []      # list to register the ACII alphabet
alfa = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ?'    # uppercase alphabet
for height in range(h):
    asciialfa.append(input())   # registering ASCII alphabet 
for lines in range(h):
    for letter in t:            # finding index of each letter in the word
        idx = alfa.find(letter.capitalize())
        if idx == -1:
            idx = len(alfa)-1    
        print(asciialfa[lines][idx*l:idx*l+l], end = '')
    print()

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)
