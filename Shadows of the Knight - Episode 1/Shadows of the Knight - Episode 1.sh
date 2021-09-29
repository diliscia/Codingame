# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

# W: width of the building.
# H: height of the building.
read -r W H
# N: maximum number of turns before game over.
read -r N
read -r X0 Y0

X1=0  # minimum value of x in where the bomb might be 
Y1=0  # minimum value of y in where the bomb might be
X2=$W  # maximum value of x in where the bomb might be
Y2=$H  # maximum value of y in where the bomb might be

# game loop
while true; do
    read -r bombDir     # the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
    if [[ $bombDir == *"U"* ]]; then # if the bomb is Up the maximum value of y is y0
        Y2=$Y0
    fi
    if [[ $bombDir == *"D"* ]]; then # if the bomb is Down the minimum value of y is y0
        Y1=$Y0  
    fi
    if [[ $bombDir == *"L"*  ]]; then # if the bomb is to the Left the maximum value of x is x0
        X2=$X0
    fi
    if [[ $bombDir == *"R"*  ]]; then # if the bomb is to the Right the minimum value of x is x0
        X1=$X0 
    fi

    X0=$(( X1 + (X2 - X1) / 2 ))   # coordinate x of the next window Batman should jump to
    Y0=$(( Y1 + (Y2 - Y1) / 2 ))   # coordinate y of the next window Batman should jump to
 
    # Write an action using echo
    # To debug: echo "Debug messages..." >&2

    echo "$X0 $Y0"
done
