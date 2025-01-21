#include <stdio.h>

struct Students{
    int rollno;
    char name[23];
    float marks;
};

int main() {
    int n;
    char grade;
    scanf("%d",&n);
    struct Students e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].rollno,e[i].name,&e[i].marks);
    
    if(e[i].marks>=85){
        grade = 'A';
    }
    else if(e[i].marks>=70 && e[i].marks<=84){
        grade = 'B';
    }
    else if(e[i].marks<=70){
        grade = 'C';
    }
    }

    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Grade: %f",e[i].rollno,e[i].name,grade);
    }
    return 0;
}