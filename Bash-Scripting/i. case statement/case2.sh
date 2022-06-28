#bin/bash

echo -e "Enter some character: \c"
read value

case $value in
    [a-z] )
        echo "User entered $value [a-z]" ;;
    [A-Z] )
        echo "User entered $value [A-Z]" ;;
    [0-9] )
        echo "User entered $value [0-9]" ;;
    ? )
        echo "User entered $value , special character" ;;
    * )
        echo "Invalid input" ;;
esac

# In case uppercase doesn't work,
# LANG=C