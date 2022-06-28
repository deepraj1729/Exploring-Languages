#bin/bash

echo ""
echo "Name      Designation    Role  Salary($)"
emp1=("Edward" "Software Engineer" "SDE" "100,000")
emp2=("Andrew" "Software Engineer" "SDE" "110,000")
emp3=("Mathew" "Software Engineer" "ML/DS" "210,000")
emp4=("Michel" "Software Engineer" "Dev-Lead" "300,000")
emp5=("Warner" "Software Engineer" "Manager" "310,000")

echo ${emp1[@]}       
echo ${emp2[@]}         
echo ${emp3[@]}         
echo ${emp4[@]}         
echo ${emp5[@]}   

echo ""
read -p "Enter Employee name to be added to the data base: " emp_name
read -p "Enter Designation: " emp_des
read -p "Enter Role: " emp_role
read -p "Enter Salary (per annum in $): " emp_sal

echo ""
emp6=($emp_name $emp_des $emp_role $emp_sal)

emp_db=($emp1 $emp2 $emp3 $emp4 $emp5 $emp6) 

echo "Updated Database:-"
echo ""
echo ${emp1[@]}       
echo ${emp2[@]}         
echo ${emp3[@]}         
echo ${emp4[@]}         
echo ${emp5[@]} 
echo ${emp6[@]}       
