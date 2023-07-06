//POINTERS
//WORKING DEMO//
 #include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<*aptr<<endl;
    *aptr=20;
    cout<<a<<endl;
    return 0;
}
// array and pointer//
/*#include<iostream>
using namespace std;
int main(){
int a[]={10,20,30};
cout<<*a<<endl;
int *ptr=a;
for(int i=0;i<3;i++){
    cout<<*(a+i)<<endl;
}
    return 0;
}*/
//SWAPPING 2 VARIABLES USING THE ADDRESS//
/*#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
int a=2;
int b=4;
swap(&a,&b);
cout<<a<<" "<<b<<endl;
    return 0;
}*/