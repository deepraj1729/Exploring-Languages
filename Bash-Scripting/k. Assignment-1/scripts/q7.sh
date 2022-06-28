#bin/bash

echo ""

read -p "Enter the name of the text file: " file_name

if [ -f $file_name ]
then
    echo "Word Count   Unique Word"
    cat $file_name | tr " " "\n" | sort | uniq -c
    echo -e "Total Unique words: \c" 
    cat $file_name | tr " " "\n" | sort | uniq -c | wc -l
else
    echo "$file_name doesn't exist....check input again."
fi