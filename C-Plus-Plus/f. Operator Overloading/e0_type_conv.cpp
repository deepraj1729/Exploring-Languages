/*
    Type conversion or Type casting refers to implementing operations with different data type of operands that results into a single defined data
    type.

    we know type conversion of primitive data types.

    int m;
    float pi = 3.14159; 
    m = pi;             // m = 3 as m is of type int thus decimal part is truncated
    
    For handling operations of user-defined data types:

    Three types of situations may arise:

    1. conversion from basic type to class type.
    2. Conversion from class type to basic type.
    3. Conversion from one class type to another class type.

    --------------------------------------------------------------------------------------
    1. Basic to class type:

    Constructors are used to convert 

    Examples:
    char* to class string
    int arr[] to vector

    code:

    string s1,s2;
    char* name1 = "Deepraj Baidya";
    char* name2 = "Alex aby";
    s1 = string(name1);   // first converts char* type to string type and then assigns to the object s1
    s2 = string(name2);   // first converts char* type to string type and then assigns to the object s2




*/