import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

message = input()
answer = ''     # answer of message translated in unary
in_binary = ''  #  message translated in binary
for char in message:
    char_binary = bin(ord(char))[2:]    # character translated in binary
    if len(char_binary) < 7:
        char_binary = '0' + char_binary # ZERO added if char_binary is < 7 
    in_binary = in_binary + char_binary # adding each character in binary
if len(in_binary)>1:
    for i in range(0,len(in_binary)):   # repeat for all numbers in_binary
        if i == 0:                      # operations for the start if the characcter is '1' or '0'
            if (in_binary[i] == '1'):
                answer = answer + '0 0'
            elif (in_binary[i] == '0'):
                answer = answer + '00 0'
        elif i > 0:                     # operations for the rest of the characters, comparing to the previos one
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
