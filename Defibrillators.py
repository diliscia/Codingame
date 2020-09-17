import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

lonA = float(input().replace(',','.'))  # user's longitude
latA = float(input().replace(',','.'))  # user's latitude
n = int(input())    # numbers of defibrilators
mind = 6371         # minimum distance (earth radious by default) 
for i in range(n):
    defib = input() # input data line 
    num, name, address, phone, lonB, latB = defib.split(';')    # spliting the input data line in the fields
    lonB = float(lonB.replace(',', '.'))    # defibrilator's longitude
    latB = float(latB.replace(',', '.'))    # defibrilator's latitude
    x = ((lonB-lonA)*math.cos(((latA+latB)/2)))     # X 
    y = ((latB-latA))                               # Y
    d = (math.sqrt(math.pow(x,2)+math.pow(y,2)))    # distance
    if (d > mind):  # if distance is less than the minimum
        pass
    else:           # if distance is greater than the minimum
        mind = d
        answer = name

# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

print(answer)
