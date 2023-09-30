#include <stdio.h>  //Name akhilesh butola 23 ce- 07

void primeFactors(int n) {
    int divisor = 2;

    printf("Prime factors of %d are: ", n);

    while (n > 1) {
        if (n % divisor == 0) {
            printf("%d ", divisor);
            n = n / divisor;
        } else {
            divisor++;
        }
    }
    printf("\n");
}
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("Prime factorization is not possible for numbers less than 2.\n");
    } else {
        primeFactors(num);
    }

    return 0;
}
