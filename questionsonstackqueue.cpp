// largest histogram problem //
/*#include "bits/stdc++.h"
using namespace std;
int get_max_area(vector<int>a){

    int n=a.size(),ans=0,i=0;
    stack<int>st;
    a.push_back(0);
    while (i<n)
    {
    while(!st.empty() and a[st.top()]>a[i]){
        int t=st.top();
        int h=a[t];
        st.pop();
        if(st.empty()){
            ans=max(ans,h*i);
        }
        else{
            int len=i-st.top()-1;
            ans=max(ans,h*len);
        }
    }
    st.push(i);
    i++;
    }
    return ans;
}
int32_t main(){
    vector<int>a={2,1,5,6,2,3};
    cout<<get_max_area(a);
}*/
// trapping rainwater porblem //
/*#include"bits/stdc++.h"
using namespace std;
int rain_water(vector<int>a){
stack<int>st;
int n=a.size(),ans=0;
for(int i=0;i<n;i++){
    while(!st.empty() and a[st.top()]<a[i]){
        int cur=st.top();
        st.pop();
        if(st.empty()){
            break;
        }
        int diff=i-st.top()- 1;
        ans+=(min(a[st.top()],a[i])-a[cur])*diff;
    }
    st.push(i);
}
return ans;
}
int32_t main(){
    vector<int>a={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<rain_water(a);
}*/
// question-> given a valid mathematical expression,find whether it have redudant parentheses or not.it contain the following operators '+','-','*','/'.
/*#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    string s;cin>>s;
    stack<char>st;
    bool ans=false; // true if there redutant braces else false
    for(int i=0;i<s.size();i++){
        if(s[i]=='+' or s[i]=='-' or s[i]=='+' or s[i]=='/'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                ans=true;
            }
            while(st.top()=='+' or st.top()=='-' or st.top()=='*' or st.top()=='/' ){
                st.pop();
            }
            st.pop();
        }
    }
    cout<<ans<<endl;
}*/
// question -> the span of the stock's price today is defined as the maximum number 
//of consecutive days(starting from  going backwards) for which the price of the
// stocks was less than or equal to today's price.
//find the span of the stocks for all the days //
/*#include<bits/stdc++.h>
using namespace std;
vector<int> stockspan(vector<int>prices){
    vector<int>ans;
    stack<pair<int,int>>s;
    for(auto price: prices){
        int days = 1;
        while(!s.empty() and s.top().first <= price){
            days +=s.top().second;
            s.pop();
        }
        s.push({price,days});
        ans.push_back(days);
    }
    return ans;
}
int32_t main(){
    vector<int> a={100,80,60,70,60,75,85};
    vector<int> res=stockspan(a);
    for(auto i: res)
    cout<<i<<" ";
    cout<<endl;
}*/
// question-> given an array and a value , find if there exists three numbers whose sum is equal to the given value
// two pointers technique
// 1. sort the array
// 2.traverse the array and fix the first element of the triplet.
// the problem reduces to find if there exist two elements having sum equal to x-array[i].
/*#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int n;cin>>n;
    int target;cin>>target;
    vector<int>a(n);
    for(auto &i :a)
    cin>>i;
    bool found = false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int lo=i+1,hi=n-1;
        while(lo<hi){
            int current=a[i]+a[lo]+a[hi];
            if(current==target){
                found=true;
            }
            if(current<target){
                lo++;
            }
            else{
                hi--;
            }
        }
    }
    if(found)
    cout<<"true";
    else{
        cout<<"false";
    }
}*/
// maximum consecutive one problem //
// quetion-> given an array A of 0s and 1s,we may change up to k values from 0 to 1
// return the length of the longest(contiguous) subarray that contains only 1s.
//idea
//1.for each,a[j],try to find the longest subarray.
//2.if a[i] to a[j] has zeroes<=k,we coontinue to increment j.
//3.if a[i] to a[j] has zeroes >k,we increment i(as well as j).
/*#include<bits/stdc++.h>
using namespace std;
int32_t main(){
int n;cin>>n;
int k;cin>>k;
vector<int>a(n);
for(auto &i : a)
cin>>i;
int zerocnt=0,i=0,ans=0;
for(int j=0;j<n;j++){
    if(a[j]==0)
    zerocnt++;
    while(zerocnt>k){
        if(a[j]==0)
    {
        zerocnt--;
    }
    i++;
}
// confirmation of zerocnt<=k
ans=max(ans,j-i+1);
}
cout<<ans<<endl;
}*/
// longest substring without repeating character problem //
// given a string s, find the length of the longest substring without repeating characters
//idea
// 1.while iterating mark the position of each character 
//2. at i'th character,check the previous occurence and decide the start of the substring accordingly
/*#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    string s;cin>>s;
    vector<int>dict(256,-1);
    int maxlen=0,start=-1;
    for(int i=0;i<s.size();i++){
        if(dict[s[i]]>start)
        start=dict[s[i]];
        dict[s[i]]=i;
        maxlen=max(maxlen,i-start);
    }
    cout<<maxlen;
}*/