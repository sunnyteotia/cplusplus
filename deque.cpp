// deque is data structure and combination of stack and stack//
// it is also called double ended queue //
// 1.push and pop from the end 
// 2.insert and delete from the start
//3. header file:<deque>
/*#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(1);
    dq.push_front(3);
    dq.push_front(4); // you can use after that  dq.pop_back() or for front also //
    for(auto i:dq)
    cout<<i<<" ";
    cout<<endl;
    cout<<dq.size()<<endl;
}*/
// sliding window maximum question-> it is very important //
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,x=1;cin>>n>>k;
    vector<int>a(n);
    for(auto &i :a)
    cin>>i;
    deque<int> q;
    vector<int>ans;
    for(int i=0;i<k;i++){
        while(!q.empty() and a[q.back()]<a[i]){
            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);
    for(int i=k;i<n;i++){
        if(q.front()==i-k){
            q.pop_front();
        }
        while(!q.empty() and a[q.back()]<a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }
    for(auto i:ans)
    cout<<i<<" ";
}
