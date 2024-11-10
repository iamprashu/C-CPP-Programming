#include<stdio.h>


void input(int **p, int n,int size[]){

    for(int i=0; i<n; i++){
        printf("Enter %d Numbers .",size[i]);
        for(int j=0; j<size[i]; j++){
            scanf("%d",*(p+i)+j);
        }
    }
}

void PrintData(int *p,int n){
        for(int j=0; j<n; j++){
            printf(" %d |",*(p+j));
        }
}

int main(){
    int a[3];
    int b[4];
    int c[5];
    int d[6];
    int *p[4];

    int size[]={3,4,5,6};
     p[0] = a;
     p[1] = b;
     p[2] = c;
     p[3] = d;

    input(p,4,size);
    for(int i=0; i<4; i++){
        PrintData(p[i],size[i]);
    }
    return 0;

}
