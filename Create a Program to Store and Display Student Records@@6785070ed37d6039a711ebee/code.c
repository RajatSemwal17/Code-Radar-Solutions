#include <stdio.h>

struct information{
    int rollNo;
    char name[100];
    float marks;
};

int main() {
    int n;
    scanf("%d",&n);
    struct information e1[n];

    for(int i=1;i<=n;i++){
    scanf("%d %s %f",&e1[i].rollNo,e1[i].name,&e1[i].marks);
    }

    for(int i=1;i<=n;i++){
    printf("Roll Number: %d, Name: %s, Marks: %f",e1[i].rollNo[i],e1[i].name,e1.marks);

    }
    return 0;
}