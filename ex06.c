#include<stdio.h>
int	ft_strlen(char *str){
    int i,a;
    i=0;
    while(str[i]!='\0'){
      i++;  
    }
    return i;
}
int main(){
    char* str="test";
    int a=ft_strlen(str);
    printf("%d",a);
}

