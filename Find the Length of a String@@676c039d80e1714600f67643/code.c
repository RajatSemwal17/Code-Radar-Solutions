#include<stdio.h>
#include<string.h>

int mystrlen(char *name){
    int i=0;
    
    while(name[i] != '\0'){
        i++;
    }
    return i;
}

int main(){
    char name[30];
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")] = '\0';
    if(name[0]=='\0'){
        printf("0");
        return 0;
    }
    printf("%d",mystrlen(name));
    
  
    return 0;
}