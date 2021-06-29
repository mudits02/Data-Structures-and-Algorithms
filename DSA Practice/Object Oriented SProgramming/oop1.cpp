#include<iostream>
class student
{
private:
int age;

public:

int rollno;

//Default Constructor
student(){
    cout << "Const 1 called" <<endl;

}
// Parameterized Constructor
student(int rollno){
    this -> rollno = rollno;
    cout<< "Cons 2 called " << endl;
}
student(int a  , int r){
    cout<< " cons 3 called" << endl;
    age = a;
    rollno = r;
}



void display(){
    cout << age << " " << rollno <<endl;
}

void setAge(int a){
    if (a < 0)
    {
        return;
    }
    else{
        age = a;
    }
}
int getAge(){
    return age;
}
    
};


