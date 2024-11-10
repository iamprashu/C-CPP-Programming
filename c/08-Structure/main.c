#include<stdio.h>
#include<string.h>

struct Book {//creating structure
    //Variable
    int bookid;
    char tittle[20];
    float price;
};


int main(){
   struct Book b1;
    b1.bookid=1;
    b1.price=125.56;

    printf("Enter The Book Name :> ");
    fgets(b1.tittle,20,stdin);

    b1.tittle[strlen(b1.tittle)-1]='\0';

    printf("Book id :> %d Name: %s and the Price is :> %.2f",b1.bookid,b1.tittle,b1.price);

        //initailizing structure variable while declaration
    struct Book b2={2,"Accounts",980.78};

    printf("Book id :> %d Name: %s and the Price is :> %.2f",b2.bookid,b2.tittle,b2.price);


    return 0;
}