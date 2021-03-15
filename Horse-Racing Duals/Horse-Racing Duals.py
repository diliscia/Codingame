import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

minDif = 10000000  # Define the minimum difference
P = []
n = int(input())
for i in range(n):
    pi = int(input())
    P.append(pi)
P = sorted(P)

for i in range(n-1):
    if (P[i+1] - P[i] < minDif): #  
        minDif = P[i+1] - P[i]

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

print(minDif)
