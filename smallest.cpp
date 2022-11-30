#include <iostream>
#include <limits.h>
using namespace std;
void fillArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<i<<": ";
        cin>>arr[i];
    }
}
int smallestNumber(int arr[],int n){
    int smallest = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}
int main(){
    int n;
    cout<<"Enter the number you want to enter: ";
    cin>> n;

    //dynamic memory allocation for array
    int *arr = new int[n];

    cout<<"Enter the elements...."<<endl;
    fillArray(arr,n);
    
    int result = smallestNumber(arr,n);
    cout<<"Smallest number is: "<<result<<endl;

    //deallocating array memory manually
    delete[] arr;

    return 0;
}
