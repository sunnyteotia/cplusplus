// stack introduction
// lifo property-last in first out
/*#include<iostream>
using namespace std;
#define n 100
class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"no element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"no element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main(){
stack st;
st.push(1);
st.push(2);
st.push(3);
cout<<st.Top()<<endl;
st.pop();
cout<<st.Top()<<endl;
st.pop();
st.pop();
st.pop();
cout<<st.empty()<<endl;
    return 0;
}*/
// reversing a sentence using stack //
/*#include<iostream>
#include<stack> // for direct implementation use this header file // 
using namespace std;
void reversesentence(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();   
    }cout<<endl;
}

int main (){
//stack<int> st;
//st. //we can use this method to directly apply stl functions
string s="hare hare ram  ram ram hare ram hare hare hare krishna krishna krishna hare krishna hare ";
reversesentence(s);

    return 0;
}*/
// reversing a stack by recursion method
/*#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertatbottom(st,ele);
    st.push(topele);
}
void  reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertatbottom(st,ele);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    return 0;
}*/
// notes for prefix,infix and postfix 
// infix,prefix and postfix //
// infix expression -operator between two operands 
// prefix expression-also called polish notation ->tells computer about precedence of operators, first operators come and then operands
// postfix expression-> also called reverse polish notation -> first operands and operators //
// both prefix and postfix are understandable by computer
// but infix expression can't be read by computer


// evaluate expression "-+7*4 5+2 0"
/*#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int prefixevaluation(string s){
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch(s[i]){
                case '+':
                st.push(op1+op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                case '^':
                st.push(pow(op1,op2));
                break;
            }
        }
    }
    return st.top();
}
int main(){
cout<<prefixevaluation("-+7*45+20")<<endl;
    return 0;
} */
// postfix evaluation 
// postfix evaluation of "46+2/5*7+"
/*#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int postfixevaluation(string s){
    stack<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
        else{
           int op2=st.top();
           st.pop();
           int op1=st.top();
           st.pop();
           switch (s[i])
           {
           case '+':
           st.push(op1+op2);
            break;
            case '-':
            st.push(op1-op2);
            break;
            case '*':
           st.push(op1*op2);
            break;
            case '/':
           st.push(op1/op2);
            break;
            case '^':
           st.push(pow(op1,op2));
            break;
           
           }
        }
    }
    return st.top();
}
int main(){
   cout<< postfixevaluation("46+2/5*7+")<<endl;
    return 0;
}*/
// infix to postfix //
//  convert infix (a-b/c)*(a/k-l) into postfix expression
/*#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int precedence(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*'|| c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixtopostfix(string s){
    stack<char> st;
    string res;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            res+=s[i];
        }
        else if (s[i]=='('){
            st.push(s[i]);
        }
    else if(s[i]==')'){
        while(!st.empty() && st.top()!='('){
            res+=st.top();
            st.pop();
        }
        if(!st.empty()){
            st.pop();
        }
    }
    else{
        while (!st.empty() && precedence(st.top())>precedence(s[i])){
            res+=st.top();
            st.pop();
        }
        st.push(s[i]);
    }
        
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}
int main(){
cout<<infixtopostfix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}*/
// infix to prefix //
// convert infix expression (a-b/c)*(a/k-l)// 
/*#include<iostream>
#include<stack>
#include<math.h>           /// this program is not working ////
#include<algorithm>
using namespace std;
int precedence(char c){
    if(c=='^'){
        return 1;
    }
    else if(c=='/' || c=='*'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 3;
    }
    else{
        return -1;
    }
}
    string infixtoprefix(string s){
        stack<char>st;
        string res;
        for(int i=s.length()-1;i>=0;i--){
            if((s[i]>='a' && s[i]<='z') ||( s[i]>='A' && s[i]<='Z')){
                res=s[i] + res;
            }
            else if(s[i]==')'){// put opposite bracket
                st.push(s[i]);
            }
            else if(s[i]=='('){ // same here put opposite bracket
                while((!st.empty()) && (st.top()!=')')){
                res=st.top() + res;
                st.pop();
                }
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                while((!st.empty()) && (precedence(st.top())>precedence(s[i]))){
                res=st.top()+ res;
                st.pop();
                }
                st.push(s[i]);
            }

        }
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
    }



int main(){
cout<<infixtoprefix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}*/
// balanced parantheses //
#include<bits/stdc++.h>
using namespace std;
bool isvalid(string s){
    int n=s.size();

    stack<char> st;
    bool ans=true;
    for(int i=0;i<n;i++){
        if(s[i]=='(' || s[i]=='[' or s[i]=='{'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    if(!st.empty())
    return false;

    return ans;
}
int main(){
    string s="{([])}";
    if(isvalid(s)){
        cout<<"string is valid"<<endl;
    }
    else{
        cout<<"not vali string"<<endl;
    }
    return 0;
}