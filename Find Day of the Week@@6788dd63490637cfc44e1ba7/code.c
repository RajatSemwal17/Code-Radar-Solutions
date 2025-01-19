#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if(num==1){
        printf("Monday");
    }
    if(num==2){
        printf("Tuesday");
    }
    if(num==3){
        printf("Wednesday");
    }
    if(num==4){
        printf("Thursday");
    }
    if(num==5){
        printf("Friday");
    }
    if(num==6){
        printf("Saturday");
    }
    if(num==7){
        printf("Sunday");
    }
    else{
        printf("Invalid");
    }
    return 0;
}