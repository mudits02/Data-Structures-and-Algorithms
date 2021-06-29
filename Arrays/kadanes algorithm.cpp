#include<iostream>
using namespace std;

int max_sum(int* arr , int n){
    int cur = 0;
    int best = 0;
    for(int  i=0 ; i < n; i++){
        cur = cur + arr[i];
        if(best < cur){
            best = cur;
        }
        if(cur < 0){
            cur = 0';
        }
    }
    return best;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int  i =0;i<n;i++){
        cin>>arr[i];

    }
    int a = max_sum(arr , n);
    cout<<a;
}