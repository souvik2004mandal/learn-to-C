// Return values
// Functions in C can serve two primary purposes when it comes to providing information to the caller: they can either return a value or print an output.

// Returning Values from Functions:
// When a function returns a value, it's providing a piece of data back to the caller.
// This data can be used for further processing, assignment to variables, or any other purpose within the program. The return statement is used to send a value back to the caller.

// Check the sample below

// #include <stdio.h>

// int calculate_square(int num) {
//     int square_result = num * num;
//     return square_result;
// }

// int main() {
//     // Calling the function and capturing the return value
//     int result = calculate_square(5);
//     printf("Square of 5: %d\n", result);
// }


// // Output
// // Square of 5: 25
// Printing Output from Functions:
// A function can also directly print output to the console using print statements.
// However, this doesn't provide any data back to the caller in a way that can be used elsewhere in the program.
// The primary purpose here is to display information, not to provide data for further processing.

// Check the example below which gives the same output as the code above

// #include <stdio.h>

// void print_square(int num) {
//     int square_result = num * num;
//     printf("Square of %d is: %d\n", num, square_result);
// }

// int main() {
//     // Calling the function
//     print_square(5);
// }

// // Output
// // Square of 5 is: 25
// Task
// Update the function given in the IDE to output the following to the IDE by printing from inside the function.
// A*A +2∗A∗B+B*B 
// A+B

//#include <stdio.h>

void compute_value(int a, int b) {
    // update your code below this line
    
    int c = a *a + 2 * a * b + b * b;
    int d = a + b;
    printf("%d\n %d\n", c, d);
}

int main() {
    int t = 3;

    for (int i = 0; i < t; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        compute_value(A, B);
    }
}