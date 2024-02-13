#include <iostream>
using namespace std;

void fillarray(int a[], int n){
	cout<<"Enter the elements in array:";
	for(int i =0; i<=n-1; i++){
		cin>>a[i];
	}
}

void swap(int &x, int &y){
	int t = x;
	x = y;
	y = t;
}

void displayarray(int a[], int n){
	for(int i=0; i<=n-1; i++){
		cout<<a[i]<<" ";
	}
}

void Insertionsort(int a[], int n){
	for (int j=1; j<=n-1; j++){
		int temp = a[j];
		int i = j-1;
		
		while(i>=0 && a[i]>temp){
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = temp;
	}
}


int main (){
	int n;
	cout<<"Enter the size of array :";
	cin>>n;
	
	int a[n];
	fillarray(a,n);
	displayarray(a,n);
	Insertionsort(a,n);
	cout<<"array after sorting :";
	cout<<endl;
	displayarray(a,n);
	
}
