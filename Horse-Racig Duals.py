import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
P = []
minDif = 10000000  # Define the minimum difference
n = int(input())
for i in range(n):
    pi = int(input())
    P.append(pi)
    for j in range(i):
        if (abs(P[j] - pi) < minDif):
            minDif =  abs(P[j] - pi)
    
# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

print(minDif)
