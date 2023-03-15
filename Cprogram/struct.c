#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int roll;
}s1,s2;


int main()
{
    // strcpy(s1.name,"mohit");
    // s1.roll = 10;
    struct student s[10];
    strcpy(s[0].name,"hda");
    s[0].roll =10;

    strcpy(s2.name,"pavan");
    s2.roll = 20;
    printf("%s %d ",s[0].name,s[0].roll);
    printf("%s %d",s2.name,s2.roll);
    
    return 0;

}