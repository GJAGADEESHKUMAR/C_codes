// C program to demonstrate the strstr() function
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Jagadeesh";
    char s2[] = "deesh";
    char* result;
    result = strstr(s1, s2);
    if (result != NULL) {
        printf("Substring found: %s\n", result);
    }
    else {
        printf("Substring not found.\n");
    }

    return 0;
}
