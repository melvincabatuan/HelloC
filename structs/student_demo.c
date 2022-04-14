#include <stdio.h>
#include <string.h> // needed by strcpy

//  DEFINE THE STRUCTURE : DEFINITION
typedef struct 
{
    char name[128]; // members
    int id, age;
    float gpa;
} Student;

int main()
{
    // DECLARE
    Student frosh; // Consider now the Student as a custom datatype
    // Assignment
    strcpy(frosh.name, "Jerome Dela Cruz");
    frosh.id = 1191234;
    frosh.age = 18;
    frosh.gpa = 95.89;


    printf("The name of my student is %s\n.", frosh.name);
    printf("The id of my student is %d\n.", frosh.id);
    printf("The age of my student is %d\n.", frosh.age);
    printf("The gpa of my student is %0.2f\n.", frosh.gpa);
    

    return 0;
}