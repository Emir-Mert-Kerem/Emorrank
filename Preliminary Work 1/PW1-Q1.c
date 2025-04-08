#include <stdio.h>

int emorranksqrt(int n) {
    if (n < 0) { 
        return -1;
    }
    else {
        int i = 0;
        while (i * i <= n) {
            i++;
        }
        return i - 1;
    }    
}

int main() {
    int number;

    printf("Enter an integer number:");
    scanf("%d", &number);

    int result = emorranksqrt(number);

    if (result == -1) {
        printf("The number inside the square root cannot be negative.");
    } 
    else {
        printf("Integer square root of %d is %d\n", number, result);
    }

    return 0;
}
