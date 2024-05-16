<h1> Problem I </h1>

<h2>Problem Descrption </h2>

> * I. Palindrome
> * time limit per test1 second
> * memory limit per test256 megabytes
> * inputstandard input
> * outputstandard output
> ---
> * Given a number N
> * Print 2 lines that contain the following respectively:
> * Print N
> * in a reversed order and not leading zeroes.
> * If N
> * is a palindrome number print "YES" otherwise, print "NO.

<h2>Note </h2>

>* A palindrome number is a number that reads the same forward or backward.
>* For example: 12321, 101 are palindrome numbers, while 1201, 221 are not.
>* A leading zero is any 0 digit that comes before the first nonzero digit in a number for example : numbers (005 , 01 , 0123 , 02 , 000250 ) are leading zeroes but ( 5 , 123 , 20 ,2500 ) not leading zeroes numbers .
> ---
>* Input
>* Only one line containing a number N
 (1≤N≤107)
> 
>* Output
>* Print the answer required above.

<h2> Examples <h2>


>* input
>* 12121
>* output
>* 12121
>* YES
> --- 
>* input
>* 160
>* output
>* 61
>* NO

<h2> MY Solve </h2>

>* I Can't Solve This Problem .

<h2>Final Solve </h2>

``` c++
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

```

>>
<h2>Problem Solve On YouTube <h2>

>* [Link On YouTube](https://youtu.be/Z8awBjWa0fI?si=FPIsTfaoxu_4RdGC)
