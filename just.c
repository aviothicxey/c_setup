#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize random number generator
    srand(time(0));

    // Generate a random number between 0 and 99
    int random_number = rand() % 100;

    // Print the random number
    printf("Random number: %d\n", random_number);

    return 0;
}