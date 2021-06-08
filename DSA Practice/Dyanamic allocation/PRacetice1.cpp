#include<iostream>
using namespace std;
int main(){
    int a = 65; 
    int *p = &a;
    char* pc = (char *)p;
    float* pf = (float *)pc; // Expliocit Typecasting
    cout<<p <<" " << pc << " " << pf<<endl;
    cout<<*pc <<endl;
    cout<<*(pc + 1) << endl;
    return 0;

}