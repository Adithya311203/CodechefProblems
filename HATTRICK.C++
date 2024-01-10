    #include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    char a[6],f=0;
    for(int i=0;i<6;i++){
      cin>>a[i];  
    }
    
    for(int i=1;i<5;i++){
      if(a[i]=='W'){
          if(a[i-1]=='W'&&a[i+1]=='W'){
              f=1;
              break;
          }
      }  
    }
    (f==1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
   
    
    
    
	return 0;
}
