#include<iostream>
using namespace std;
void bubblesort(int *arr, int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = 0;  j<n-1-i; j++) { 
            if (arr[j+1]<arr[j]) 
            swap(arr[j+1], arr[j]);
        }
      
    }
    
}
int main(){
   int arr[5]={22,4,32,5,2};

 bubblesort(arr, 5);
  cout<<"answer is  =  ";
 for (int i = 0; i < 5; i++)
 {cout<<arr[i]<<"  ";
 }
 
}