//C program to find the number of matching bits in the range of a integer in an array.

#include <stdio.h>

int checkBits(unsigned int num1, unsigned int num2) {
    unsigned int same_bits = ~(num1 ^ num2); // NOT of XOR will give 1 for same bits
    int count = 0;

    for (int i = 0; i < (sizeof(unsigned int) * 8); i++) {
        if (same_bits & (1 << i)) { // Check each bit position
            count++;
        }
    }
    return count;
}

int main()
{
    int N;
    printf("Enter the number of elements in the array:");
    scanf("%d",&N);
    int arr[N];
    for(int k=0;k<N;k++)
    {
        scanf("%d",&arr[k]);
    }
    int count_array[N];
    int total_count;
    for(int i=0;i<N;i++)
    {
        total_count=0;
        for(int j=0;j<arr[i];j++)
        {
            total_count+=checkBits(j,j+1);
            count_array[i]=total_count;
        }
    }
    
    for(int k=0;k<N;k++)
    {
        printf("%d\t",count_array[k]);
    }
}
