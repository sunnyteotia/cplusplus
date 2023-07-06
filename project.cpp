/*#include<iostream>
using namespace std;
int average(int a,int b,int c){
    int z=(a+b+c)/3;
    return z;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<average(a,b,c)<<endl;
    return 0;
}*/
// sum of first natural number //
/*#include<iostream>
using namespace std;
int sum(int n){
    int a=0;
    for(int i=1;i<=n;i+=2){
        a+=i;
    }
    return a;
}
int main(){

    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
}*/
// greatest integer problem
/*#include<iostream>
using namespace std;
int greatest (int a,int b){
    int z=max(a,b);
    return z;
}
int main(){
int a,b;
cin>>a>>b;
cout<<greatest(a,b)<<endl;
    return 0;
}*/
/*#include<iostream>
using namespace std;
float circumference(float r){
    float c=2*3.14*r;
    return c;
}
int main(){
int r;
cin>>r;
cout<<circumference(r)<<endl;
    return 0;
}*/
// age problem //
/*#include<iostream>
using namespace std;
void age(int n){
    if(n>=18){
        cout<<"eligible to vote"<<endl;
    }
    else{
        cout<<"not eligible"<<endl;
    }
}
int main(){
int n;
cin>>n;
age(n);
    return 0;
}*/
// do while condition problem infinite loop//
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
do{
    cout<<"hare krishna "<<endl;
    n++;
}while(n>0);
    return 0;
}*/
// counting problem //
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a=0;
int b=0;
int c=0;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>0){
        a++;
    }
    else if(arr[i]<0){
        b++;
    }
    else{
        c++;
    }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
        
    
    

    return 0;
}*/
// power problem //
/*#include<iostream>
using namespace std;
int power(int n,int x){
    if(x==0){
        return 1;
    }
    int prevpower=power(n,x-1);
    return n*prevpower;
}
int main(){
int n,x;
cin>>n>>x;
cout<<power(n,x)<<endl;
    return 0;
}*/
// fibonacci series //
/*#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
int n;
cin>>n;
cout<<fibonacci(n)<<endl;
    return 0;
}*/
// gcd of 2 numbers //
