#include <stdio.h>

struct Students{
    int rollno;
    char name[23];
    float marks;
};

int main() {
    int n;
    scanf("%d",&n);
    struct Students e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].rollno,e[i].name,&e[i].marks);
    
    if(e[i].marks>=85){
        printf("A");
    }
    else if(e[i].marks>=70 && e[i].marks<=84){
        printf("B");
    }
    else if(e[i].marks<=70){
        printf("C");
    }
    }
    return 0;
}