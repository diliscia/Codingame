import sys
import math
import binascii

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

message = input()
answer = ''
in_binary = ''
for char in message:
    char_binary = bin(ord(char))[2:]
    if len(char_binary) < 7:
        char_binary = '0' + char_binary
    in_binary = in_binary + char_binary
if len(in_binary)>1:
    for i in range(0,len(in_binary)):
        if i == 0:
            if (in_binary[i] == '1'):
                answer = answer + '0 0'
            elif (in_binary[i] == '0'):
                answer = answer + '00 0'
        elif i > 0:
            if (in_binary[i-1] == '1') and (in_binary[i] == '1'):
                answer = answer + '0'
            elif (in_binary[i-1] == '0') and (in_binary[i] == '1'):
                answer = answer + ' 0 0'
            elif (in_binary[i-1] == '1') and (in_binary[i] == '0'):
                answer = answer + ' 00 0'
            elif (in_binary[i-1] == '0') and (in_binary[i] == '0'):
                answer = answer + '0'
 
# Write an answer using print
# To debug: print("Debug messages...", file=sys.stderr, flush=True)

print(answer)
