// Declaring string arrays
//     To declare an array containing numbers,
//     we do this

//     int num[5] = {1, 2, 3, 4, 5};
// For arrays of characters, we can do this

//                           char alphabets[5] = {'a', 'b', 'c', 'd', 'e'};
// But the syntax changes if you want to create arrays which can store strings.We already learned that strings are nothing but character arrays in C.

//     To declare a string,
//     we use

//     char car[6] = "Tesla";
// Here 6 is the maximum number of characters the string can have.

//     To declare an array of strings,
//     we have to do this

//     char cars[4][10] = {"Tesla", "Honda", "Toyota", "Cruise"};

// printf(cars[0]);
// // Output
// // Tesla
// Here 4 is the size of the array and 10 is the maximum number of characters each string item can have.Remember to give the size of the array first and then the size of string.

//                                     Task
//                                         Create an array of first 4 months of a year.The first 4 months of a year are : "January",
//     "February", "March", "April".Then print the 3rd month of the year using array indexing.


//ANS

#include <stdio.h>
#include <string.h>

int main() {
    // declare the array and print 3rd month
    char mont[4][10] = {"January", "February", "March", "April"};
    printf(mont[2]);
    return 0;
}
