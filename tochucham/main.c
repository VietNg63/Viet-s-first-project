#include <stdio.h>
#include "khaibaoham.h"
#include <stdbool.h>
int main(){
    int x =2;
    int N = 65432;
    int a = 3;
    int b = 5;
    int max=  find_max_character(N);
    printf("%d",max);
    int count =count_max_character(N);
    printf("\n%d",count);
    int check = is_allcharacter_even(N);
    if(check == 1)
    printf("\nall character is even");
    else
    printf("\nnot all charater is even");
    if(is_symmetricalnumber(N)==1)
    printf("\n N is symmetrical number");
    else
    printf("\n is not symmetrical number");
    if(is_increasing_number(N)==1)
    printf("\n N is increasing number");
    else
    printf("\nis not increasing number");
    if(is_decreasing_number(N)==1)
    printf("\n N is decreasing number");
    else
    printf("\nis not dereasing number");
    int GCD = greatest_common_divisor(a,b);
    printf("\n%d",GCD);
    int SCM = smallest_common_multiple(a,b);
    printf("\n%d",SCM);
}