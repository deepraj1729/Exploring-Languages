#bin/bash
str_list=("Ashish" "Pewdipie" "Mark" "Jeff" "Bill")

show_default()
{   
    echo ""
    echo "Original list of strings: "
    for (( i=0; i<5; i++ ))
    do 
        echo -e "${str_list[$i]} \c"
    done
    echo ""
    echo ""
}

show_reversed()
{   
    echo "Reversed list of strings: "
    for (( i=4; i>=0; i-- ))
    do 
        echo -e "${str_list[$i]} \c" | rev
    done

    echo ""
    echo ""
}

show_default
show_reversed
