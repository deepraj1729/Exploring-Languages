#bin/bash
echo ""

#Method 1 (as many variables)
echo "(Method 1) Arguments given are: $1 $2 $3 and Script name is: '$0'"
echo ""
# $0, $1, $2, $3 are the args as input
# $0 gives the script name


#Method 2 (as an Array)
args=("$@")
echo "(Method 2) Arguments given are: ${args[0]} ${args[1]} ${args[2]}"
echo ""

#Method 3 (Print all args)
echo "(Method 3) Arguments given are: $@"
echo ""

# Print number of args passed
echo "Number of args passed: $#"
echo ""