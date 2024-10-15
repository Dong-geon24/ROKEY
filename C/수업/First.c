#include <stdio.h>
#include <math.h>

double calculateSqrt(int *num) {
    return sqrt(*num);
}

int main() {
    int num;
    printf("정수를 입력하세요: ");
    scanf("%d", &num);

    double result = calculateSqrt(&num);

    printf("제곱근: %lf\n", result);

    return 0;
}
