#include <stdio.h> 

int main(){
    int n,sum=0;
    printf("entr the numbe of 3 digit\n");
    scanf("%d",&n);
    
    sum=n%10+sum;
    n=n/10;
    sum=(n%10)+sum;
    n=n/10;
    sum=(n%10)+sum;
   
    printf("the sum %d ",sum);

    return 0;
}