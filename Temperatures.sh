# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

# n: the number of temperatures to analyse
read -r n
read -r -a myArray
dif=5526  # Max difference to start
result=0  # the value of the result
#neg=-1
#echo $neg
for (( i=0; i<$n; i++ )); do
    # t: a temperature expressed as an integer ranging from -273 to 5526
    t=${myArray[$((i))]}

    if [ $t -le 0 ] # if t is negative asigns dif2 positive
        then
        dif2=$(( $t * -1 ))
    elif [ $t -gt 0 ] # if t is positive asigns dif2 positive         
        then
        dif2=$t
    fi    
    if [ $dif2 -lt $dif ] # if dif2 is inferior to dif 
        then
        dif=$dif2  # keep this difference
        result=$t  # keep this temperatue
    elif [ $dif2 -eq $dif ] && [ $t -gt $result ]  # for the case where the difference is the same
        then
        result=$t  # we keep only the positive temperature
    fi
done

# Write an answer using echo
# To debug: echo "Debug messages..." >&2

echo $result
