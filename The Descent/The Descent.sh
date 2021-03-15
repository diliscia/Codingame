# The while loop represents the game.
# Each iteration represents a turn of the game
# where you are given inputs (the heights of the mountains)
# and where you have to print an output (the index of the mountain to fire on)
# The inputs you are given are automatically updated according to your last actions.

# game loop
while true; do
    max=0 # height of heightest mountain 
    for (( i=0; i<8; i++ )); do
        # mountainH: represents the height of one mountain.
        read -r mountainH
        if [ $mountainH -ge $max ] # compares the height of the mountain with the stored max
        then
            max=$mountainH  #  assigns the new value if the height was bigger than the max
            imax=$i         # identifies the number the highest mountain
        fi
    done    
    # Write an action using echo
    # To debug: echo "Debug messages..." >&2

    echo "$imax" # The index of the mountain to fire on.
done
