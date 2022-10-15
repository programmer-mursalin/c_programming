#include<stdio.h>
int main(){
    int num,i,multi;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=1;i<=10;i++){
        multi= num * i;
        printf("%d x %d = %d\n",num,i,multi);
    }
    return 0;
}