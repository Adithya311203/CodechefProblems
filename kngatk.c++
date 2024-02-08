#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        (n<3)?cout<<arr[n-2]<<endl:cout<<arr[n-2]<<endl;
    }
	return 0;
}
