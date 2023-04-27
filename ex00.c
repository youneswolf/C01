#include<stdio.h>

void ft_ft(int *nbr){
*nbr=1337;
int temp=*nbr;
printf("%d",temp);
}
int main(){
    int p;
    ft_ft(&p);
    return 0;
}

