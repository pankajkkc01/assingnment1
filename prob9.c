#include <stdio.h> 

int main(){
    int a;
    printf("enter the  number \n");
    scanf("%d",&a);
    a=a/10;
    a=a*10;
    printf("the digit %d",a);

    return 0;
}