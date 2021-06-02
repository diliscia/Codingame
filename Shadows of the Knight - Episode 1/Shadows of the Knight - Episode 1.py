import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

# w: width of the building.
# h: height of the building.
w, h = [int(i) for i in input().split()]
n = int(input())  # maximum number of turns before game over.
x0, y0 = [int(i) for i in input().split()] # starting position of Bataman

x1 = 0  # minimum value of x in where the bomb might be 
y1 = 0  # minimum value of y in where the bomb might be
x2 = w  # maximum value of x in where the bomb might be
y2 = h  # maximum value of y in where the bomb might be

# game loop
while True:
    bomb_dir = input()  # the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
    if "U" in bomb_dir: # if the bomb is Up the maximum value of y is y0
        y2 = y0         
    if "D" in bomb_dir: # if the bomb is Down the minimum  value of y is y0
        y1 = y0
    if "L" in bomb_dir: # if the bomb is to the Left the maximum value of x is x0
        x2 = x0
    if "R" in bomb_dir: # if the bomb is to the Right the minimum value of x is x0
        x1 = x0
    x0 = x1 + ((x2  - x1)/2)    # coordinate x of the next window Batman should jump to
    y0 = y1 + ((y2  - y1)/2)    # coordinate y of the next window Batman should jump to

    # Write an action using print
    # To debug: print("Debug messages...", file=sys.stderr, flush=True)
    # the location of the next window Batman should jump to.
    print(str(int(x0)) + " " + str(int(y0)))
