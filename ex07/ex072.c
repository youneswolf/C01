#include<stdio.h>
void ft_rev_int_tab(int* tab, int size){
    int first=0;
    int last=size-1;
    int x,y,i;
    
    while(last==-1 && first==size){
      x = tab[last];
      tab[last]=tab[first];
      tab[first]=x;
      last--;
      first++;
      
    }
    while(i<size){
        printf("%d",tab[i]);
        i++;
    }
}
int main(){
    int MAX=3;
    int  var[] = {10, 100, 200};
  
   
    ft_rev_int_tab(var,MAX);
    return 0;
}
