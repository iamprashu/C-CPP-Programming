#include<stdio.h>

int main(){
	int a,b,c;
	printf("Please Enter the side of traingle (Seperated by comma)  :>");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b+c==180)
		printf("It is a Triangle");
	else
		printf("It is not a Triangle.");


return 0;
}
