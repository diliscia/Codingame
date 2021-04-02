import sys
import math

# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
# ---
# Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.

# light_x: the X position of the light of power
# light_y: the Y position of the light of power
# initial_tx: Thor's starting X position
# initial_ty: Thor's starting Y position
light_x, light_y, initial_tx, initial_ty = [int(i) for i in input().split()]

dist_x = light_x - initial_tx
dist_y = light_y - initial_ty

# game loop
while True:
    remaining_turns = int(input())  # The remaining amount of turns Thor can move. Do not remove this line.

    # Write an action using print
    # To debug: print("Debug messages...", file=sys.stderr, flush=True)
    if (0 <= light_x < 40 and 0 <= light_y < 18 and 0 <= initial_tx < 40 and 0 <= initial_ty < 18):
        if (dist_y == 0 and dist_x != 0):   # Straight line horizontally
            if (dist_x > 0):    # Straight line moving Eeast 
                print('E')
                dist_x = dist_x - 1
            elif (dist_x < 0):   # # Straight line moving West   
                print('W')
                dist_x = dist_x + 1

        if (dist_y != 0 and dist_x == 0):   # Straight line vertically
            if (dist_y > 0): # Straight line moving South
                print('S')
                dist_y = dist_y - 1
            elif (dist_y < 0):   # Straight line moving North
                print('N')
                dist_y = dist_y + 1

        if (dist_x != 0 and dist_y != 0): # Angle line 
            if (dist_x > 0 and dist_y > 0):   # Angle line moving SouthEast
                print('SE')
                dist_x = dist_x - 1
                dist_y = dist_y - 1
            if (dist_x < 0 and dist_y > 0):   # Angle line moving SouthWest
                print('SW')
                dist_x = dist_x + 1
                dist_y = dist_y - 1
            if (dist_x > 0 and dist_y < 0):   # Angle line moving NorthEast
                print('NE')
                dist_x = dist_x - 1
                dist_y = dist_y + 1
            if (dist_x < 0 and dist_y < 0):   # Angle line moving NorthWest
                print('NW')
                dist_x = dist_x + 1
                dist_y = dist_y + 1           

    # A single line providing the move to be made: N NE E SE S SW W or NW
    # print("SE")
