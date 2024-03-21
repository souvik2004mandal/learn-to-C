// Some useful math functions
// Below are some simple math functions that you will find useful while solving problems:
// We include the math.h library to access mathematical functions like sqrt, abs, pow, ceil, and floor.

// abs(A−B) - Necessarily returns the absolute value of 
// (A−B) A % B - Returns the remainder when A is divided by B To round a number X upwards to its nearest integer, use the 
// ceil(X) function.
// To round a number 
// X downwards to its nearest integer, use the  floor(X) function.
// To get the value of X to the power of Y, use the 
// pow(X,Y) function.
// Proceed to the IDE to test out the syntax.

//ANS

//Click on 'Submit' to check the output of the functions
//Click on 'Next' to proceed
//note \n is used to take the cursor to the next line

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    double X=53.56;
    double Y=3;
    int A = 45;
    int B = 20;
   
    // Output the absolute value of the difference of A and B
    printf("%d\n", abs(A - B));

    // Output the remainder when A is divided by B
    printf("%d\n", A % B);

    //computing the rounded off number upwards to its nearest integer and printing it
    printf("%f\n", ceil(X));
   
    //computing the rounded off number downwards to its nearest integer and printing it
    printf("%f\n", floor(X));

    //computing the value of X to the power of Y and printing it
    printf("%f\n", pow(X,Y));
    return 0;
    
}