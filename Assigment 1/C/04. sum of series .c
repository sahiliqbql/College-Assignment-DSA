#include <stdio.h>

int main(){
    int a = 1;
    int b = 1;
    int s = 1;
    int n ;
    printf("entr limit: ");
    scanf("%d",&n);
    for(int i=1; i<n; i++){
        s+=(b*b);
        int t = a;
        a = b;
        b = t+b;
    }
    printf("sum = %d",s);
}
