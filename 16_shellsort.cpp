#include <iostream>
using namespace std;


void fillarray(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<i<<": ";
        cin>>a[i];
    }
}
void displayarray(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
void swap(int &x,int &y){
    int temp;
    temp = x;
    x = y; 
    y = temp;
}
void shellsort(int a[],int n){
    //in shell <sort>, we increase the gap of insertion sorting and use the same insertion sort approach
    int gap = n/2;//setting the gap to n/2

    while(gap>0){
        for(int i=gap; i<=n-1; i++){
            int temp = a[i];
            int j=i;
            
            while(j>=gap && a[j-gap]>temp){
                a[j] = a[j-gap];
                j = j-gap;
            }
            a[j] = temp;
        }
        gap = gap/2;
    }
}
int main(){
    int a[8];
    cout<<"Fill the elements in the array..."<<endl;
    fillarray(a,8);

    cout<<endl;
    cout<<"The unsorted array look like this..."<<endl;
    displayarray(a,8);

    cout<<endl<<endl;
    cout<<"Sorting the array..."<<endl;
    shellsort(a,8);

    cout<<endl;
    cout<<"The sorted array look like..."<<endl;
    displayarray(a,8);


    
    return 0;
}