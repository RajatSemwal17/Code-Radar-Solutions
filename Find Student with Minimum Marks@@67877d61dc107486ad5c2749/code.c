#include <stdio.h>

struct info{

    int rollno;
    char name[30];
    float marks;
};

int main() {
    int n;
    float minMarks=0;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].rollno,e[i].name,&e[i].marks);
        
    if(e[i].marks < e[minMarks].marks){
        minMarks=i;
    }
        
    }
            printf("%f",e[minMarks].marks);
    return 0;
}