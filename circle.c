#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    double r;int n;
    double x,y;int i;
    double b[2];
    scanf("%lf",&r);
    scanf("%d",&n);int p=0;
    scanf(" %lf %lf",&x,&y);
    for( i=0;i<n;i++){
        scanf(" %lf",&b[0]);
        scanf(" %lf",&b[1]);
        double z=sqrt(pow(b[0]-x,2)+pow(b[1]-y,2)*1.0);
        if(z<=abs(r)){
            printf("%d ",i);
            p=1;}


    }




    if(p==0)
        printf("-1");
    return 0;
}
