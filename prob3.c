#include <stdio.h> 

int main(){
    int n,m,k;
    printf("entr the numbrs \n");
    scanf("%d %d",&n,&m);
    printf("you entr the numbr are %d,%d\n",n,m);
    k=n;
    n=m;
    m=k;
    printf("the number are swaped %d, %d",n,m);
    return 0;
}