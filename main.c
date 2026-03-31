#include <stdio.h>
int f3(void) {
    int num7 = 7;
    int car8 = 'd';
    printf("num7 = %p\n", (void*)&num7);
    printf("car8 = %p\n", (void*)&car8);
    return 0;
}

int f2(void) {
    int num5 = 5;
    int car6 = 'c';
    printf("num5 = %p\n", (void*)&num5);
    printf("car6 = %p\n", (void*)&car6);
    f3();
    return 0;
}

int f1(void) {
    int num3 = 3;
    int car4 = 'b';
    printf("num3 = %p\n", (void*)&num3);
    printf("car4 = %p\n", (void*)&car4);
    f2();
    return 0;
}

int main(void) {
    int num1 = 1;
    char car2 = 'a';
    printf("num1 = %p\n", (void*)&num1);
    printf("car2 = %p\n", (void*)&car2);
    f1();
    return 0;
}