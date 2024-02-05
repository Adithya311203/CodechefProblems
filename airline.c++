#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,e,f=0;
        cin>>a>>b>>c>>d>>e;
        int arr[3]={a,b,c};
        sort(arr,arr+3);
        if(arr[2]<=e){
            if(arr[0]+arr[1]<=d){
                cout<<"YES"<<endl;f=1;
            }
        }
        else if(arr[1]<=e){
            if(arr[0]+arr[2]<=d){
                cout<<"YES"<<endl;f=1;
            }
        }
        else if(arr[0]<=e){
            if(arr[1]+arr[2]<=d){
                cout<<"YES"<<endl;f=1;
            }
        }
        if(f==0)cout<<"NO"<<endl;
    }
    
	return 0;
}
