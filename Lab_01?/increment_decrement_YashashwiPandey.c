#include <stdio.h>
int main() {
    int a,b;
    printf("YASHASWI PANDEY \n");
    printf("Please enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before increment  a = %d and b = %d\n", a, b);
    a++;
    b++;
    printf("After increment a = %d and b = %d\n", a, b);
    a--;
    b--;
    printf("After decrement  a = %d and b = %d\n", a, b);
    return 0;
}
