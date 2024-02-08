#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long int x,y,z;double p;
        cin>>p>>x>>y>>z;
        if(z==1){
            p+=(p*y)/100;
        }
        else p-=(p*x)/100;
        printf("%.10f\n",p);
    }
    
	return 0;
}
