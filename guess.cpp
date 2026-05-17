#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int low ,high;
    cin>>low>>high;
    
    while (low<=high){
        int mid = (low+high)/2;
        if (a< mid){
            high= mid-1;
        }
        else if(a>mid) {
            low=mid+1;
        }
        else {
            cout<<mid;
            return 0;
        }
       

    }
    cout<< "Number not found";
}






    
   

