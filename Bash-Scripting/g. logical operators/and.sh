#bin/bash
read -p "Enter your name: " name
read -p "Enter your age: " age

if [ "$age" -gt 18 ] && [ "$age" -lt 30 ]
then
    echo "$name, you are 18+. Age restricted access unlocked."
else
    echo "Age is restricted, $name, ur age not found in age group (18-30) both included."
fi

# can also be written as:  
#       if [ "$age" -gt 18 -a "$age" -lt 30 ]    
# also 
#       if [[ "$age" -gt 18 && "$age" -lt 30 ]]