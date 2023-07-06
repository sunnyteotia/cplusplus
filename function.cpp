//write a program to add 2 numbers using functions//
/*#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
    return 0;
}*/
//write a program to print a given number using functions//
/*#include <iostream>
using namespace std;
void display(int a){
    cout<<a<<endl;
    return;
}
int main(){
    int a;
    cin>>a;
    printf(a);
    return 0; 
}*/
//print all prime numbers between 2 given numbers//
/*#include <iostream>
#include<math.h>
using namespace std;
bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
    
    if(num%i==0){
        return false;
    }
} return true;
}

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}*/
//fibonacci series//
/*#include<iostream>
using namespace std;
void fib(int n){
    int t1=0;
    int t2=1;
    int nextterm;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return;
    
}
int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}*/
//factorial of a number n//
/*#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for ( int i = 2; i<=n; i++)
    {
        factorial*=i;
    }
    return factorial;
    
}
int main(){
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;
}*/
//calculate binary coefficient(ncr)//
/*#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }return factorial;
}
int main(){
int n,r;
cin>>n>>r;
int ans=fact(n)/(fact(r)*fact(n-r));
cout<<ans<<endl;
return 0;
}*/
//print pascal triangle//
/*#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
//functions placement questions//
//sum of first n natural number//
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
        ans +=i;
        return ans;
    }

int32_t main(){
    int n;
    cin>>n;
    cout<< sum(n) <<endl;
 
}*/
// pythagorian triplet//
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool check(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if (a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=z;
    }
    if(a*a==b*b+c*c)
    return true;
    else
    return false;
}

 int32_t main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"pythagorean triplet";
    }else{
        cout<<"not a pythagorean triplet";
    }
    return 0;
} */
//binary to decimal//
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarytodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }return ans;
}

 int32_t main(){
    int n;
    cin>>n;
    cout<<binarytodecimal(n)<<endl;
    return 0;
}*/
// octal to decimal//
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int octaltodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans+=x*y;
        x*=8;
        n/=10;
    }return ans;
}

 int32_t main(){
    int n;
    cin>>n;
    cout<<octaltodecimal(n)<<endl;
    return 0;
}*/
//hexadeciaml to decimal//

/*#include<bits/stdc++.h>
using namespace std;
int hexadecimaltodecimal(string n){
    int ans=0;
    int x=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0'&& n[i]<='9'){
            ans +=x*(n[i]-'0');
        }
        else if(n[i]>='A'&&n[i]<='F') {
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
        return ans;

}
 int32_t main(){
    string n;
    cin>>n;
    cout<<hexadecimaltodecimal(n)<<endl;
    return 0;
}*/
//decimal to binary//
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int decimaltobinary(int n){
    int x=1;
    int ans=0;
    while (x<=n)
    x*=2;
    x/=2;
    while(x>0){
        int lastdigit= n/x; 
        n-= lastdigit*x;
        x/=2;
        ans=ans*10+lastdigit;
    }
    
        return ans;
}


 int32_t main() {
    int n;
    cin>>n;
    cout<<decimaltobinary(n)<<endl;
    return 0;
}*/
//decimal to octal//
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int decimaltooctal(int n){
    int x=1;
    int ans=0;
    while (x<=n)
    x*=8;
    x/=8;
    while(x>0){
        int lastdigit= n/x; 
        n-= lastdigit*x;
        x/=8;
        ans=ans*10+lastdigit;
    }
    
        return ans;
}


 int32_t main() {
    int n;
    cin>>n;
    cout<<decimaltooctal(n)<<endl;
    return 0;
}*/
//decimal to hexadecimal//
/*#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string decimaltohexadecimal(int n){
    int x=1;
    string ans="";
    while (x<=n)
    x*=16;
    x/=16;
    while(x>0){
        int lastdigit= n/x; 
        n-= lastdigit*x;
        x/=16;
        if (lastdigit<=9)
        ans=ans+to_string(lastdigit);
        else{
            char c='A'+lastdigit -10;
            ans.push_back(c);
        }
    }
    
        return ans;
}


 int32_t main() {
    int n;
    cin>>n;
    cout<<decimaltohexadecimal(n)<<endl;
    return 0;
 }*/
 //add 2 binary numbers//
 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverse(int n){
    int ans=0;
    while(n>0){
        int lastdigit =n%10;
        ans=ans*10 + lastdigit;
        n/=10;
    }
    return ans;
}
int addbinary(int a,int b){
    int ans=0;
    int prevcarry=0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans= ans*10+prevcarry;
            prevcarry=0;
        }else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
            if (prevcarry==1){
                ans=ans*10+0;
                prevcarry=1;
            }
        else{
            ans=ans*10+1;
            prevcarry=0;
        }
        }
        else {
            ans=ans*10+prevcarry;
            prevcarry=1;
        }
        a/=10;
        b/=10;
    }
        while(a>0){
            if(prevcarry==1){
                if(a%2==1){
                    ans=ans*10+0;
                    prevcarry=1;
                }
                else{
                    ans=ans*10+1;
                    prevcarry=0;
                }
            }
            else
                ans=ans*10+(a%2);
            
            a/=10;
        }
    
    
        while(b>0){
            if(prevcarry==1){
                if(b%2==1){
                    ans=ans*10+0;
                    prevcarry=1;
                }
                else{
                    ans=ans*10+1;
                    prevcarry=0;
                }
            }
            else
                ans=ans*10+(b%2);
            
            b/=10;
        }
    if(prevcarry==1){
        ans=ans*10+1;
    }
    ans=reverse(ans);
    
 return ans;
}


 int32_t main()
 {
    int a,b;
    cin>>a>>b;
    cout<<addbinary(a,b)<<endl;
    return 0;
}