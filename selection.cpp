#include<iostream>
using namespace std;
void selectionsort(int *arr, int n){
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1;  j<n; j++) { 
            int minindex=i;
            if (arr[minindex]>arr[j])  {
               minindex=j;
            }
            swap(arr[minindex], arr[i]);
        }
      
    }
    
}
int main(){
   int arr[5]={22,4,32,5,2};

   selectionsort(arr, 5);
  cout<<"answer is  =  ";
 for (int i = 0; i < 5; i++)
 {cout<<arr[i]<<"  ";
 }
 
}