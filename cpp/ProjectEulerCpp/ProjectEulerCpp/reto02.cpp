﻿#include "reto02.h"

/*
    Each new term in the Fibonacci sequence is generated by
    adding the previous two terms. By starting with 1 and 2

    The first terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

    By considering the terms in the Fibonacci sequence whose values do
    not exceed four million, find the sum of the even-valued terms.
*/

int reto02()
{
    int a = 0, b = 1, sum = 0;
    while (true)
    {
        const int fibonacci = a+b;
        if(fibonacci>4000000)
        {
            break;
        }
        if(fibonacci%2==0)
        {
            sum += fibonacci;
        }
        a = b;
        b = fibonacci;
    }
    return sum;
}