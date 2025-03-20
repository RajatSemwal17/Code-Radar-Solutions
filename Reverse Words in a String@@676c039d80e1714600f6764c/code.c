#include<stdio.h>
#include<string.h>

void reverseWord(char *start, char *end){
    while(start<end){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseEachWord(char input[]){
    int len = strlen(input);
    int start = 0;
    for(int i=0;i<=len;i++){
        if(input[i] == ' '){
            reverseWord(&input[start] , &input[i-1])
            start = i+1;
        }
    }
}

int main(){
    char name[30];
    char a;
    fgets(name,sizeof(name),stdin);
    scanf("%c",&a);
    reverseEachWord(name);
    printf("%s",name);
}