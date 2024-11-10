#include<stdio.h>

int main(){
    char alphabet;
    printf("Please Enter any Alphabet :>");
    scanf("%c",&alphabet);

    if(alphabet>64 && alphabet<96){
        printf("This is a Capital Leter %c",alphabet);
    }else if (alphabet>96)
    {
        printf("This is a small Leter %c",alphabet);
    }
    

    return 0;
}