#include <stdio.h> 

int main(){
    int a,b;
    printf("enter the number of 3 digit\n");
    scanf("%d",&a);
    b=b%10;
    a=a/10;
    b=(b*100)+a;
    printf("the numbre is %d",b);
    return 0;
}