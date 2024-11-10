#include<stdio.h>

int main(){
	int number;
	printf("Please Enter The Number :>");
	scanf("%d",&number);
	if(number==0)
		printf("Number is Zero");
	else if(number<0)
		printf("Number is Negetive .");
	else if(number>0)
		printf("Number is Positive");
	else
		printf("Please Check Your Input");

return 0;
}
