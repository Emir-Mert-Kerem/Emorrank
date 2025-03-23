#include <stdio.h>
#include <math.h>

int main() {
    int popularity;
    int size;
    int homeValue;

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    homeValue = (pow(popularity, 3) + pow(size, 2)) * 10000;

    printf("Your home value is: %d TL", homeValue);

    return 0;
}
