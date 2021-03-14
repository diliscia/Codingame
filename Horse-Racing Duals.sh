# Auto-generated code below aims at helping you parse
# the standard input according to the problem statement.

read -r N
declare -a P
declare -a Ps
minDif=10000000 # minimum difference
for (( i=0; i<$N; i++ )); do
    read -r Pi  
    P[i]=$Pi    # array of horses strenghts 
done 

#for (( j=$N-1 ; j>=0; j-- )); do   # this sorting works too but takes too long
#    for (( k=1; k<=$j; k++ )); do
#        if [ ${P[k-1]} -gt ${P[k]} ]
#        then
#            temp="${P[k-1]}"
#            P[k-1]="${P[k]}"
#            P[k]="$temp"
#        fi
#    done
#done

sP=($( printf "%s\n" "${P[@]}" | sort -n )) # this sorting uses bash sort command

for (( i=0; i<N-1; i++)); do    # checks the differences between the sorted horses
    a="${sP[i]}"
    b="${sP[i+1]}"
    Dif=$((b-a))
    if [ $Dif -lt $minDif ] # selects the minimum difference 
    then 
        minDif=$Dif
    fi
done

# Write an answer using echo
# To debug: echo "Debug messages..." >&2

echo "$minDif"
