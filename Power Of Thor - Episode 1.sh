# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.
# ---
# Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.

# lightX: the X position of the light of power
# lightY: the Y position of the light of power
# initialTX: Thor's starting X position
# initialTY: Thor's starting Y position
read -r lightX lightY initialTX initialTY

distX=$(( $lightX - $initialTX ))   # steps distance from Thor to lighting in X
distY=$(( $lightY - $initialTY ))   # steps distance from Thor to lighting in Y

# game loop
while true; do
    # remainingTurns: The remaining amount of turns Thor can move. Do not remove this line.
    read -r remainingTurns

    # Write an action using echo
    # To debug: echo "Debug messages..." >&2

    if [ 0 -le $lightX ] && [ $lightX -le 40 ] && [ 0 -le $lightY ] && [ $lightY -lt 18 ] && [ 0 -le $initialTX ] && [ $initialTX -lt 40 ]  && [ 0 -le $initialTY ] && [ $initialTY -lt 18 ]
    then 
        if [ $distY -eq 0 ] && [ $distX -ne 0 ] # Straight line horizontally
        then 
            if [ $distX -gt 0 ] # Straight line moving East
            then
                echo "E"
                distX=$(($distX-1))
            else [ $distX -lt 0 ] # Straight line moving West
                echo "W"
                distX=$(($distX+1))
            fi
        fi    
        if [ $distY -ne 0 ] && [ $distX -eq 0 ] # Straight line vertically
        then
            if [ $distY -gt 0 ] # Straight line moving South
            then
                echo "S"
                distY=$(($distY-1))
            else
                [ $distY -lt 0 ] # Straight line moving North
                echo "N"
                distY=$(($distY+1))
            fi        
        fi
        if [ $distX -ne 0 ] && [ $distY -ne 0 ] # Angle line 
        then
            if [ $distX -gt 0 ] && [ $distY -gt 0 ]   # Angle line moving SouthEast
            then
                echo "SE"
                distX=$(($distX-1))
                distY=$(($distY-1))
            fi
            if [ $distX -lt 0 ] && [ $distY -gt 0 ] # Angle line moving SouthWest
            then
                echo "SW"
                distX=$(($distX+1))
                distY=$(($distY-1))
            fi
            if [ $distX -gt 0 ] && [ $distY -lt 0 ] # Angle line moving NorthEast
            then
                echo "NE"
                distX=$(($distX-1))
                distY=$(($distY+1))
            fi
            if [ $distX -lt 0 ] && [ $distY -lt 0 ] # Angle line moving NorthWest
            then
                echo "NW"
                distX=$(($distX+1))
                distY=$(($distY+1))
            fi
        fi    
    fi

    # A single line providing the move to be made: N NE E SE S SW W or NW
    # echo "SE"

done
