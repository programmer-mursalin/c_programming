#include<stdio.h>
int main(){
    int num;
    printf("Enter your number : \n");
    scanf("%d",&num);
    switch(num){
        case (num>=80):
            printf("Your grade is 'A+'\n");
            break;
        default:
            printf("Your grade is 'F'");
    }
    return 0;
}