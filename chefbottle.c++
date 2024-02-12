#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,k;
        cin>>n>>x>>k;
        ((k/x)<n)?cout<<k/x<<endl:cout<<n<<endl;
    }
    
	return 0;
}
