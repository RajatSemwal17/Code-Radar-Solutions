#include <stdio.h>

struct info{
    int rollno;
    char name[100];
    float marks;
};

int main() {
    int n,topIndex=0;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&(e[i].rollno),e[i].name,&(e[i].marks));
    if(e[i].marks > e[topIndex].marks){
        topIndex = i;
    }
    }

    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f",e[topIndex].rollno,e[topIndex].name,e[topIndex].marks);
    
    return 0;
}