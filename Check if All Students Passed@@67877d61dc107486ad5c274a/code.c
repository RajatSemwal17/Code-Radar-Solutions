#include <stdio.h>

struct info{
    int rollno;
    char name[30];
    float marks;
};

int main() {
    int n;
    int passed=1;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].rollno,e[i].name,&e[i].marks);
        if(e[i].marks<50)
        passed=0;
    }
        
    if(passed){
        printf("All Passed");
    }
    else{
        printf("Not All Passed");
    }
    return 0;
}