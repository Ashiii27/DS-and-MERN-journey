#include<bits/stdc++.h>
using namespace std;    
int maxElement(int arr[],int n) {
    //brute force
    //sort the array and then return the last element 

    //optimal approach
    int largest = arr[0];
    for (int i = 1; i < n;i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}

int main() {
    
//Q1. Finding the largest element in an array
int n;
cout<<"enter the size of the array : ";
cin>>n;
int arr[n];
cout<<"enter the array elements: ";
for(int i=0; i<n; i++){
    cin>>arr[i];
}

int largest = maxElement(arr, n);
cout<<"the largest element in the array is: "<<largest<<endl;

return 0;

}