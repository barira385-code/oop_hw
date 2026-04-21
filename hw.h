#pragma once //if you are including header file in another(#include "A.h" #include "B.h"  // B.h also includes A.h)

/*So A.h gets included twice, which can cause errors like:

redefinition of functions
redefinition of classes
multiple declaration conflicts)*/


//declaration but class write properly but func only declatre
int main(){}