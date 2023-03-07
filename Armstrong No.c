#include<stdio.h>

int main(){
  int re,x,no,sum = 0;
  
  printf("\n Enter The No : ");
  scanf("%d",&no);
  
  x = no;
  while(no!=0){
    re = no % 10;
    sum = sum + (re*re*re);
    no = no/10;
  }
  if(x==sum){
  printf("Armstrong No.");
  }
  else{
  printf("Not Armstrong No.");
  }
  return 0;
}
