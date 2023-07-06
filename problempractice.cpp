//Program problems//
/*#include <iostream>
using namespace std;
int main (){
    int a;
    char op;

    
    cin>>a;
    if (a<=300){
        cout<<3000<<endl;

    }
    else{
        cout<<10*a<<endl;
    }
    return 0;
}*/
//PROGRAM TO DISPLAY ALL THE FACTORS OF A NUMBER //
/*#include <iostream>
using namespace std;
int main (){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    if(n%i==0){
        cout<<i<<" ";
        i++;
    }
}
    return 0;
} */
// program to find the factorial of a given number//
/*#include <iostream>
using namespace std;
int main (){
int n;
cin>>n;
int fact=1;
int i=1;
for(int i=n;i>=1;i--){
fact*=i;
}cout<<fact<<endl;
    return 0;
} */
// find minimum and maximum no. in an array //
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m,s;
    cin>>n;
    int arr[n];
    int c=INT_MIN;
    int b=INT_MAX;
    int i;
    for(i=0;i<n;i++){
    cin>>arr[i];}
    for(i=0;i<n;i++){
     c=max(arr[i],c);
     b=min(arr[i],b);
    }
    cout<<"maximum no:"<<c<<endl<<"minimum no:"<<b<<endl;
    
    return 0;
}*/
// displaying a linked list //
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data =val;
        next=NULL;
    }
};
void insertattail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<< temp->data<<"->";
        temp=temp->next;
    }
    cout<< " NULL"<<endl;
}
int main(){
    node* head=NULL;
insertattail(head,1);
insertattail(head,2);
insertattail(head,3);
insertattail(head,4);
insertattail(head,5);
insertattail(head,6);
insertattail(head,7);
display(head);
    return 0;
}*/
// linear search in linked list //
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data =val;
        next=NULL;
    }
};
void insertattail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
bool search(node* &head,int key){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<< temp->data<<"->";
        temp=temp->next;
    }
    cout<< " NULL"<<endl;
}
int main(){
    node* head=NULL;
insertattail(head,1);
insertattail(head,2);
insertattail(head,3);
insertattail(head,4);
insertattail(head,5);
insertattail(head,6);
insertattail(head,7);
display(head);
cout<<search(head,5);
    return 0;
}*/
// deletion of a node in linked list //
/*#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertattail(node* &head,int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion (node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);
        return;
    }
    node*temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    // we have to delete the temp->next node //
    node*todelete =temp->next;
    temp->next=temp->next->next;
    delete todelete; 
}
node* reverse(node* &head){
node* prevptr=NULL;
node* currentptr=head;
node* nextptr;
while(currentptr!=NULL){
    nextptr=currentptr->next;
    currentptr->next=prevptr;
    prevptr=currentptr;
    currentptr=nextptr;
}
return prevptr;
}
// recursive method
node* reverserecursive(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead = reverserecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
node*revresek(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr !=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reverse(nextptr,k);
    }
    return prevptr;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
insertattail(head,1);
insertattail(head,2);
insertattail(head,3);
insertattail(head,4);
insertattail(head,5);
insertattail(head,6);
insertattail(head,7);
display(head);
node* newhead=reverserecursive(head);
display(newhead);
    return 0;
}*/
// reversing a sentence through stack
#include<iostream>
#include<stack>
using namespace std;
void reversesentence(string s){
    stack<string>st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(i<s.length() && s[i]!=' '){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}
using namespace std;
int main(){
string s="krishna hare";
reversesentence(s);
    return 0;
}
