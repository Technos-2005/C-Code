#include<stdio.h>

int main(){
	int re,no,revno = 0,x;
	
	printf("\n Enter The No : ");
	scanf("%d",&no);
	
	x = no;
	while(no!=0){
		re = no % 10;
		revno = (revno * 10) + re;
		no = no/10;
	}
	if(x==revno){
		printf("\n Palindrome No.");
	}
	else{
		printf("\n Not Palindrome No.");
	}
	return 0;
}
