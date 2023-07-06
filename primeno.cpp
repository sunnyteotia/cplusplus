//WRITE A PROGRAM TO CHECK IF A NUMBER IS PRIME OR NOT//
/*#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"NON-PRIME"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"prime"<<endl;
    }
    return 0;
}*/
//WRITE A PROGRAM TO PRINT ALL THE DIGITS OF A POSITIVE DECIMAL NUMBER FROM RIGHT TO LEFT//
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        int rem=n%10;
        cout<<rem<<endl;
        n=n/10;
    }
    return 0;
}*/
//write a program to a reverse a number//
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;
    }
    cout<<reverse<<endl;
    return 0;
}*/
//write a program to check if a number is armstrong number//
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0){
        int lastdigit=n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    if(sum==originaln){
        cout<<"armstrong number"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }
    return 0;
}