#include <iostream>
using namespace std;

//here we fill the array with elements
void fillarray(int a[], int n){
	cout<<"enter elements ";
	for(int i=0; i<=n-1; i++){
		cin>>a[i];
	}
} 

//function for swapping operation
void swap(int &a, int &b){
	int t = a;
	b = a;
	b = t;
}

//here we display the inputs elements
void displayarray(int a[], int n){
	for(int i=0; i<=n-1; i++){
		cout<<a[i]<<" ";
	}

}

// Sort the elements by Selection sorting method
void selectionsort(int a[], int n){
	for(int i=0; i<=n-2; i++){
		int min = i;
		for(int j = i+1; j<=n-1; j++){
			if(a[min] > a[j])
				min = j;
			
		}
		if (min!=i){
			swap(a[min],a[i]);
		}
	}
}

int main (){
	int n;
	cout<<"Enter the size of array :";
	cin>>n;
	int a[n];
	
	fillarray(a,n);
	displayarray(a,n);
	selectionsort(a,n);
	cout<<endl;
	cout<<"sorted array:";
	displayarray(a,n);
	
	}
