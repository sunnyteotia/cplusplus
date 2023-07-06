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
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertattail(node* &head ,int val){
    node* n=new node(val);
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
void display(node*head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteathead(head);
        return ;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
int main(){
node* head=NULL;
insertattail(head,1);
insertattail(head,2);
insertattail(head,3);
//display(head);
insertathead(head,4);
display(head);
//cout<<search(head,5)<<endl;
// deletion process
//deletion(head,3);
deleteathead(head);
display(head);
    return 0;
}*/
// reversing k nodes //
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
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertattail(node* &head ,int val){
    node* n=new node(val);
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
void display(node*head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
   head->next = reversek(nextptr,k);
    }
    return prevptr;
}
int main(){
node* head=NULL;
insertattail(head,1);
insertattail(head,2);
insertattail(head,3);
insertattail(head,4);
insertattail(head,5);
insertattail(head,6);
display(head);
int k=2;
node* newhead=reversek(head,k);
display(newhead);
    return 0;
} */
// detection and removal of cycle in linked list //
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
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertattail(node* &head ,int val){
    node* n=new node(val);
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
void display(node*head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void makecycle(node* &head,int pos){
    node* temp=head;
    node* startnode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            startnode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startnode;
}
bool detectcycle(node* &head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
        return  true;
        }
    }
    return false;
}
void removecycle(node* &head){
     node* slow=head;
    node* fast=head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }
    while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
int main(){

node*head=NULL;
insertattail(head,1);
insertattail(head,2);
insertattail(head,3);
insertattail(head,4);
insertattail(head,5);
insertattail(head,6);
makecycle(head,3);
//display(head);
cout<<detectcycle(head)<<endl;
removecycle(head);
cout<<detectcycle(head)<<endl;
display(head);

    return 0;
}*/
// append last k nodes of a linked list //
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
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertattail(node* &head ,int val){
    node* n=new node(val);
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
void display(node*head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int length(node *head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend (node* &head,int k){

    node* newhead;
    node* newtail;
    node* tail=head;
    int l=length(head);
    k=k%l;
    int count=1; 
    while(tail->next!=NULL){
        if(count==l-k){
            newtail=tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }
    newtail->next=NULL;
    tail->next=head;
    return newhead;
}
int main(){
node*head=NULL;
int arr[]={1,2,3,4,5,6};
for(int i=0;i<6;i++){
    insertattail(head,arr[i]);
}
display(head);
node* newhead=kappend(head,3);
display(newhead);
    return 0;
}*/
// find intersection point of 2 linked list //
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
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertattail(node* &head ,int val){
    node* n=new node(val);
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
void interesect(node* &head1 ,node* &head2,int pos){
    node* temp1=head1; 
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}
void display(node*head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int length(node*head){
    int l=0;
    node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}

int intersection (node* &head1,node* &head2){
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    node*ptr1;
    node*ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;

    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
            ptr1=ptr1->next;
            ptr2=ptr2->next;
    }
    return -1;
}


int main(){
    node* head1=NULL;
    node* head2=NULL;

    insertattail(head1,1);
    insertattail(head1,2);
    insertattail(head1,3);
    insertattail(head1,4);
    insertattail(head1,5);
    insertattail(head1,6);
    insertattail(head2,9);
    insertattail(head2,10);
    interesect(head1,head2,3);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2)<<endl;
    return 0;
}*/
// merge two sorted linked list //
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
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertattail(node* &head ,int val){
    node* n=new node(val);
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
void display(node*head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* merge(node* &head1,node* &head2){

    node* p1=head1;
    node* p2=head2;
    node* dummynode=new node(-1);
    node* p3=dummynode;

    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummynode->next;
}
// same question from recursion way
node* mergerecursive(node* &head1,node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data<head2->data){
        result=head1;
        result->next=mergerecursive(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergerecursive(head1,head2->next);
    }
    return result;
}
int main(){
    node* head1=NULL;
    node* head2=NULL;
    int arr1[]={1,4,5,7};
    int arr2[]={2,3,6};
    for(int i=0;i<4;i++){
        insertattail(head1,arr1[i]);
    }
    for(int i=0;i<3;i++){
        insertattail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    // for simple iteration method

     //node* newhead=merge(head1,head2);
     //display(newhead);
    node* newhead=mergerecursive(head1,head2);
     display(newhead);
    
    return 0;
}*/
// circular linked list //
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
void insertathead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
     node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
void insertattail(node* &head,int val){
    if(head==NULL){
        insertathead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void deleteathead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}

void deletion (node* &head,int pos){
    if(pos==1){
        deleteathead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void display(node* head){

    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
int main(){

    node*head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    insertathead(head,5);
    display(head);
    deletion(head,1);
    display(head);
    return 0;
}*/
//PUT  EVEN POSITION NODES AFTER ODD POSITIONS //
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
void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertattail(node* &head ,int val){
    node* n=new node(val);
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
void display(node*head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void evenafterodd(node* &head){

    node* odd=head;
    node* even=head->next;
    node* evenstart=even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    if(odd->next!=NULL){
        even->next=NULL;
    }
}
int main(){
    node* head=NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        insertattail(head,arr[i]);
    }
    display(head);
    evenafterodd(head);
    display(head);
    return 0;
}*/