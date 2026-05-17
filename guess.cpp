#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int low ,high;
    cin>>low>>high;
    int mid = (low+high)/2;
    while (true){
        if (a< mid){
            mid = mid-1;
        }
        else if(a>mid) {
            mid=mid+1;
        }
        else {
            cout<<mid;
            return 0;
        }
       

    }

}
