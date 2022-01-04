/*finding nearest squareroot using binary search*/
#include<iostream>
using namespace std;

long long int squareroot(int n){

    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
     long long int ans=0;
    while (s<=e) { 
        
         long long int square=mid*mid;
       if (square==n){ 
           return mid;  
       }
       if (square<n) {
        ans=mid;
        s=mid+1;
       }
       else
       {
          e=mid-1;
       }
      
      mid=s+((e-s)/2);
    }
    return ans;
}
  
int main(){
    int n;
    cout<<"enter num = ";//enter a num 
    cin>>n;
 int answer=squareroot(n);
 cout<<"ans = "<<answer<<endl;
}
