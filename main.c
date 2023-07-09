#include <stdio.h>

unsigned int count_steps(unsigned int x, unsigned int y) {
    unsigned int count = 0; // Step counter, initialized to zero

    while (x != y) { // While x is not equal to y, perform the loop
        if (x < y) { // If x is less than y
            if ((y - x) % 2 != 0) {
                // If the difference between x and y is odd, increase x by 1
                x++;
            } else {
                // If the difference between x and y is even, increase x by 2
                x += 2;
            }
        } else { // If x is greater than y
            if ((x - y) % 2 != 0) {
                // If the difference between x and y is odd, decrease x by 1
                x--;
            } else {
                // If the difference between x and y is even, decrease x by 2
                x -= 2;
            }
        }

        count++; // Increase the step counter by 1
    }

    return count; // Return the number of steps
}

int main() {
    unsigned int x, y;

    printf("Enter the value of x: ");
    scanf("%u", &x); // Read the value of x from the console

    printf("Enter the value of y: ");
    scanf("%u", &y); // Read the value of y from the console

    unsigned int steps = count_steps(x, y); // Calculate the minimum number of steps

    printf("Minimum number of steps: %u\n", steps); // Print the result

    return 0;
}
