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
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].rollno,e[i].name,&e[i].marks);
    }
    scanf("%f",&maxMarks);
    for(int i=0;i<n;i++){
        if(maxMarks > e[i].marks){
            count++;
            printf("Count of students scoring above %.2f: %d",maxMarks,count);
            break;
        }
    }
    return 0;
}