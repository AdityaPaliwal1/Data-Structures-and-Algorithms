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
void countSort(int a[],int n,int digit){
    int count[10] ={0};

    int output[8];

    for(int i=0; i<n; i++){
        count[(a[i]/digit)]%10;
    }

    for(int i=1; i<=9; i++){
        count[i] = count[i] + count[i-1];
    }

    for(int i=n-1; i>=0; --i){
        output[--count[(a[i]/digit)]%10] = a[i];
    }

    cout<<"After sorting at "<<digit<<" place"<<endl;
    displayarray(output,n);

    for(int i=0; i<n; i++){
        a[i] = output[i];
    }
}
void radixsort(int a,int n){
    int max = findMax(a,8);
    int digit = 1;

    while(max>0){
        countSort(a,n,digit);
        max = max/10;
        digit = digit*10;
    }
}
int findMax(int a[],int n){
    int max = a[0];
    for(int i=1; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

int main(){
    int a[8];
    
    fillarray(a,8);
    cout<<endl;
    cout<<"Unsorted array is..."<<endl;
    displayarray(a,8);

    cout<<endl;
    cout<<"Sorting the array..."<<endl;
    radixsort(a,8);
    
    cout<<"Sorted array is..."<<endl;
    displayarray(a,8);
    
    
    
    return 0;
}
