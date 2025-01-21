#include <stdio.h>

struct info{
    int rollno;
    char name[100];
    float marks;
}

int main() {
    int n;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&(e[i].rollno),e[i].name,&(e[i].marks));
    }
    return 0;
}