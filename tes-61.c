#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Comparison function for qsort
int compareChars(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
	int i;
    // Character array
    char charArray[] = {'b', 'a', 'd', 'c','e','g','f'};

    // Calculate the number of characters in the array
    size_t numChars = sizeof(charArray) / sizeof(charArray[0]);

    // Sort the array of characters using qsort
    qsort(charArray, numChars, sizeof(charArray[0]), compareChars);

    // Print the sorted characters
    printf("Sorted characters:\n");
    for( i = 0; i < numChars; ++i) {
        printf("%c\n", charArray[i]);
    }

    return 0;
}
