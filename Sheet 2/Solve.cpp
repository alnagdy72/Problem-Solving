#include <iostream>
using namespace std ;

int main(){

string num ;
cin>>num; 
bool check = 0 ;
bool p = 0 ;
int len = num.length();

for(int i = 0 , j=len-1 ; i<len && j>=0 ; i++ , j--){
    if(num[i]!=num[j]){
        p=1;
    }
    if(num[j]!= '0'){
        check = 1 ;
    }if(num[j]=='0' && check ==0){
        continue;
    }
    cout<<num[j];
}
cout<<endl;

if(p==0){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


/*
 for(int i =0 ; i<num.length() ; i++){
  for(int j = num.length() ; j>=0 ; j--){
        
         }
    }
*/


    return 0 ; 
}