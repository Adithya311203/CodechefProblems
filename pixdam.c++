#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int h,w,x,y,k;
        cin>>h>>w>>x>>y>>k;
        long long res=sqrt((h-y)*(h-y)+(w-x)*(w-x));
        (k>res)?cout<<1<<endl:cout<<0<<endl;
    }
    
	return 0;
}
