#include<iostream>
using namespace std;
int binarysearch(int arr[], int size ,int key){
    int start=0,end=size-1;
    int mid=start+((end-start)/2);
    while (start<=end){
    if (arr[mid]==key)
    {
        return mid;
         }
   if (arr[mid]<key) {
        start=mid+1;
        }
    else{
        end=mid-1;  
    }    
     int mid=start+((end-start)/2);
    } 
    return -1;
}
int main(){
int key;
cin>>key;
int arr[5]={2,5,7,8,9};
int index=binarysearch(arr, 5, key);
cout<<index;

}