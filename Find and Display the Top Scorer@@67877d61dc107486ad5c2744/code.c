#include <stdio.h>

struct info{
    int rollno,topIndex=0;
    char name[100];
    float marks;
};

int main() {
    int n;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&(e[i].rollno),e[i].name,&(e[i].marks));
    if(e[i].marks > e[topIndex].marks){
        topIndex = i;
    }
    }

    printf("Top Scorer: Roll Number: %d,Name: %s,Marks: %.2f",e[i].rollno,e[i].name,e[i].marks);
    
    return 0;
}