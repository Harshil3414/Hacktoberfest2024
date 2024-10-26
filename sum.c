#include <stdio.h>

int main() {
    int n, sum = 0, num;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    printf("The sum of the integers is: %d\n", sum);

    return 0;
}
