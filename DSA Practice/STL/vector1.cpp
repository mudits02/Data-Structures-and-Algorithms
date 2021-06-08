#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	vector<int>::iterator it;
	int input;
	while(cin>>input){
		v.push_back(input);
	}
	for(it = v.begin() ; it!= v.end();it++){
		cout<<*it<<endl;
	}
	return 0;
}
