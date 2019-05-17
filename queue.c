#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
}*p=NULL,*last=NULL,*list=NULL;

int main() {
    
    
    int n;
    //printf("LOL");
    scanf("%d",&n);
    int i=0;
    
  
    while(1==1){
        int x;
        
        scanf(" %d",&x);
        if(x==4)
            break;
        if(x==1){int dd;
            scanf("%d",&dd);
            if(i>=n){
                printf("%d\n",-1);continue;
            }else{
            
            i++;
            p=(struct node *)malloc(sizeof(struct node));
            p->data=dd;
            p->link=NULL;
            if(list==NULL){
                list=p;
            }
            else{
                last->link=p;
            }
            last=p;
            printf("%d\n",0);
        }}
        if(x==2){
            if(list==NULL || i<=0){
                printf("%d\n",-1);}
            else{
            list=list->link;i--;
            printf("%d\n",0);
        }}
        if(x==3){
            struct node *tlist;tlist=list;
            if(tlist==NULL){
                printf("-1\n");
            }
            else{
            while(tlist!=NULL){
                printf("%d ",tlist->data);
                tlist=tlist->link;
            }
            printf("\n");}
        }
        
    }
    
    return 0;
}
