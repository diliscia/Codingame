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

# --------------------------------------------

import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

P = []
minDist = 10000000  # Define the minimum difference
maxNr = 0   # Define the maximum Number of horse
minNr = 1000000 # Define the minimum Number of horse
dist = 0 # Difference
n = int(input())
for i in range(n):
    pi = int(input())
    if (pi > maxNr): # if the power is bigger than the maximum 
        dist = pi - maxNr # calculates the difference
        if (dist < minDist): # compares the difference
            minDist = dist
        maxNr = pi  # assigns the value
    elif (pi < minNr): # if the power is lower than the minimum 
        dist = minNr - pi # calculates the difference
        if (dist < minDist):
            minDist = pi
        minNr = pi
    else:
        for j in range(i):
            dist = abs(P[j] - pi)
            if (dist < minDist):
                minDist = dist
    P.append(pi)        

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

print(minDist)

#---------------------------------------------------
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
