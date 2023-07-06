//p1
/*#include<iostream>
using namespace std;
int main (){
    int age;
    cin>>age;
   
 if (age>18){
    cout<<"you can vote";
 }
else{
    cout<<"not eligible for voting";
} 
return 0;
}
*/
//p2
/*#include<iostream>
using namespace std;
int main () 
{
    int x,y;
    cin>>x>>y;

    if (x==y){
        cout<<"both numbers are equal ";


    }
    else if (x>y){
        cout<<"Xis grater than Y";

    }
    else {
        cout<<"Y is greater than X";

    }
    return 0;

}
*/ 
//p3
/*#include <iostream>
using namespace std;
int main ()
{
    int x,y ;
    cout<<"enter x ";
    cin>>x; 
    cout<<"enter y ";
    cin>>y;
    //here we are going to use conditional statements.
    if (x==y) {
        cout<<"BOTH ARE EQUAL NUMBERS ";
     } else {
        if (x>y) {
            cout<<"X IS GREATER THAN Y";
        }
        else {
            cout<< "Y IS GREATER THAN X\n";
        }
}
    
    return 0;
}*/
//p4
/*#include<iostream>
using namespace std;
int main (){
int n1,n2;
cin>>n1;
cin>>n2;
int max,min;
if (n1>n2) {
    max=n1;
    min=n2;

}
else {
    max=n2;
    min=n1;

}
cout<<"MAX="<<max<<endl;
cout<<"MIN="<<min<<endl;
return 0;
}
*/
//p5
/*
#include<iostream>
using namespace std;
int main ()
{
    int sidea,sideb,sidec;
    cout<<"input three sides of triangle\n";
    cin>>sidea>>sideb>>sidec;
    if (sidea==sideb && sideb==sidec) {
        cout<<"THIS IS AN EQUILATERAL TRIANGLE\n";}
        else if (sidea==sideb || sideb==sidec)
        {
            cout<<"THIS IS AN ISOSCELES TRIANGLE\n";
        }
        else {
            cout<<"THIS IS A SCALENE TRIANGLE\n";
        }
 return 0;   

}*/
//p6
/*#include<iostream>
using namespace std;
int main (){
    char c;

    int isLowercaseVowel,isUppercaseVowel;
    cout<<"ENTER THE ALPHABET\n";
    cin>>c;
    isLowercaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isUppercaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if (isLowercaseVowel||isUppercaseVowel)
    cout<<c<<" IS A VOWEL";
    else
    cout<<c<<" IS A CONSONANT";
    return 0;

}*/
// implementation of linked list in queues// 
#include<iostream>
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
            node*n=new node(x);
            if(front==NULL){
                front=n;
                back=n;
                return;
            }
            back->next=n;
            back=n;
        }
        void pop(){
            if(front==NULL){
                cout<<"no element in queue"<<endl;
                return;
            }
            node* todelete=front;
            front=front->next;
            delete todelete;
        }
        int peek(){
            if(front==NULL){
                cout<<"queue is empty"<<endl;
                return -1;
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
}
