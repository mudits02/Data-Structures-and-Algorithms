#include<iostream>
using namespace std;


 void SelectionSort(int input[], int n)
 {
 	// Main operation
 	for(int i=0;i<n - 1;i++)
	 {
 		int min = input[i], minIndex = i;
 		for(int j = i+1;j<n;j++)
		 {
 			if(input[j]<min)
			 {
 				min = input[j];
 				minIndex = j;
			 }
		 }
		 //swap of the places
		 int temp = input[i];
		 input[i] = input[minIndex];
		 input[minIndex] = temp;
		 
	 }
}
	 
	 int main()
	 {
	 	int n;
	 	cin>>n;
	 	int input[n];
	 	for(int i = 0;i<n;i++){
	 		cin>>input[i];
		 }
		 SelectionSort(input , n);
		 for(int i = 0;i<n;i++){
		 	cout<<input[i]<<" ";
		 }
		 return 0;
	 }
 
 
