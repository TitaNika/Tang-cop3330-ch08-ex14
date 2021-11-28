/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tony Tang
 */

#include "std_lib_facilities.h"

void f(const int x)
{
    cout << x << endl;
}

int main()
{
    int x = 25;
    f(x);
}

/**
void f(const int x)
{
    cout << x << endl;
}

int main()
{
    int x = ?;
    f(x);
}
**/

/**
 What might that mean?
- Being able to call an object(s) made within the function to be "constant" thus cannot be changed throughtout the code. Kept same just like in the scientific method. 

 Why might we want to do that?
- Say that the said object is an integral part of the whole code, being able to "savelock" it prevents unwanted variability within your code. Plus being able to be called on any type of object can be seen as a benefit. 

 Why don’t people do that often?
- The "protection" that is provided by this type of function can be seen as disadvantageous. With the values and objects being kept as a constant within the function, the programmer would have trouble figuring out the potential changes made to the variable/objects that he/she is trying to pass. 
**/
