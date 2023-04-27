#include<stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);{
    if(b!=0){
    int temp = *a / *b;
    int temp1= *a % *b;
    *a=temp;
    *b=temp1;
    }
}
