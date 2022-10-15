#include<stdio.h>
int main(){
    int q,m,mult;
    printf("Enter the number\n");
    scanf("%d",&q);
    for(m = 1;m<=10;m++){
        mult = q*m;
        printf("%d t %d = %d\n",q,m,mult);
    }
    return 0;


}
 
