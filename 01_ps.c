// Q.1- Write a C program to calculate area of a rectangle.
// (a) Using hard coded inputs
#include <stdio.h>

int main()
{
    int length = 2;
    int breadth = 7;
    printf("The area of a rectangle is: %d", length*breadth);
    return 0;
}

// (b) Using inputs supplied by the user
#include <stdio.h>

int main()
{
    int length, breadth;
    // Input length
    printf("Enter the Length: ");
    scanf("%d", &length);

    // Input breadth
    printf("Enter the Breadth: ");
    scanf("%d", &breadth);

    // The area of a rectangle
    printf("The area of a rectangle is: %d", length * breadth);
    return 0;
}