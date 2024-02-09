#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        if(a==b) cout<<"YES"<<endl;
        else{
            int sub=abs(a-b);
            (sub%(2*x)==0 && sub>x)?cout<<"YES"<<endl:cout<<"NO"<<endl;
        }
    }
    
	return 0;
}
