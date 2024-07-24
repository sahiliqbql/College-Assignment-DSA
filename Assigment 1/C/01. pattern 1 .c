#include <stdio.h>

int main(){
    int n;
    printf("enter row: ");
    scanf("%d",&n);

    int t = 1;
    for(int i=1; i<=n; i++){
        for(int k=n-i; k>0; k--){
            printf(" ");
        }
        for(int j=0; j<i; j++){
            if(t%2==0){
                printf("# ");
                t++;
            }else{
                printf("* ");
                t++;
            }
        }
        printf("\n");
    }
}
