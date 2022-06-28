#bin/bash

num1=12.2
num2=6.1

# Method-1
echo "METHOD-1"
echo "12.2+6.1" | bc
echo "12.2-6.1" | bc
echo "scale=2;12.2*6.1" | bc
echo "scale=2;12.2/6.1" | bc
echo "12.2%6.1" | bc
echo ""

#Method-2
echo "METHOD-2"
echo "$num1+$num2" | bc
echo "$num1-$num2" | bc
echo "scale=2;$num1*$num2" | bc
echo "scale=2;$num1/$num2" | bc
echo "12.2%6.1" | bc
echo ""

# Square root
num3=4096
echo "scale=2;sqrt($num3)" | bc -l
# -l for importing the math library

# Power
num4=12
pow=2

echo "scale=2;$num4^$pow" | bc -l

