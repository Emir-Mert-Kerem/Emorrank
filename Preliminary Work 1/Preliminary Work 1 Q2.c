#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a;
    int b;

    printf("Enter two positive integers:\n");
    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive integers only.");
    }   
    
    else {
        int result = gcd(a, b);
        printf("The GCD of %d and %d is: %d", a, b, result);
    }

    return 0;
}
