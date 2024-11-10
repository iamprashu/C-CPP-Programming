#include<stdio.h>
#include<string.h>


int main(){
    char string[20];
    fgets(string,20,stdin);
    //handling string
    
    int i;
    int vovel=0;
    int cons=0;

    for(i=0; string[i] != '\0'; i++ )
    {
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ){
            vovel++;
        }
        else{
            cons++;
        }
    }
    cons--;
    string[strlen(string)-1]='\0';
    printf("Count of Vovel in %s is :> %d and Cons are :> %d",string,vovel,cons);

    return 0;
    
    
}