import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

n = int(input())  # the number of temperatures to analyse
dif = 5526  # Max difference to start
dif2 = 0    # difference calculate to compare
result = 0  # the value of the result
for i in input().split():
    # t: a temperature expressed as an integer ranging from -273 to 5526
    t = int(i)
    dif2 = abs(t-0)  # calculate de difference to reference
    if (dif2 < dif): # if is inferior 
        dif = dif2  # keep this difference
        result = t  # keep this temperatue
    elif (dif2 == dif & t > result):  # for the case where the difference is the same
        result = t  # we keep only the positive temperature

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

print(result)
