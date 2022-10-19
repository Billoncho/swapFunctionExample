/*
Author:     Billy Gene Ridgeway
Date:       October 19th. 2022
Purpose:    Learn about passing by value vs passing by reference in C.
*/

#include<stdio.h>
#include<string.h>

void swap(int x, int y);
void swap2(int *a, int *b);

int main()
{
    int a = 100;        // Local variables definition.
    int b = 200;
    //int *ptrA = &a;
    //int *ptrB = &b;

    printf("\nBefore swap, value of a: %d\n", a);
    printf("Before swap, value of b: %d\n", b);

    swap(a, b);         // Call the function to swap the values.

    printf("\nAfter swap, value of a: %d\n", a);
    printf("After swap, value of b: %d\n", b);

    swap2(&a, &b);

    printf("\nAfter swapping with pointers, value of a: %d\n", a);
    printf("After swapping with pointers, value of b: %d\n", b);

    return 0;
}

void swap(int x, int y)     // Function to swap values.
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    return;
}

void swap2(int *x, int *y)     // Function using pointers to swap values contained at their addresses.
{
    int temp;

    temp = *x;      // Put the value held at the address of x into temp.
    *x = *y;        // Put the value held at the address of y into x.
    *y = temp;      // Put the value of temp into the address of y.

    return;
}