#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>


bool isLeapYear(int year){
    return year% 4==0 && year %100!=0 || year%400;

}
int main(void)
{
    assert(isLeapYear(2020));
    return EXIT_FAILURE;
}