#include <stdio.h>
#include <stdio.h>

int main(){
    char s[] = "madam";
    int z = strlen(s);
    int p = 0;
    for(int i=0, j=z-1; i<j; i++,j--){
        if(s[i]!=s[j]){
            printf("not palindrome");
            p++;
            break;
        }
    }
    if(p==0){
        printf("palindrome");
    }
    return 0;
}
