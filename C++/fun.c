#include <stdio.h>
int main(){

    int num1, num2, result;

    printf("please Enter The Two Numbers(5 5.5): ");
    scanf("%d %d", &num1, &num2);

    result = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, result);

    result = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, result);

    result = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result);

    result = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, result);
    
    return 0;
}