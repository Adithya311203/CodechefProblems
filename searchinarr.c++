#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    int start=0,end=n-1,mid;
    while(start<=end){
        mid=(start+end)/2;
        if(arr[mid]==x){
            cout<<"YES"<<endl;
            break;
        }
        else if(arr[mid]<x)start=mid+1;
        else end=mid-1;
    }
    if(start>end)cout<<"NO"<<endl;
	return 0;
}
