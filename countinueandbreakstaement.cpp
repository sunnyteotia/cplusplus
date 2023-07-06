//continue and break statements programming//
/*
//To ramove no. divisible by 3 from 1 to 100//
/*#include<iostream>
using namespace std;
int main (){
    for(int i=0;i<100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}*/
// number is prime no. or not//
/*#include<iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
        cout<<"Non prime"<<endl;
        break;}
    }
    if(i==n){
        cout<<"Prime"<<endl;

    }
    return 0;
}*/
//to check no. is prime between a and b//
/*#include<iostream>
using namespace std;
int main (){
    int a,b;
    cin>>a>>b;
    for(int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0)
            {
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }
    return 0;
}*/
//Progarmn to print all odd numbers till n//
/*/#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%2==0){
         continue;}
         cout<<i<<endl;
    }
    return 0;
} */
// program to read multiple languages by robot//
/*#include<iostream>
using namespace std;
int main (){
    char button;
    cout<<"Input the character:";
    cin>>button;
    if (button=='a'){
        cout<<"HARE KRISHNA"<<endl;
    }
    else if (button=='b'){
        cout<<"NAMASTE"<<endl;
    }
    else if (button=='c'){
        cout<<"salut"<<endl;
    }
    else if (button=='d'){
        cout<<"halo"<<endl;
    }
    else if (button=='e'){
        cout<<"cioa"<<endl;
    }
    else {
        cout<<"i am still learning more ";
    }
    return 0;
}*/
    //swith case rogramming//
    //program to read multiple langages by robot//

/*
#include<iostream>
using namespace std;
int main (){
    char button;
    cout<<"Input the character:";
    cin>>button;
    switch (button)

    {
    case  'a':
    cout<<"HARE KRISHNA"<<endl;
    break;
    case 'b':
    cout<<"NAMASTE"<<endl;
    break;
    case 'c':
    cout<<"HELLO"<<endl;
    break;
    case 'd':
    cout<<"CIAO"<<endl;
    break;
    case 'e':
    cout<<"HALO"<<endl;
    break;
    
    default:
    cout<<"I AM STILL LEARNING"<<endl;

        break;
    }
    return 0;
}
*/
//Write a program to write a simple calculator//
#include<iostream>
using namespace std;
int main (){
    float n1;
    float n2;
    
    char op;
    cout<<"&=average\n";
    cout<<"ENTER 2 NUMBERS"<<endl;
    cin>>n1>>n2;
    cout<<"ENTER THE OPERATORS:"<<endl;
    cin>>op;


    switch (op)
    {
    case'+':
    cout<<n1+n2<<endl;
    break;
    case '-':
    cout<<n1-n2<<endl;
    break;
    case '*':
    cout<<n1*n2<<endl;
    break;
    case '/':
    cout<<n1/n2<<endl;
    break;
    case'&':
    cout<<(n1+n2)/2<<endl;


        break;
    
    default:
    cout<<"I AM STILL LEARNING"<<endl;
        break;
    }
    //cout<<n1;
    return 0;
}