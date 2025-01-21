#include <stdio.h>

struct info{
    int rollno;
    char name[40];
    float marks;
};

int main() {
    int n,maxMarks;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].rollno,e[i].name,&e[i].marks);
    }
    for(int i=0;i<n;i++){
        if(e[i].marks>maxMarks){

        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",e[i].rollno,e[i].name,e[i].marks);
        }
    }
    return 0;
}