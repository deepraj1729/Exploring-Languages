#bin/bash
read -p "Enter your name: " name
read -p "Enter your age: " age

if [ "$age" -lt 18 ] || [ "$age" -gt 65 ]
then
    echo "$name, you are not in a working class age group i.e. between (18-65)"
else
    echo "$name, you are in a working class age group i.e. between (18-65)"
fi

# can also be written as:  
#       if [ "$age" -lt 18 -o "$age" -gt 65 ]    
# also 
#       if [[ "$age" -lt 18 || "$age" -gt 65 ]]