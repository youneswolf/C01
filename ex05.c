#include<stdio.h>
void	ft_putstr(char *str){
int i=0;

while(str[i]!='\0'){
   
    printf("%c",str[i]);
    i++;
}
}
int main(){
    char *str="test"; 
    ft_putstr(str);
    return 0;
}
