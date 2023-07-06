// forloop
/*#include<iostream>
using namespace std;
int main (){ 
 int n;
 cin>>n;
 int sum=0;
 for (int counter=1;counter<=n;counter++){
    sum=sum+counter;

 }
 cout<<sum<<endl;
 return 0;


}*/
//while loop
/*#include<iostream>
using namespace std;
int main (){ 
    int n;
    cin>>n;
    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    return 0;
}*/
//do while loop
/*#include<iostream>
using namespace std;
int main (){ 
    int n;
    cin>>n;
    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
    return 0;
}*/
//p1=for loop
/*#include<iostream>
using namespace std;
int main (){ 
for(int i=1;i<=9;i++){
    cout<<i<<"";
}
return 0;
}*/
//p2=while loop
/*#include<iostream>
using namespace std;
int main (){ 
    int i=1;
    while(i<=5){
        cout<<i<<"";
        i++;
    
    }
    return 0;
}*/
//p3=do while loop
/*#include<iostream>
using namespace std;
int main (){ 
    int i=1;
    do {
        cout<<i<<"";
        i++;
    }while(i<=7);
    return 0;
}*/
//problem= program to display multiplication table upto 10
/*#include<iostream>
using namespace std;
int main (){ 
    int n;
    cin>>n;
    for(int i=1;i<=10;++i){
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}*/
//problem=program to add only positive numbers
/*#include<iostream>
using namespace std;
int main (){ 
    int number;
    int sum=0;
    int i;
    cout<<"ENTER THE NUMBER ";
    cin>>number;
    while (number>=0){                      //1,true,sum=0,sum=1
        sum+=number;
        if(number>100){
        cout<<"ENTER THE NUMBER ";
        cin>>number;
        sum+=number;
        }
        else{
            break;
        }
        /*if(sum>100){
        cout<<"\nThe sum is"<<sum<<endl;
        }
        else{
            cout<<"try again....";
        }
        

    }
    
    return 0;
}*/
// multiplication by while loop
#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    while(i<=10){
        cout<<"|"<<n<<"x"<<i<<"="<<n*i<<"|"<<endl;
        i=i+1;
    }
    return 0;
}
    
    
