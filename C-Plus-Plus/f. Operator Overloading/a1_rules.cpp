/*
    Rules for operator overloading:

    1. Only existing operators can be overloaded
    2. The overloaded operators must have atleast one operand that is of user defined type.
    3. We cannot change the basic meaning of an operator.]
    4. Overloaded operators follows the syntax rules of the original operators.
    5. We cannot use friend functions to verload certain operators. However, member functions can be used to overload them.
    6. Unary operators, overloaded by means of member functions take no arguments and return no explicit values but those overloaded by means 
       of a friend function takes one reference argument.
    7. For overloading binary operators by member functions,it takes one argument and has to return a value and the left operand must an object of the class.
       while it takes 2 argumants overloading via friend functions.

    Operators that can't be overloaded:
    1.  sizeof      Size of operator
    2.  .           Membership operator
    3.  .*          pointer-to-member
    4.  ::          scope resolution operator
    5.  ?:          conditional operator
    
    where a friend can't be used (but can be overloaded through member functions)

    1.  =           Assignment operator
    2.  ()          Function call operator
    3.  []          Subscripting operator
    4.  ->          class member access operator


*/