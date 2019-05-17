#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int m,n;int i=0;int j=0;
    int a[100];int b[100];int c[200];
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<m;i++){
        scanf(" %d",&a[i]);
    }
    for(i=0;i<n;i++){
        scanf(" %d",&b[i]);
    }
    i=0;j=0;int k=0;
    while(i<m &&j<n){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
        
    }
    while(i<m){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }
    
    for(i=0;i<k;i++)
        printf("%d ",c[i]);
    return 0;
}
