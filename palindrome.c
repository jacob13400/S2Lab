#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[100];
    scanf("%s",s);
    int p=1;
    for(int i=0;i<strlen(s);i++){
        if(s[i]!=s[strlen(s)-i-1]){
            p=0;break;
        }
    }
    printf("%d",p);
    return 0;
}
