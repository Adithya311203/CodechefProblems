#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n,x1,x2,x3,x4,x5,x6;
        cin>>n>>x1>>x2>>x3>>x4>>x5>>x6;
        long long int cost=(x1+x2+x3+x4+x5+x6);
        (n%2==0)?n/=2:n=(n+1)/2;
        cout<<cost*n<<endl;
        
    }
    
	return 0;
}
