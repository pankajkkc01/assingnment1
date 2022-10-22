#include <stdio.h> 

int main(){
    char a;
    int n;
    printf("entr the numbre to be checked ");
    scanf("%d",&n);
    a=(n%2==0?'E':'O');
    printf("E= even,O= odd\n %c",a);
    return 0;
}