#include <stdio.h> 

int main(){
    int a,b;
    printf("entr the numbers\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swaped numbeer are %d,%d",a,b);
    return 0;
}