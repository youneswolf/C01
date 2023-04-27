#include<stdio.h>
void ft_strrev(char *str){
    
    int i=0,z=0;
    int a=0;
    while(str[i]!='\0'){
        i++;
    }
    i=i-1;
    char rev[i];
    while(i!=-1){
         rev[z]=str[i];
         z++;
         i--;
    }
    
    while(rev[a]!='\0'){
        printf("%c",rev[a]);
        a++;
    }
}
int main(){
  char* str="hjbfd";
  ft_strrev(str);
  return 0;
}
