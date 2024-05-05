#include <stdio.h>
#include <stdlib.h>
#include "task_g.h"

#define MAX_NUMBERS 20

int main(void) {
    FILE *file;
    double numbers[MAX_NUMBERS];
    double max_less_than_10;

    // Open the file
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error!");
        return EXIT_FAILURE;
    }

    // Read the numbers from the file into an array
    int count = 0;
    while (count < MAX_NUMBERS && fscanf(file, "%lf", &numbers[count]) == 1) {
        count++;
    }
    fclose(file);

    // Call the function to find the maximum number less than 10
    find_max_less_than_10(numbers, count, &max_less_than_10);

    // Check if there was an error in finding the maximum number
    if (max_less_than_10 == -1) {
        printf("Error!");
        return EXIT_FAILURE;
    }

    // Print the result to two decimal places
    printf("%.2f\n", max_less_than_10);

    return 0;
}