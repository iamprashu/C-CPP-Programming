#include<stdio.h>

struct Books{
    int bookid;
    char book_name[30];
    float price;
};

struct Books Input(){
    struct Books b1;
    b1.bookid=12122;
    b1.price=130.12;

    return b1;
}

int main(){
    struct Books b1,b2;

    b1.bookid=12;

    b2=Input();

    printf("%.2f",b2.price);

    return 0;
}