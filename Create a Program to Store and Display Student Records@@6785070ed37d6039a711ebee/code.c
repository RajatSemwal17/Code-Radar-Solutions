#include <stdio.h>

struct information{
    int rollNo;
    int name;
    float marks;
}

int main() {
    struct information e1;
    scanf("%d %s",&(e1.rollNo),e1.name,&marks);
    printf("Roll Number: %d, Name: %s, Marks: %f");
    return 0;
}