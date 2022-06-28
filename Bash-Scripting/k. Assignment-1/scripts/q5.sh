#bin/bash

#The different types of loop are: 
# 1. WHILE loop
# 2. UNTIL loop
# 3. FOR loop
# 4. SELECT loop


# 1. WHILE loop : Syntax
# while [ condition ]
# do 
#     command1
#     command2
#     .
#     .
#     .
#     command3
# done


echo "Loop 1: (While loop) "
n=1
while (( $n <= 10 ))
do
    echo -e "$n \c"
    #n=$(( n+1 ))
    (( n++ ))
    #(( ++n ))
done

echo ""
echo ""

# 2. UNTIL loop : Syntax
# until [ condition ]
# do 
#     command1
#     command2
#     .
#     .
#     .
#     command3
# done


echo "Loop 2: (UNTIL loop)"

n=1
until (( $n > 10 ))
do
    echo -e "$n \c"
    #n=$(( n+1 ))
    (( n++ ))
    #(( ++n ))
done

echo ""
echo ""

# 3. FOR loop : Syntax
# for (( exp1; exp2; exp3))
# do 
#     command1
#     command2
#     .
#     .
#     .
#     command3
# done

echo "Loop 3: (FOR loop)"
for (( i=1; i<=10; i++ ))
do 
    echo -e "$i \c"
done

echo ""
echo ""

# 4. SELECT loop : Syntax
# select varName in list
# do 
#     command1
#     command2
#     .
#     .
#     .
#     command3
# done

echo "Loop 4: (SELECT loop)"

select name in Smith Kohli Rohit Warner
do 
    case $name in 
    Smith )
        echo "Smith selected" ;;
    Kohli )
        echo "Kohli selected" ;;
    Rohit )
        echo "Rohit selected" ;;
    Warner )
        echo "Warner selected" ;;
    * )
        echo "Invalid input.. Plz provide number between 1 to 4" ;;
    esac

    
done

echo ""