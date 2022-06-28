#bin/bash
echo ""

count=10

#Condition 1
if [ $count -eq 10 ];
then
    echo "Condition is True"
else
    echo "Condition is False"
fi

#Condition 2
if (($count >= 10))
then 
    echo "$count is greater than equal to 10"
else
    echo "$count is not less than 10"
fi
echo ""

#String Comparison (with nested Conditions)
name1="deepraj"
name2="deepraj1729"

if [ "$name1" == "$name2" ]
then 
    echo "Both $name1 and $name2 are same"
elif [[ "$name1" < "$name2" ]]
then
    echo "$name1 comes before $name2 in ASCII order"
else 
    echo "$name2 comes before $name1 in ASCII order"
fi
echo ""

#Other Operators:
# -eq    equals to                  [ "$name1" -eq "$name2" ]
# -ne    not equals to              [ "$name1" -ne "$name2" ]
# -gt    greater than               [ "$name1" -gt "$name2" ]
# -ge    greater than equal to      [ "$name1" -ge "$name2" ]
# -lt    less than                  [ "$name1" -lt "$name2" ]
# -le    less than equal to         [ "$name1" -le "$name2" ]
#  <     less than                  (("$name1" < "$name2"))
# <=     less than equal to         (("$name1" <= "$name2"))
#  >     greater than               (("$name1" > "$name2"))
# >=     greater than equal to      (("$name1" >= "$name2"))

#String Comparison
# =      equals to                              [ "$name1" = "$name2" ]
# ==     equals to                              [ "$name1" == "$name2" ]
# !=     not equals to                          [ "$name1" != "$name2" ]
# <      less than in terms of ASCII order      [["$name1" < "$name2"]]
# >      greater than in terms of ASCII order   [["$name1" > "$name2"]]
# -z     String is NULL, that is, zero length   [["$name1" -z "$name2"]]
