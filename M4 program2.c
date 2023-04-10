// Module 4 Q-2 Write a program to read and write data from the file.
#include <stdio.h>

int main()
{
    FILE *fp;
    char buffer[100];

    // Open the file in write mode
    fp = fopen("read_write.txt", "w+");

    // Prompt the user to enter data
    printf("Enter data to be written to file:\n");
    fgets(buffer, 100, stdin);

    // Write the data to the file
    fprintf(fp, "%s", buffer);

    // Close the file
    fclose(fp);

    // Reopen the file in read mode and print its contents
    fp = fopen("read_write.txt", "r");
    while (fgets(buffer, 100, fp)) {
        printf("%s", buffer);
    }

    // Close the file again
    fclose(fp);

    return 0;
}
