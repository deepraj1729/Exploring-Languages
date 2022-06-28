/* 
    Operator Overloading: 
    ---------------------------

    -> The mechanism of giving an operator meaning based on the data type it operates upon is called opearator overloading.

    Advantages:
    ---------------------------
    1. It provides a flexible option for the creation of new definitions for most of the C++ operators.
    2. Makes C++ highly extensible.
    3. Almost all operators can be overloaded except those given below.

    Some operators which can't be overloaded are:
    -------------------------------------------------------
    1. class member access operator (. , .*)
    2. Scope resolution operator (::)
    3. Size operator (sizeof())
    4. Ternary conditional operator (?:)


    Operator overloading can be done with the help of a special function called the operator function defined as follows:
    ---------------------------------------------------------------------------------------------------------------------------

    return-type class_name:: operator op(arglist)
    {
        Function body                // Task defined
    }


    * Operator functions must be either member functions(non-static) or friend functions.
    * The difference between them is that a friend function will have 1 argument for unary operators and 2 arguments for binary operators
      while for a member function it will have no arguments for unary operators and only one 1 argument for binary operators.
    


    Operator Function prototypes:
    ------------------------------------------

    vector operator+(vector);                    // Vector addition (vectors are defined in C++ STL that will be covered later)
    vector operator-();                          // Unary minus
    friend vector operator+(vector,vector);      // Vector addition using friend function
    friend vector operator-(vector);             // Unary minus
    vector operator-(vector &a);                 // Subraction
    int operator==(vector);                      // Comparison
    friend int operator==(vector,vector);        // Comparison

    
*/
