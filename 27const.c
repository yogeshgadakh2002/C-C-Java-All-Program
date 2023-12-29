#include<stdio.h>

int main()
{
    int X = 11;

    const int Y = 11;   // Read only variable

    X++;            // Allowed
    X--;            // Allowed
    y =21 ;          // Allowed

    //  Y++;        // Not Allowed
    // Y--;         // Not Allowed
    // Y = 21;      // Not Allowed

    return 0;
