#include <iostream>
using namespace std;
int low(int arr[], int n){
    int lowest=101;
    for(int i=0;i<n;i++){
        if(arr[i]<lowest){
            lowest=arr[i];
        }
    }
    return lowest;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],s=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s+=arr[i];
        }
        int less=low(arr,n);
        cout<<s-less<<endl;
        
    }
    
	return 0;
}
