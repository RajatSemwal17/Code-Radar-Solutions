#include <stdio.h>

struct info{
    int rollno;
    char name[30];
    float marks;
};

int main() {
    int n , count=0;
    float maxMarks;
    scanf("%d",&n);
    struct info e;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].rollno;e[i].name,&e[i].marks);
    }
    scanf("%f",&maxMarks);
    for(int i=0=;i<n;i++){
        if(maxMarks > e[i].marks){
            printf("Count of students scoring above %.2f: %d",maxMarks,count);
            count++;
        }
    }
    return 0;
}