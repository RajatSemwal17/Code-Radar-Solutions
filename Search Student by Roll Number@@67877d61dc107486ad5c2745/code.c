#include <stdio.h>

struct info{
    int rollno;
    char name[100];
    float marks;
};

int main() {
    int n , searchRollNo , found =0 ;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].rollno,e[i].name,&e[i].marks);
    }
    scanf("%d",&searchRollNo);
    for(int i=0;i<n;i++){
        if(e[i].rollno == searchRollNo){
            printf("Roll Number: %d, Name: %s, Marks: %.2f",e[i].rollno,e[i].name,e[i].marks);

            found=1;
            break;
    }

    }
    if(!found){
        printf("Student not found");
    }
        return 0;
}