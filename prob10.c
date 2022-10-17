#include <stdio.h> 

int main(){
    int dd,mm,yy;
    printf("enter the date in dd/mm/yy\n");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    printf("day=%d,month=%d,year=%d",dd,mm,yy);
    return 0;
}