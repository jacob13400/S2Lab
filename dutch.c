#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;int a=0,b=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        if(x==0)
            a++;
        else if(x==1)
            b++;
        else if(x==2)
            c++;
    }
    for(int i=0;i<a;i++)
        printf("%d",0);
    for(int i=0;i<b;i++)
        printf("%d",1);
    for(int i=0;i<c;i++)
        printf("%d",2);
    return 0;
}
