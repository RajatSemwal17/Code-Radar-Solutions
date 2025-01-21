#include <stdio.h>

struct Students{
    int rollno;
    char name[23];
    float marks;
};

char grade(float marks){
    if(marks>=85){
        return 'A';
    }
    else if(marks<70){
        return 'B';
    }
    else{
        return 'C';
    }
}


int main() {
    int n;
    scanf("%d",&n);
    struct Students e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].rollno,e[i].name,&e[i].marks);
    }

    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Grade: %c\n",e[i].rollno,e[i].name,grade(e[i].marks));
    }
    return 0;
}