#include <stdio.h>

struct information{
    int rollNo;
    char name[100];
    float marks;
}

int main() {
    struct information e1;
    scanf("%d %s %f",&(e1.rollNo),e1.name,&(e1.marks));
    printf("Roll Number: %d, Name: %s, Marks: %f",e1.rollNo,e1.name,e1.marks);
    return 0;
}