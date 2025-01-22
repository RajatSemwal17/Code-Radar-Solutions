#include <stdio.h>

struct info{
    int X;
    char Y[30];
    float salary;
    float bonus;
};

float Bonus(int salary){
    if(salary<50000){
        return salary/10;
    }
    else{
        return salary/50;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].X,e[i].Y,&e[i].salary);
     e[i].bonus = Bonus(e[i].salary);
    }
    for(int i=0;i<n;i++){
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",e[i].X,e[i].Y,e[i].bonus);
    }
    return 0;
}