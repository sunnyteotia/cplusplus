// program for sum till n //
/*#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum=sum(n-1);
    return n+prevsum;
}
int main (){
int n;
cin>>n;
cout<<sum(n)<<endl;
    return 0;
}*/
// program to calculate n raised to the power p//
/*#include<iostream>
using namespace std;
int power(int n,int p){
    if(p==0){
        return 1;
    }
   int  prevpower=power(n,p-1);
   return n*prevpower;
}
int main (){
int n,p;
cin>>n>>p;
cout<<power(n,p)<<endl;

    return 0;
}*/
// program to find factorial of a number //
/*#include<iostream>
using namespace std;
int fact(int n){
if(n==0){
    return 1;
}
int prevfact=fact(n-1); // you can directly do by simply n*fact(n-1)//
return n*prevfact;
}
int main (){
int n;
cin>>n;
cout<<fact(n)<<endl;
    return 0;
}*/
// program to find fibonacci series//
/*#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main (){
int n;
cin>>n;
cout<<fibonacci(n)<<endl;
    return 0;
}*/
//  progran to print number in series//
/*#include<iostream>
using namespace std;
void dec(int n){
    if(n==1){
    cout<<"1"<<endl;
    return ;
}
cout<<n<<endl;
dec(n-1);
}
void inc(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
int main (){
int n;
cin>>n;
inc(n),dec(n);
    return 0;
}*/
// program to check if an array if sorted or not //
/*#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarray=sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restarray);

}
int main(){
int arr[]={1,2,3,4,5};
cout<<sorted(arr,5)<<endl;
return 0;
}*/
// program to find the first and last occurence of a number //
/*#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i, int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restarray=lastocc(arr,n,i+1,key);
    if(restarray!=-1){
        return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
int arr[]={4,2,1,2,5,2,7};
cout<<firstocc(arr,7,0,2)<<endl;
cout<<lastocc(arr,7,0,2)<<endl;
    return 0;
}*/
// print string in reverse //
/*#include <iostream>
using namespace std;
void reverse(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}
int main()
{
    reverse("mar");

    return 0;
}*/
// replace pi with 3.14//
/*#include<iostream>
using namespace std;
 void replacepi(string s){
    if(s.length()==0){
        return ;// base condition//
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        replacepi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
 }
int main(){
replacepi("pippppiiiipi");
    return 0;
}*/
// tower of hanoi//
/*#include<iostream>
using namespace std;
void towerofhanoi(int n,char src,char dest,char helper){
    if (n==0){
        return; // base case
    }
    towerofhanoi(n-1,src,helper,dest);
    cout<<"move from"<<" "<<src<<" "<<"to"<<" "<<dest<<endl;
    towerofhanoi(n-1,helper,dest,src);
}
int main(){
    towerofhanoi(3,'A','C','B');
    return 0;
}*/
// program to remove all duplicates from the string //
/*#include<iostream>
using namespace std;
string removedup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=removedup(s.substr(1));
    if (ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main(){
cout<<removedup("aaaabbbeeecdddd");
    return 0;
}*/
// program to move all 'x' to the end of the string //
/*#include<iostream>
using namespace std;
string moveallx(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=moveallx(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}
int main(){
cout<<moveallx("wfbcvxxxngxxgyxx")<<endl;
    return 0;
}*/
//  program to find all substrings of a string //
 /*#include<iostream>
 using namespace std;
 void subseq(string s,string ans){
    if (s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
 }
 int main(){
    subseq("abc","");
    cout<<endl;

    return 0;
 }*/
 // program to generate substrings with ascii number //
 /*#include<iostream>
 using namespace std;
 void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    subseq(ros,ans); 
    subseq(ros,ans+ch);
    subseq(ros,ans + to_string(code));
 }
 int main(){
    subseq("AB","");

    return 0;
 }*/
 // program to print all pisible words from phone digits //
 /*#include<iostream>
 using namespace std;
 string keypadarr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
 void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keypadarr[ch-'0'];
    string ros =s.substr(1);
    for (int i=0;i<code.length();i++){
        keypad(ros,ans+ code[i]);
    }
 }
 int main (){
keypad("23","");
    return 0;
 }*/
 // program to print all possible permutation of a string //
 /*#include<iostream>
 using namespace std;
 void permutation (string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);

        permutation(ros,ans+ch);
    }
 }
 int main(){
    permutation("ABC","");
    return 0;
 }*/
 // board game problem//
 // program to  count the number of paths possible from start point in gameboard //
 /*#include<iostream>
 using namespace std;
 int countpath(int s,int e){

    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=countpath(s+i,e);
    }
    return count;
 }
 int main(){
    cout<<countpath(0,3)<<endl;
    return 0;
 }*/
 // program to coubnt the number of paths possibe in a maze //
 /*#include<iostream>
 using namespace std;
   int countpathmaze(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0 ;
   }
   return countpathmaze(n,i+1,j)+ countpathmaze(n,i,j+1);
   }
 int main(){
cout<<countpathmaze(3,0,0)<<endl;
    return 0;
 }*/
 // tilling problem //
 // given a "2*n" board and tiles of size "2*1",count the number of ways to tile the given board using these tiles
 /*#include<iostream>
 using namespace std;
 int tillingways(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tillingways(n-1)+tillingways(n-2);
 }
 int main(){
cout<<tillingways(4)<<endl;
    return 0;
 }*/
 // friends pairing problem //
 // find the number of ways in which n friends can remain single or can be paired up //
 /*#include<iostream>
 using namespace std;
 int friendspairing(int n){
    if(n==0 || n==1 || n==2)
    {
        return n;
    }
    return friendspairing(n-1) + friendspairing(n-2)*(n-1);
 }
 int main (){
    cout<<friendspairing(4)<<endl;
    return 0;
 }*/
 // 0-1 knapsack problem //
 // put n items with  given weight value in a knapsack of capacity w to get the maximum total value in the knapsack
 /*#include<iostream>
 using namespace std;
 int knapsack(int value[],int wt[],int n,int W){
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(value,wt,n-1,W);
    }
   return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1], knapsack(value,wt,n-1,W));
 }
 int main (){
int wt[]={10,20,30};
int value[]={100,50,150};
int W=50;
cout<<knapsack(value,wt,3,W)<<endl;
    return 0;
 } */