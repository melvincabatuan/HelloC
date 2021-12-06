#include <stdio.h>
#include <string.h>


// DEFINITION = No memory allocation
typedef struct {
    // char *pname;
    char name[25];
    int age;
    char branch[10];
    char gender;    // F or M
} Student;  
// I am using the Student as ALIAS

// No, not a function


void display(Student s){
    printf("Value is %s and the size of our name is %d.\n", s.name, sizeof(s.name));
    printf("Value is %d and the size of our age is %d.\n", s.age,sizeof(s.age));
    printf("Value is %s and the size of our branch is %d.\n", s.branch, sizeof(s.branch));
    printf("Value is %c and the size of our gender is %d.\n", s.gender, sizeof(s.gender));

}



int main()
{

    // Declaration of a structure
    Student frosh = {"Alfred Felix", 18, "Manila", 'M'}; // Memory is allocated here

    Student sopho = {"Arcie Brijine", 18, "Manila", 'F'};

    display(frosh);
    display(sopho);

    // Asignment of values
    // strcpy(frosh.name,"Ira Third");
    // frosh.age = 18;
    // strcpy(frosh.branch, "Manila");
    // frosh.gender = 'M';

 


    // Display








    // Student frosh; // declaring the struct variable
    // Student sopho;

    // // Assignment
    // strcpy(frosh.name, "Sherlock Holmes");
    // frosh.id = 1193479;
    // frosh.GPA = 95.94;

    // strcpy(sopho.name, "Peter Parker");
    // sopho.id = 1183479;
    // sopho.GPA = 95.94;

    // // Display
    // printf("The name of the student is %s.\n", frosh.name);
    // printf("The id of the student is %d.\n", frosh.id);
    // printf("The GPA of the student is %f.\n", frosh.GPA);

    // printf("The name of the student is %s.\n", sopho.name);
    // printf("The id of the student is %d.\n", sopho.id);
    // printf("The GPA of the student is %f.\n", sopho.GPA);
    return 0;
}

/*
OUTPUT:
The name of the student is Sherlock Holmes.
The id of the student is 1193479.
The GPA of the student is 95.940002.
*/