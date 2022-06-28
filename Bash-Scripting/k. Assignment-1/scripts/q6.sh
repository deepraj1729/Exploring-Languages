#bin/bash

pos_marks=1
neg_marks=-1
total_marks=5

correct_ans=0
wrong_ans=0
marks=0
echo ""

echo "Q1. What is the capital of Canada   (Correct +1   Incorrect -1)"
echo "(a) Toronto  (b) Winnipeg (c) Ottawa (d) Vancouver  "
echo ""
echo -e "Enter your response (a,b,c,d): \c"
read value1

case $value1 in
    a )
        (( marks-- )) 
        (( wrong_ans++ )) ;;
    b )
        (( marks-- )) 
        (( wrong_ans++ )) ;;
    c )
        (( marks++ ))
        (( correct_ans++ )) ;;
    d )
        (( marks-- )) 
        (( wrong_ans++ )) ;;
    * )
        echo "Invalid input"
        (( marks-- )) 
        (( wrong_ans++ )) ;;
esac

echo ""


echo "Q2. How many cores an i7 has   (Correct +1   Incorrect -1)"
echo "(a) 2  (b) 6  (c) 8  (d) 10 "
echo ""
echo -e "Enter your response (a,b,c,d): \c"
read value2

case $value2 in
    a )
        (( marks-- )) 
        (( wrong_ans++ )) ;;
    b )
        (( marks++ ))
        (( correct_ans++ )) ;;
        
    c )
        (( marks-- )) 
        (( wrong_ans++ )) ;;
    d )
        (( marks-- )) 
        (( wrong_ans++ )) ;;
    * )
        echo "Invalid input"
        (( marks-- )) 
        (( wrong_ans++ )) ;;
esac

echo ""


echo "Q3. What is the square root of 4096   (Correct +1   Incorrect -1)"
echo "(a) 36  (b) 76  (c) 54 (d) 64 "
echo ""
echo -e "Enter your response (a,b,c,d): \c"
read value3

case $value3 in
    a )
        (( marks-- )) 
        (( wrong_ans++ )) ;;
    b )
        (( marks-- )) 
        (( wrong_ans++ )) ;;
        
    c )
        (( marks-- )) 
        (( wrong_ans++ )) ;;
    d )
        (( marks++ ))
        (( correct_ans++ )) ;;
        
    * )
        echo "Invalid input"
        (( marks-- )) 
        (( wrong_ans++ )) ;;
esac

echo ""


echo "Q4. Tensorflow is a    (Correct +1   Incorrect -1)"
echo "(a) Framework  (b) Library  (c) Both A and B   (d) None "
echo ""
echo -e "Enter your response (a,b,c,d): \c"
read value4

case $value4 in
    a )
        (( marks-- )) 
        (( wrong_ans++ )) ;;
    b )
        (( marks-- )) 
        (( wrong_ans++ )) ;;
        
    c )
        (( marks++ ))
        (( correct_ans++ )) ;;
        
    d ) 
        (( marks-- )) 
        (( wrong_ans++ )) ;;

    * )
        echo "Invalid input"
        (( marks-- )) 
        (( wrong_ans++ )) ;;
esac
echo ""

echo "Q5. Find the odd one out    (Correct +1   Incorrect -1)"
echo "(a) Pytorch   (b) React  (c) Django   (d) Express "
echo ""
echo -e "Enter your response (a,b,c,d): \c"
read value5

case $value5 in
    a )
        (( marks-- )) 
        (( correct_ans++ )) ;;
    b )
        (( marks-- )) 
        (( wrong_ans++ )) ;;
        
    c )
        (( marks++ ))
        (( wrong_ans++ )) ;;
        
    d ) 
        (( marks-- )) 
        (( wrong_ans++ )) ;;

    * )
        echo "Invalid input"
        (( marks-- )) 
        (( wrong_ans++ )) ;;
esac

total_wrong_ans=$(($wrong_ans*$neg_marks))
total_correct_ans=$(($correct_ans*$pos_marks))

echo ""
echo "Total Correct ans: $correct_ans"  
echo "Total wrong answers: $wrong_ans"

echo "Final marks: $(expr $total_correct_ans + $total_wrong_ans)"

