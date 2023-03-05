#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    char *ptr1, *ptr2;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    ptr1 = str1;
    ptr2 = str2;

    while (*ptr1 != '\0') {
        ptr1++;
    }

    while (*ptr2 != '\0') {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }

    *ptr1 = '\0';

    printf("Concatenated string: %s\n", str1);

    return 0;
}
