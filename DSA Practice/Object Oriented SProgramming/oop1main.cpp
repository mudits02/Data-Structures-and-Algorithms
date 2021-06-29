#include<iostream>
using namespace std;
#include "oop1.cpp"

int main(){
    student s1;
    student *s2 = new student;
    s1.rollno = 1;
    s2 -> rollno = 2;
    s1.setAge(20);
    s2 -> setAge(21);
    s1.display();
    s2->display();
    student *s3 = new student();
    s3 -> display();
    student *s4 = new student(10);
    s4 -> display();
    student *s5 = new student(20 , 2);
    s5 -> display();
}