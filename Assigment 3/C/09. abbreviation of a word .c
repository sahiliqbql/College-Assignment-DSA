// 1st letter of each word

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[100];
    printf("enter name: ");
    fgets(s, sizeof(s), stdin);

    char a[10];
    int p=1;
    a[0]=toupper(s[0]);

    int i=0;
    while(s[i]!='\0'){
        i++;
        if(s[i]==' '){
            a[p++] = '.';
            a[p++] = toupper(s[i+1]);
        }
    }
    a[p]='\0';
    printf("%s",a);
    return 0;
}
