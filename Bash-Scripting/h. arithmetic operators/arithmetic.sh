#bin/bash

read -p "Enter 1st number (integer): " num1
read -p "Enter 2nd number (integer): " num2
echo ""

# Method 1
echo "By Method 1:-"
echo "The addition is $(( num1 + num2 ))"
echo "The subtration is $(( num1 - num2 ))"
echo "The product is  $(( num1 * num2 ))"
echo "The division is $(( num1 / num2 ))"
echo "The remainder is $(( num1 % num2 ))"

echo ""

echo "By Method 2:-"
# Method 2
echo $(expr $num1 + $num2 )
echo $(expr $num1 - $num2 )
echo $(expr $num1 \* $num2 )
echo $(expr $num1 / $num2 )
echo $(expr $num1 % $num2 )
echo ""