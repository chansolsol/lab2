#include <stdio.h>

extern int add(int a, int b);
extern int subtract(int a, int b);
extern int multiply(int a, int b);
extern float divide(float a, float b);

int main() {
    int a = 10, b = 5;

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subtract(a, b));
    printf("Multiplication: %d\n", multiply(a, b));
    printf("Division: %f\n", divide(a, b));

    return 0;
}
