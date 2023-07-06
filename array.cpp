// max no. and min no.//
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(int i=0;i<n;i++){
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    cout<<maxno<<" "<<minno<<endl;
}
// searching key -linear searching//
/*#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    } return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linearsearch(arr,n,key)<<endl;

    return 0;
}*/
/*/ binary searching-of key//
/#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
 int s=0;
 int e=n;
 while(s<=e){
    int mid=(s+e)/2;
    if (arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        e=mid-1;
    }
    else {
        s=mid+1;
    }
 }return -1;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;
    cout<<binarysearch(arr,n,key)<<endl;
    return 0;
}*/
// sorting//
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n+1;j++){
        if(arr[j]<arr[i]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }cout<<endl;
    return 0 ;
}*/
//bubble sort//
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int counter=1;
while(counter<n-1){
    for(int i=0;i<n-counter;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    } counter++;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

    return 0;
}*/
// insertion sort//
/*#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=1;i<n;i++){
    int current =arr[i];
    int j=i-1;
    while(arr[j]>current && j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
}*/
//array challenges//
//problem 1//
/*#include<iostream>
using namespace std;
int main(){
int mx=-1999999;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i =0;i<n;i++){
mx=max(mx,a[i]);
cout<<mx<<endl;
}
    return 0;
}*/
//subrays and sequence//
/*#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int curr=0;
for(int i=0;i<n;i++){
    curr=0;
    for(int j=i;j<n;j++){
        curr+=a[j];
        cout<<curr<<endl;
    }
}
    return 0;
}*/
//problem-longest arithematic subarray//

/*#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int ans=2;
int pd=a[1]-a[0];
int j=2;
int curr=2;
while(j<n){
    if(pd== a[j]-a[j-1]){
        curr++;
    }
    else{
        pd=a[j]-a[j-1];
        curr=2;
    }
    ans=max(ans,curr);
    j++;
}
cout<<ans<<endl;
    return 0;
}*/
//problem-record breaker//
/*#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n+1];
 a[n]=-1;
for (int i=0;i<n;i++){
    cin>> a[i];
}
if(n==1){
    cout<<"1"<<endl;
    return 0;
}
int ans=0;
int mx=-1;
for(int i=0;i<n;i++){
    if(a[i]>mx && a[i]>a[i+1]){
        ans++;
    }
    mx=max(mx,a[i]);
}

cout<<ans<<endl;
    return 0;
}*/
//questions asked by MNCs//
//problem repeating first element asked by amazon/oracle//

/*#include "bits/stdc++.h"
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
const int N=1e6+2;
int idx[N];
for(int i=0;i<N;i++){
    idx[i]=-1;
}
int minidx=INT_MAX;
for(int i=0;i<N;i++){
    if ( idx[a[i]]!=-1){
        minidx=min(minidx,idx[a[i]]);
    }
    else{
        idx[a[i]]=i;
    }
}
if (minidx==INT_MAX){
    cout<<"-1"<<endl;
}
else{
    cout<<minidx+1<<endl; 
}
    return 0;
}*/
//question-subarray with given sum asked by facebook,google,amazon,visa//
/*#include<iostream>
using namespace std;
int main(){
int n,s;
cin>>n>>s;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int i=0,j=0;int st=0-1,en=-1;int sum=0;
while(j<n && sum + a[j] <=s){
    sum+=a[j];
    j++;}

if(sum==s){
    cout<<i+1<<" "<<j<<endl;
    return 0;
}

while(j<n){
    sum+=a[j];
    while(sum>s){
        sum-=a[i];
        i++;
    }
    if(sum==s){
        st=i+1;
        en=j+1;
        break;
    }
    j++;
}
cout<< st <<" "<< en <<endl;

    return 0;
}*/
// smallest positive missing number asked by accolite,amazon,samsung,snadeal//
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
const int N=1e6+2;
bool check[N];
for(int i=0;i<N;i++){
    check[i]=false;
}
for(int i=0;i<n;i++){
    if(a[i]>=0){
        check[a[i]] = true;
    }
}
int ans=-1;
for(int i=1;i<N;i++){
    if(check[i]==false){
        ans=i;
        break;
    }
}
cout<<ans<<endl;
    return 0;
} */
 //program to find all subarrays of a given array//
 /*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
            cout<<a[k]<<" ";
        }cout<<endl;
}
}

    return 0;
}*/
//maximum subarray sum//
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int maxsum=INT_MIN;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int sum=0;
        for(int k=i;k<=j;k++){
            sum+=a[k];
        }maxsum=max(maxsum,sum);
}
}
cout<<maxsum<<endl;

    return 0;
}*/
 // same question as above but with different way to minimize time complexity//
 /*#include<iostream>
 #include<climits>
 using namespace std;
 int main (){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int currsum[n+1];
currsum[0]=0;
for(int i=1;i<=n;i++){
    currsum[i]=currsum[i-1]+a[i-1];
}
int maxsum=INT_MIN;
for (int i=1;i<=n;i++)
{
    int sum=0;
    for(int j=0;j<i;j++){
        sum=currsum[i]-currsum[j];
        maxsum=max(sum,maxsum);
    }
}
cout<<maxsum;

    return 0;
 }*/
 //same question as above but from kadane algorithm//
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int currentsum=0;
int maxsum=INT_MIN;
for(int i=0;i<n;i++){
    currentsum+=a[i];
    if(currentsum<0){
        currentsum=0;
    }
    maxsum=max(maxsum,currentsum);

}
cout<<maxsum<<endl;
    return 0;
}*/
//  maximum circular subarray sum//
/*#include<iostream>
#include<climits>
using namespace std;
int kadane(int a[],int n){
    int currentsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currentsum+=a[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}
int main (){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int wrapsum;
    int nonwrapsum;
    nonwrapsum=kadane(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]= -a[i];
    }
    wrapsum=totalsum+kadane(a,n);
    int w=max(wrapsum,nonwrapsum);
    cout<<w<<endl;
    return 0;
}*/
//pair sum problem//
/*#include<iostream>
using namespace std;
bool pairsum(int a[],int n,int k){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }
        }
    }
    return false;
}
int main(){
    int a[]={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(a,8,k)<<endl;
    return 0 ;
}*/
//same questios as above with different aproach//
/*#include<iostream>
using namespace std;
bool pairsum(int a[],int n,int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(a[low]+a[high]==k){
            cout<<low<<" "<<high<<endl; 
            return true;
        }
        else if(a[low]+a[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main(){
    int a[]={2,4,7,11,14,16,20,21};
    int k=31;

    cout<<pairsum(a,8,k)<<endl;

    return 0 ;
}*/
// 2-D ARRAYS//
/*#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"matrix is :\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}*/
//searching a matrix//
/*#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<"matrix is :\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }cout<<endl;
    }
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
}
    if (flag){
        cout<<"element is found"<<endl;
    }else{
        cout<<"element is not found"<<endl;
    }
    return 0;
}*/
//spiral order matrix traversal//
/*#include<iostream>
using namespace std;
signed main()
{
int n,m;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
//spiral order print//
int row_start=0,row_end=n-1,column_start=0,column_end=m-1;
while(row_start<=row_end && column_start<=column_end){
    //for row_start//
    for(int col=column_start;col<=column_end;col++){
        cout<<a[row_start][col]<<" ";

    }
    row_start++;

    //for column_end
    for(int row=row_start;row<=row_end;row++){
        cout<<a[row][column_end]<<" ";
    }
    column_end--;
    //for row_end
    for(int col=column_end;col>=column_start;col--){
        cout<<a[row_end][col]<<" ";
    }
    row_end--;
    //for column_start
    for(int row=row_end;row>=row_start;row--){
        cout<<a[row][column_start]<<" ";
    }
    column_start++;
}
    return 0;
}*/
// 2-D ARRAYS CHALLENGES//
// TRANSOSE OF A MATRIX//
/*#include<iostream>
using namespace std;
int main () 
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            //swap
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        } 
    }
    //print
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
//matrix multilication/
/*#include<iostream>
using namespace std;
int main (){

int n1,n2,n3;
cin>>n1>>n2>>n3;
int m1[n1][n2];
int m2[n2][n3];
for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++)
    cin>>m1[i][j];
}
for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++)
    cin>>m2[i][j];
}
int ans[n1][n3];
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++)
    ans[i][j]=0;
}
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        for(int k=0;k<n2;k++){
            ans[i][j] +=m1[i][k]*m2[k][j];
        }
    }
}
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            
                cout<<ans[i][j]<<" ";
            cout<<endl;
        }
        
    }
    return 0;
}*/
//MATRIX SEARCH//
/*#include"bits/stdc++.h"
using namespace std;
int32_t main(){
    int n,m; cin>>n>>m;
    int target;cin>>target;
    int mat[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    bool found=false;
    int r=0,c=n-1;
    while(r<m && c>=0){
        if (mat[r][c]==target){
            found=true;
        }
        mat[r][c]>target ?c-- : r++;
    }
    if(found)
    cout<<"found";
    else
    cout<<"not found";
}*/
// character arrays//
/*#include<iostream>
using namespace std;
int main(){
    char a[100]="apple";
    int i=0;
    while(a[i] !='\0'){
        cout<<a[i]<<endl;
        i++;
    }
    return 0;
}*/
// character array input and output//
/*#include<iostream>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    cout<<a;
    return 0;
}*/
// check palindrome//
// what is palindrome ?//
// palindrome are those words which remain same after reversing thier alphabets-ex. nitin//
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool check=1;
    for(int i=0;i<n;i++){
        if(a[i] != a[n-1-i])
     {
        check=0;
        break;
    }
}
 if(check==true) 
 cout<<"word is a pallindrome"<<endl;
 else{
    cout<<"word is not a pallindrome"<<endl;
 }
 return 0;
}*/
// largest word in a sentence//
/*#include<iostream>
using namespace std;
int main (){
int n;
cin>>n;
cin.ignore();
char a[n+1];
cin.getline(a,n);
cin.ignore();
int i=0;
int currlen=0,maxlen=0;
int st=0,maxst=0;
while(i){
    if (a[i] ==' ' || a[i]=='\0'){
        if(currlen>maxlen){
            maxlen=currlen;
            maxst=st;

        }
        currlen=0;
        st=i+1;
    }
    else
    currlen++;
    if(a[i]=='\0')
    break;
    i++;
}
cout<<maxlen<<endl;
for(int i=0;i<maxlen;i++)
cout<<a[i+maxst];

    return 0;
}*/