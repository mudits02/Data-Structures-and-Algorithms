#include <iostream>
using namespace std;

    int count(int n){
    if(n == 0){
        return 0;
    }
    int smallAns = count(n / 10);
    return smallAns + 1;
}

int main(){
	int p;
	cin>>p;
	int answer = count(p);
	cout<<answer;
	return 0;
}
