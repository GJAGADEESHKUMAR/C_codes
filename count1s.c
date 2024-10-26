//C program to find the number of 1's in a integer binary representation
#include <stdio.h>
int count_ones(int n) {
    int count = 0;
    while (n) {
        n &= (n - 1);  // Removes the rightmost set bit
        count++;
    }
    return count;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    int result = count_ones(n);
    printf("The number of 1's in the binary representation of %d is: %d\n", n, result);
    
    return 0;
}
