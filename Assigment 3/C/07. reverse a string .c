#include <stdio.h>
#include <stdio.h>

int main(){
    char s[] = "sahil";
    // int z = sizeof(s)/sizeof(s[0]);  //wrong coz it also calculate "\0" null
    int z = strlen(s);

    for(int i=0, j=z-1; i<j; i++,j--){
        char c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    printf("%s",s);
    return 0;
}
