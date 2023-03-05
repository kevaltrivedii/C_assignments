#include <stdio.h>

int isPalindrome(int num, int temp) {
  
    if (num == 0) {
        return temp;
    }
   
    temp = (temp * 10) + (num % 10);
    return isPalindrome(num / 10, temp);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    int temp = isPalindrome(num, 0);
    if (temp == num) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}




