#include <stdio.h>
#include "temper.c" // Aka importing functions, variables or structures from other file

/*
    In the C programming language, storage classes determine the scope, lifetime, and linkage of variables and functions.
    They dictate how and where variables are stored in memory, how long they persist,
    and how they can be accessed across different parts of a program.
    Understanding storage classes is crucial for writing efficient, maintainable, and error-free C code.

    C provides several storage classes:
    # auto
    # register
    # static
    # extern

    Note: always minimize the usage of Global varaibles instead use Dynamic Memory allocation.
*/

void AutoFunction()
{
    auto int count = 0; // Same as 'int count = 0;'
    // ... use 'count' within this function
    printf("%d \n", count);
}

void counterFunction() {
    static int count = 0; // Initialized only once
    count++;
    printf("Count: %d\n", count);
}

// int Sum (int a,int b){
//     return a * b;
// }

int main()
{
    /*
        1. auto
            Overview
            Definition: The auto storage class is the default for all local variables inside functions.
            It signifies that the variable has automatic storage duration.
            Scope: Block scope (the variable is accessible only within the block or function where it's defined).
            Lifetime: The variable exists only during the execution of the block in which it is defined.
            Linkage: No linkage (the variable is not accessible outside its scope).
            Initialization: Not automatically initialized; contains an indeterminate value if not explicitly initialized.
    */
    // AutoFunction();

    /*
        2. extern
        Overview
        Definition: Declares a global variable or function that is defined in another file.
        Scope: Depends on where it's declared; generally, it's used at the file scope.
         Lifetime: The entire runtime of the program.
        Linkage: External linkage (accessible across multiple translation units).
        Initialization: Not initialized; assumes the variable or function is defined elsewhere.
    */

    int sum_of = Sum(4,8);
    printf("the Sum is %d\n",sum_of); // imported the function from temper.c using extern


    /*
        3. static
        The static storage class serves multiple purposes depending on where it's applied.
        A. Static Local Variables
        Overview
        Definition: Retains the variable's value between function calls.
        Scope: Block scope.
        Lifetime: The entire runtime of the program.
        Linkage: No linkage.
        Initialization: Automatically initialized to zero if not explicitly initialized.

        B. Static Global Variables and Functions
        Overview
        Definition: Limits the scope of a global variable or function to the file in which it's declared.
        Scope: File scope.
        Lifetime: The entire runtime of the program.
        Linkage: Internal linkage (not accessible from other translation units).
    
    */
    // counterFunction(); // Output: Count: 1
    // counterFunction(); // Output: Count: 2
    // counterFunction(); // Output: Count: 3
    
    /*
        4. register
        Overview
        Definition: Suggests that the variable be stored in a CPU register for faster access.
        Scope: Block scope.
        Lifetime: Same as auto—exists only during the execution of the block.
        Linkage: No linkage.
        Initialization: Not automatically initialized.
    
    */
    // RegisterFunction();


    return 0;
}