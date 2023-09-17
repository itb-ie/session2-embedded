#include <stdio.h>

#define PI 3.1415926535

int global_a, global_b = 12;

int print_something() {
    static int counter = 0;
    counter = counter + 1;
    printf("hello, called %d times\n", counter);
    return 0;
}

int main() {
    /* simple declarations */
    //int a;
    int my_variable;
    //int b, c, d;

    /* initialization */
    int a = 7;
    int b = 3, c = 11;
    const int x = 11;
    printf("x=%d\n", x);


    printf("%d\n", c);
    /* assignment */
    c = 9;
    printf("%d\n", c);
    global_b = 13;
    printf("global_a = %d\n", global_a);
    printf("global_b = %d\n", global_b);
    {
        int another_a = 5;
        printf("this is another_a = %d\n", another_a);
    }
//    printf("outside the context another_a = %d\n", another_a);

    print_something();
    print_something();
    printf("pi=%f", PI);

    signed char xx = 130;
    printf("xx=%d\n", xx);
    xx += 200;
    printf("xx=%d\n", xx);


    return 0;
}
