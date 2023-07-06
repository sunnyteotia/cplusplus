//get bit//
/*#include<iostream>
using namespace std;
int getBit(int n,int pos) {
    return ((n & (1<<pos))!=0);
}
int main(){
cout<<getBit(5,2)<<endl;

    return 0;
}*/
// set bit //
/*#include<iostream>
using namespace std;
int setBit(int n,int pos){
    return (n | (1<<pos));
}
int main(){

cout<<setBit(5,1)<<endl;
    return 0;
}*/
// clear bit//
/*#include<iostream>
using namespace std;
int clearbit(int n,int pos){
    int mask=~(1<<pos);
    return (n & mask);
}
int main(){
cout<<clearbit(5,2)<<endl;
    return 0;
}*/
// update bit//
/*#include<iostream>
using namespace std;
int updatebit(int n,int pos,int value){
    int mask = ~(1<<pos);
    n=n & mask ;
    return (n | (value<<pos));
}
int main(){
cout<<updatebit(5,1,1)<<endl;
    return 0;
}*/
// practice of bits manupulation //
//program to check if a given number is power of 2//
/*#include<iostream>
using namespace std;
bool ispowerof2(int n){
    return (n && !(n & n-1));
}
int main(){
cout<<ispowerof2(16)<<endl;
    return 0;
}*/
// program to count the number of ones in binary representation of a number //
/*#include<iostream>
using namespace std;
int numberofones(int n){
    int count=0;
    while(n){
        n=n & (n-1);
        count++;
    }
    return count;
}
int main(){
    cout<<numberofones(19)<<endl;
    return 0;
}*/
// program to generate all possible subsets of a set {a,b,c}
/*#include<iostream>
using namespace std;
void subsets(int arr[],int n ){
    for(int i=0;i < (1<<n);i++){ //here 1<<n is 2 ki power n //
        for(int j=0;j<n;j++){
            if (i & (1<<j) ){
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int main(){
 int arr[4]={1,2,3,4};
 subsets(arr,4);

    return 0;
}*/
// program to find a unique number in a array where all numbes except one,are present twice//
// by xor operator//
/*#include<iostream>
using namespace std;
int unique(int arr[],int n){

    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    return xorsum ;
}
int main (){

int arr[]={1,2,3,4,1,2,3};
cout<<unique(arr,7)<<endl;
    return 0;
}*/
// program to find 2 unique numbers in an array where all numbers except two , are present twice //
/*#include<iostream>
using namespace std;
int setBit(int n ,int pos){
return ((n & (1<<pos))!=0);
}
void unique(int arr[],int n){

    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit=xorsum & 1;
        pos++;
        xorsum =xorsum>>1;
    } 
    int newxor=0;
    for(int i=0;i<n;i++){
        if(setBit(arr[i],pos-1)){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(tempxor^newxor)<<endl;
}
int main(){
int arr[]={1,2,3,1,2,3,5,7};
unique(arr,8);
    return 0;
}*/
// program to find a unique number in an array where all numbers except one ,are resent thrice //
#include<iostream>
using namespace std;

    bool getBit(int n,int pos){
        return ((n & (1<<pos))!=0);
    }
    int setBit(int n,int pos ){
        return (n| (1<<pos));
    }
    int unique(int arr[],int n){
        int result=0;
        for(int i=0;i<64;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                if(getBit(arr[j],i)){
                    sum++;
                }
            }
            if(sum%3!=0){
                result=setBit(result ,i);
            }
        }
        return result;
    }

int main(){
 int arr[]={1,2,3,1,2,3,1,2,3,4};
 cout<<unique(arr,10)<<endl;
    return 0;
}