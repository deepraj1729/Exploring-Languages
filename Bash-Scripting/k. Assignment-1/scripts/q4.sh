#bin/bash
echo ""

read -p "Enter a number (Integer): " num
echo ""
echo "Checking input......"

#Condition 1
echo ""
echo "Condition 1: (greater than 10 or not)"
if [ $num -gt 10 ];
then
    echo "$num is greater than 10 (Condition Satisfied)"
else
    echo "$num is less than or equal to 10 (Condition Unsatisfied)"
fi



#Condition 2
echo ""
echo "Condition 2: (less than or equal to 50 or not)"
if (($num <= 50))
then 
    echo "$num is less than or equal to 50 (Condition Satisfied)"
else
    echo "$num is greater than 50 (Condition Unsatisfied)"
fi
echo ""