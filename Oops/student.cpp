#include <iostream>
#include "student.h" //including class of student file named as student.h
using namespace std;
int main()
{
    // creating an object statically
    student s1; //creating object of student as s1
    student s2; //creating object of student as s2
    //creating multiple object
    student s3, s4, s5; //creating object of student as s3,s4,s5
    //creating an object dynamically
    student *s6 = new student;                    //creating object of student as s6
    s1.roll = 101;                                //assigning roll no for s1
    s1.age = 20;                                  //assigning age for s1
    s2.roll = 102;                                //assigning roll no for s2
    s2.age = 20;                                  //assigning age for s2
    s3.roll = 103;                                //assigning roll no for s1
    s3.age = 21;                                  //assigning age for s3
    s6->roll = 104;                               //here we can use -> or (*). for assigning or retriving data for object
    (*s6).age = 22;                               //assigning age for s6
    cout << s1.roll << " " << s1.age << endl;     //printing s1 rollno and age
    cout << s2.roll << " " << s2.age << endl;     //printing s2 rollno and age
    cout << s3.roll << " " << s3.age << endl;     //printing s3 rollno and age
    cout << (*s6).roll << " " << s6->age << endl; //printing s6 rollno and age
}