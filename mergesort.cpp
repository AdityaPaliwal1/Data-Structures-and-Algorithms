#include <iostream>
using namespace std;

void fillarray(int a[], int n){
	cout<<"Enter the elements in the array :";
	for(int i=0; i<=n-1; i++){
		cin>>a[i];
		
	}
	
}
void displayarray(int a[], int n){
	
	for(int i=0; i<=n-1; i++){
		cout<<a[i]<<" ";
		
	}
	
}
void merge(int a[], int l, int mid, int r){
	int n1 = mid-l+1;
	int n2= r-mid;
	int Left[n1+1] , Right[n2+1];
	
	for(int i=0; i<n1; i++)Left[i] = a[l+i];
	for(int i=0; i<n2; i++)	Right[i] = a[mid+1+i];
		
		Left[n1] = INT_MAX;
		Right[n2] = INT_MAX;

int i=0, j=0;
for(int k=l; k<=r; k++)
{
	if(Left[i]<Right[j]){a[k] = Left[i++];	}
	else {a[k] = Right[j++];}

	
}
	
	
}

void mergesort(int a[], int l, int r){
	if (l<r){
		int mid = (l+r)/2;
		mergesort(a,l, mid );
		mergesort(a,mid+1,r);
		merge(a,l,mid,r);
	}
}

int main ()
{
	int n;
	cout<<"Enter the size of array :";
	cin>>n;
	int a[n];
	
	fillarray(a,n);
	cout<<endl;
	cout<<"array before sorting ";
	displayarray(a,n);
	cout<<endl;
	mergesort(a,0,n-1);
	cout<<endl;
	cout<<"array after sorting :";
	displayarray(a,n);
	
	return 0;
} 
