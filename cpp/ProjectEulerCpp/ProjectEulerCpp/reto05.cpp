﻿#include "reto05.h"

/*
    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int reto05(){
    int n = 1, i;
    while(true)
    {
        for(i=2; i<=20; i++)
        {
            if(n%i!=0)
            {
                break;
            }
        }
        if(i==21)
        {
            break;
        }
        n++;
    }
    return n;
}