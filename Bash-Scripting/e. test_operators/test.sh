#bin/bash
echo "-------Testing File Existency---------"
echo -e "Enter the name of the file: \c"
read file_name

## 1. Check file exists or not
if [ -e $file_name ]
then 
    echo "$file_name found"
else
    echo "$file_name not found"
fi
echo ""

## 2. Check file is a regular file or not
echo "-------Testing File Regularity---------"
if [ -f $file_name ]
then 
    echo "$file_name is a regular file"
else
    echo "$file_name not a file"
fi
echo ""

## 3. Check directory exists or not
echo "-------Testing Directory Existency---------"
echo -e "Enter the name of the directory: \c"
read dir_name

if [ -d $dir_name ]
then 
    echo "$dir_name directory exists"
else
    echo "$dir_name directory doesn't exist"
fi
echo ""

## 4. Check file is empty or not
echo "-------Testing File Memory space---------"
echo -e "Enter the name of the file: \c"
read file_name

if [ -s $file_name ]
then 
    echo "$file_name is not empty"
else
    echo "$file_name is empty"
fi
echo ""

# -e file exists or not
# -f to check whether if it's a file or not
# -d to check for directory
# -b for checking block special file (binary file, mp4, img)
# -c for checking character special file (texts and characters inside it)
# -s for checking file is empty or not
# -r check for read permission
# -w check for write permission
# -x check for execute permission