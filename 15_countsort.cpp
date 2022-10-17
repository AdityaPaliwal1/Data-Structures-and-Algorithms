#include <iostream>
using namespace std;

void fillarray(int a[],int n){
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
}
void displayarray(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
void countSort(int a[],int n){
    int max = findMax(a,8);
    int count[max+1] ={0};
    int output[8];

    for(int i=0; i<n; i++){
        count[a[i]]++;
    }

    for(int i=1; i<=max; i++){
        count[i] = count[i] + count[i-1];
    }

    for(int i=n-1; i>=0; --i){
        output[--count[a[i]]] = a[i];
    }
}


int main(){
    int a[8];
    
    fillarray(a,8);
    cout<<endl;
    cout<<"Unsorted array is..."<<endl;
    displayarray(a,8);
    
    countSort(a,8);
    
    cout<<"Sorted array is..."<<endl;
    displayarray(a,8);
    
    
    
    return 0;
}
