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
    // if(char[30]==" "){
    //     printf("0");
    // }
    else{

    printf("%d",mystrlen(name));
    }
    return 0;
}