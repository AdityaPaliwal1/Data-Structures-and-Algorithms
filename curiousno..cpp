#include <iostream>
using namespace std;

int fact(int n){
	if(n==0 || n==1)
	return 1;
	else{
		return n*fact(n-1);
	}
	
}
int main(){
	int sum =0, n, rem;
	cout<<"Enter number here :";
	cin>>n;
	for(int i=0;i<=n-1;i++){
	 rem = n%10;
	 sum = sum + fact(rem);
	 n = n/10;
	
	 if(sum==n){
	 	cout<<n<<"Curious Number ";
	 }
	 return 0;
}
}
