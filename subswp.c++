#include <iostream>
using namespace std;
int fn(int x,int y){
    while(x!=0){
        int temp=x;
        x=y%x;
        y=temp;
            
        }return y;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        
        cout<<fn(x,y)<<endl;
    }
    
	return 0;
}
