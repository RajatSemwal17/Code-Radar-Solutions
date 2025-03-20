#include<stdio.h>

int main(){
    char name[30];
    char a;
    scanf("%s %c",name,&a);
    int count=0;
    for(int i=0;i<name[i];i++){
        if(a == name[i]){
            count++;
        }
    }
    printf("%d",count);
}