#include <stdio.h>

struct info{
    int rollno;
    char name[40];
    float marks;
};

void Descending(struct info *a,struct info *b){
    struct info temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    scanf("%d",&n);
    struct info e[n];
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&e[i].rollno,e[i].name,&e[i].marks);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(e[j].marks<e[j+1].marks){
                Descending(&e[j],&e[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",e[i].rollno,e[i].name,e[i].marks);
    }
    return 0;
}




