include<stdio.h>
void ft_swap(int *a,int *b){
int temp;
temp = *a;
*a = *b;
*b = temp;
printf("a= %d/n",*a);
printf("b= %d/n",*b);
}
int main(){
int* a,b;
*a=4;
*b=8;
ft_swap(&a,&b)
}
