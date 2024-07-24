#include <stdio.h>

int main(){

    int a = 1;
    int n;
    printf("enter row: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=n-i; j>0; j--){
            printf(" ");
        }
        for(int k=0; k<i; k++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}