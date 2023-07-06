/*#include<iostream>
#define n 20
using namespace std;
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    void push(int x){
        if(back==n-1){
        cout<<"queue overflow"<<endl;
        return;
        }
    back++;
    arr[back]=x;
    if(front==-1){
        front++;
    }
    }
    void pop(){
        if(front==-1 || front>back){
            cout<<"no elements in queue"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"no elements in queue"<<endl;
            return -1;
    }
    return arr[front];
    }
    bool empty(){
        if(front==-1 || front>back){
            return true;
    }
    return false;
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;

    return 0;
}*/
// linked list implementation of queues
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};
class queue{
    node*front;
    node*back;
    public:
    queue(){
        front=NULL;
        back=NULL;
    }
    void push(int x){
        node* n=new node(x);
        if(front==NULL){
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void pop(){
        if(front==NULL){
            cout<<"Queue underflowed"<<endl;
            return;
        }
        node* todelete=front;
        front=front->next;
        delete todelete;
    }
    int peek(){
        if(front==NULL){
            cout<<"no element in queue"<<endl;
            return-1;
    }
    return front->data;
    }
    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};
int main(){
    queue q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
    
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    return 0;
}*/
// queue using stacks//
/*#include "bits/stdc++.h"
using namespace std;
class que{
    stack<int> s1;
    stack<int> s2;
    public:
    void push(int x){
        s1.push(x);
         }
        int pop(){
            while(s1.empty() and s2.empty()){
                cout<<"queue is empty"<<endl;
                return -1;
            }
        
            if(s2.empty()){
                while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        
        int topval = s2.top();
        s2.pop();
        return topval;
        }
bool empty()
{
    if(s1.empty() and s2.empty()){
    return true;
}
return false;
}
        };
int32_t main(){
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    q.push(5);
     cout<<q.pop()<<endl;
      cout<<q.pop()<<endl;
       cout<<q.pop()<<endl;
        cout<<q.pop()<<endl;
         cout<<q.pop()<<endl;
         return 0;
}*/
// queues using stack second method-using function call stack //
/*#include "bits/stdc++.h"
using namespace std;
class que{
    stack<int> s1;
    public:
    void push(int x){
        s1.push(x);
         }
        int pop(){
            while(s1.empty()){
                cout<<"queue is empty"<<endl;
                return -1;
            }
        int x=s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item = pop();
        s1.push(x);
        return item;
        }

bool empty()
{
    if(s1.empty()){
    return true;
    return false;
}

}
        };
int32_t main(){
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    q.push(5);
     cout<<q.pop()<<endl;
      cout<<q.pop()<<endl;
       cout<<q.pop()<<endl;
        cout<<q.pop()<<endl;
         cout<<q.pop()<<endl;
}*/
// stack using queues //
/*#include<bits/stdc++.h>
using namespace std;
class Stack {
    int n;
    queue<int>q1;
    queue<int>q2;
public:
    Stack(){
        n=0;
    }
    void push(int val){
        q2.push(val);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();

        }
        queue<int>temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop(){
        q1.pop();
        n--;
    }
    int top(){
        return q1.front();
    }
    int size(){
        return n;
    }
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    return 0;
}*/
// stack using queues with method 2 //
//here pop operation is costly //
/*#include<bits/stdc++.h>
using namespace std;
class Stack{
int n;
queue<int>q1;
queue<int>q2;
public:
Stack(){
    n=0;
}
void pop(){
    if(q1.empty()){
        return;
    }
    while(q1.size()!=1){
        q2.push(q1.front());
        q1.pop();
    }
    q1.pop();
    n--;
    queue<int> temp=q1;
    q1=q2;
    q2=temp;
}
void push(int val){
    q1.push(val);
    n++;
}
int top(){
    if(q1.empty()){
        return -1;
    }
    while(q1.size()!=1){
        q2.push(q1.front());
        q1.pop();
    }
    int ans=q1.front();
    q2.push(ans);
    queue<int>temp=q1;
    q1=q2;
    q2=temp;
    return ans;
}
int size(){
    return n;
}
};
int main(){
Stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
cout<<st.top()<<endl;
st.pop();
cout<<st.top()<<endl;
cout<<st.size()<<endl;
    return 0;
}*/