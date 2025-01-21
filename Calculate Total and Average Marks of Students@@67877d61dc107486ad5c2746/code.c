#include <stdio.h>

struct info{
    int rollno;
    char name[40];
    float marks;
};

int main() {
    int n;
    float numbers;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].rollno,e[i].name,&e[i].marks);
        numbers += e[i].marks;
    }
    float average = numbers/n;
    printf("Total Marks: %.2f",numbers);
    printf("Average Marks: %.2f",average);
    return 0;
}