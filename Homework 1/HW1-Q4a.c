#include <stdio.h>
#include <math.h>

int computeHomeValue(int popularity, int size);

int main() {
    int popularity, size, homeValue;

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    homeValue = computeHomeValue(popularity, size);

    printf("Home value is: %d TL", homeValue);

    return 0;
}

int computeHomeValue(int popularity, int size) {
    return (pow(popularity, 3) + pow(size, 2)) * 10000;
}
