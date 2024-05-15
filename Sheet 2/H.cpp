#include <iostream>
using namespace std ; 

int main () {
    bool check = 0 ; 
    int n ; 
    cin>> n; 
    
    for(int i = 2 ; i<n ; i++){
        if(n%i == 0 ){
        check = 1; 
        }
    }

    if(check == 0 ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0 ;
}

