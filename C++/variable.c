#include <stdio.h>
int abc = 300; //global variable
int main(){
    // int var = 55;
    // printf("var + 5 = %d\n", var + 5);
    // printf("var - 5 = %d\n", var - 5);
    // printf("var * 5 = %d\n", var * 5);
    // printf("var / 5 = %d\n", var / 5);
    // printf("var = %d", var);

    int a = 20;
    int b = 30;
    float c = 33.3333;

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d + %d + %f = %f\n", a, b, c, a+b+c);

    printf("%d\n", abc); //global variable

    return 0;
}

// variable name also called as identifier

// Scope =>
// Local Variable, Global Variable

// Memory Life Time
// Static, Automatic

// External Variable