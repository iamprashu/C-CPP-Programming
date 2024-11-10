#include<stdio.h>
#include<string.h>

int getLength(char *p){
    int i;
    for( i=0; *(p+i) != '\n'; i++){
        printf("%c | ", *(p+i));  // This prints each character followed by "|"
    }
    return i;
}

int main(){
    char string[20];

    fgets(string, 20, stdin);

    // Remove newline character if it's present
    //string[strcspn(string, "\n")] = '\0';

    int length = getLength(string);
    printf("Length of string is :> %d", length);
    return 0;
}
