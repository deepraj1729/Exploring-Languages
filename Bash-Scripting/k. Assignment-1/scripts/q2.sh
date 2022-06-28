#bin/bash

echo `ls`
read -p "Enter a Directory name: " dir_name

if [ -d $dir_name ]
then
    echo "$dir_name already exists"
else
    echo -e "Enter 3 subdirectories u want to create (Press Enter to skip): \c"
    read -a subdir_names
    mkdir -p $dir_name/{${subdir_names[0]},${subdir_names[1]},${subdir_names[2]}}
    echo "Created Directory: $dir_name and sub directories ${subdir_names[0]} ${subdir_names[1]}  ${subdir_names[2]}"
fi