#include<stdio.h>
void ft_sort_int_tab(int *tab, int size){
  int i,j,z,temp;
  i=0,j=0;
  while(i<=size){
      if(tab[i] > tab[i+1]) {    
               temp = tab[i];    
               tab[i] = tab[i+1];    
               tab[i+1] = temp;
     
  }
  i++;
}
while(i<=size){
    printf("%d",tab[i]);
}
}
