#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        char a[n];
        for(int i=0;i<n;i++){
             cin>>a[i];  
        }
        int swipe=0;
        for(int i=0;i<n;i++){
            if(a[i]=='0'){
                swipe-=1;
                if(swipe<0){
                    break;
                }
                
            }
            else{
                swipe = x;
            }
            
        }
        (swipe<0)?cout<<"NO"<<endl:cout<<"YES"<<endl;
    }
    
	return 0;
}
