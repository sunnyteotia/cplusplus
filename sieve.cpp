// sieve of eratosthenes//
//finding prime no. in range without sieve of eratosthenes
/*#include <iostream>
using namespace std;
bool check_prime (int n){
    for(int i=2;i*i<=n;i++){
        if(n % i==0)
        return false;
    }
    return true;
}
void get_primes_till_n(int n){
    for(int i=2;i<=n;i++){
        if(check_prime(i)){
            cout <<i<< " ";
        }
    }
}

int main (){
    int n;
    cin>>n;

get_primes_till_n(n); //not completed

    return 0 ;
}*/
//asme question as above by sieve eratosthenes //
/*#include<iostream>
using namespace std;
void primesieve(int n){
    int prime[n+1]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i; j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main (){
int n;
cin>>n;
primesieve(n);

    return 0;
} */
// prime factorization using sieve //
/*#include <iostream>
using namespace std;
void primefactor(int n){
    int spf[n+1]={0};
    for(int i=2;i<=n;i++){
        spf[i]=i;
    }    
    for(int i=2;i<=n;i++){
        if (spf[i]==i){
            for(int j=i*i;j<=n;j+=i){
                if (spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
    while (n !=1){
        cout<<spf[n]<<" ";
        n=n/spf[n];
    }
}
int main (){
int n;
cin>>n;
primefactor(n);
    return 0;
}*/