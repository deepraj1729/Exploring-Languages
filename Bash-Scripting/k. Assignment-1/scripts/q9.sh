#!/bin/bash

echo ""
echo "Reverse a number"
echo -n "Enter a number: "
read n
 
# store single digit
sd=0
 
# store number in reverse order
rev=""

# use while loop to caclulate the sum of all digits
while [ $n -gt 0 ]
do
    sd=$(( $n % 10 )) # get Remainder 
    n=$(( $n / 10 ))  # get next digit
    # store previoues number and current digit in rev
    rev=$( echo ${rev}${sd} ) 
done
 
echo  "Reversed number is: $rev"
