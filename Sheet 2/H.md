<h1 style="text-align:center;background:yellow;color:black" > Problem H </h1>

<h2> Description problem  </h2>
>
> * H. One Prime
> * time limit per test3 seconds
> * memory limit per test64 megabytes
> *  input standard input
> * output standard output
> * Given a number X. Determine if the number is prime or not
>>
> ## <center> Note </center>
> * A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.
> * In other words : prime number divisible only by 1 and itself.
> * Be careful that 1 is not prime .
> * The first few prime numbers are
>
>    ![image](https://espresso.codeforces.com/cffbbc0a8003151adbd88c8cc77237c56ccb224a.png)
>
> * Input
> * Only one line containing a number X (2 ≤ X ≤ 105).
>
> * Output
> * print "YES" if the number is prime and "NO" otherwise.
> ---
>>
> ## <center>Example </center>
>>
> * input
> * 7
> * output
> * YES
> ---
> * input
> * 15
> * output
> * NO
> ---
> 
> ## <center> Note </center>
> * First Example :
> 
> * 7 is prime because it is not divisible by 2,3,4,5,6, and only divisible by 1 and itself, so the answer is YES.
> 
> * Second Example :
> 
> * 15 not is prime because it is divisible by 3 ,5, so the answer is NO.
> 
>
> --- 

> ## <center> My Solve </center>
```
#include <iostream>
using namespace std ; 

int main () {

    long long n ; 
    cin>> n; 
    
    for(int i = 2 ; i<=2 ; i++){
        if(n%i== 0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }

    return 0 ;
}

```
> 
> // Wrong Answer on Test 1
>
> ---
