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
void swap(int &x, int &y){
	int t=x; x=y; y=t;
}
int partition (int a[],int l, int r){
	int i = l-1, pi = a[r];
	for(int j=l;j<=r;j++){
		if(a[j]<pi) swap(a[++i],a[j]);
	}
	swap(a[++i],a[r]);
	return i;
}

void quicksort(int a[],int l,int r){
	if (l<r){
	
	int pos = partition(a,l,r);
	quicksort(a,l,pos-1);
	quicksort(a,pos+1,r);
}
}

int main (){
	int n;
	cout<<"Enter the size of array :";
	cin>>n;
	int a[n];
	fillarray(a,n);
	cout<<endl;
	cout<<"Array before sorting :";
	displayarray(a,n);
	quicksort(a,0,n-1);
	cout<<endl;
	cout<<endl;
	cout<<"Array after sorting :";
	displayarray(a,n);
	return 0;
	
}

