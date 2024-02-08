#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,x;
        cin>>n>>x;
        long long int d[n],c=0;
        for(int i=0;i<n;i++)cin>>d[i];
        for(int i=1;i<n;i++){
            
                if(d[i-1]==1||d[i]==1)c+=x;
            
        }
        cout<<c+x*d[0]<<endl;
        
    }
    
	return 0;
}
