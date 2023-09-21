#include <stdio.h>
int main() {
    int sum = 0;
    int count = 0;
    int i = 1;

    while (count < 5) {
        if (i % 2 != 0) {
            sum += i;
            count++;
        }
        i += 2;
    }

    float average = (float)sum / 5;  // Calculate the average as a floating-point number

    printf("The average of the first five odd numbers is: %.2f\n", average);

    return 0;
}
