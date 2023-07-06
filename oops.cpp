/*#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age;
    bool gender;
    void  printinfo(){
    cout<<"NAME=";
    cout<<name<<endl;
    cout<<"AGE=";
    cout<<age<<endl;
    cout<<"GENDER=";
    cout<<gender<<endl;

    
    }
};

int main(){
 student arr[3];
 for(int i=0;i<3;i++){
    cout<<"NAME=";
    cin>>arr[i].name;
    cout<<"AGE=";
    cin>>arr[i].age;
    cout<<"GENDER=";
    cin>>arr[i].gender;

 }
 for(int i=0;i<3;i++){
    arr[i].printinfo();
 }

    return 0;
}*/
// same question as above with different method //
/*#include<iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    void setname(string s){
        name=s;
    }
    void  printinfo(){
    cout<<"NAME=";
    cout<<name<<endl;
    cout<<"AGE=";
    cout<<age<<endl;
    cout<<"GENDER=";
    cout<<gender<<endl;
    }
};

int main(){
 student arr[3];
 for(int i=0;i<3;i++){
    string s;
    cout<<"NAME=";
    cin>>s;
    arr[i].setname(s);
    cout<<"AGE=";
    cin>>arr[i].age;
    cout<<"GENDER=";
    cin>>arr[i].gender;

 }
 for(int i=0;i<3;i++){
    arr[i].printinfo();
 }

    return 0;
}*/
// same question as above by different maethod //
/*#include<iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    void setname(string s){
        name=s;
    }
    void getname(){
      cout<<name<<endl;
    }
    void  printinfo(){
    cout<<"NAME=";
    cout<<name<<endl;
    cout<<"AGE=";
    cout<<age<<endl;
    cout<<"GENDER=";
    cout<<gender<<endl;
    }
};

int main(){
 student arr[3];
 for(int i=0;i<3;i++){
    string s;
    cout<<"NAME=";
    cin>>s;
    arr[i].setname(s);
    cout<<"AGE=";
    cin>>arr[i].age;
    cout<<"GENDER=";
    cin>>arr[i].gender;

 }
 for(int i=0;i<3;i++){
    arr[i].printinfo();
 }

    return 0;
}*/
// same question as above by constructer  method //
#include<iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
       student(){
          cout<<"default constructor"<<endl;
       }// default conmstructer
    student(string s,int a,int g){
      cout<<"parameterised constructer"<<endl;
      name=s;
      age=a;
      gender=g;// parameterised constructer
    }
    student(student &a){
      cout<<"copy constructer"<<endl;
      name=a.name;
      age=a.age;
      gender=a.gender;
    }
    ~student(){
      cout<<"destructer called "<<endl;
    }
    void setname(string s){
        name=s;
    }
    void getname(){
      cout<<name<<endl;
    }
    void  printinfo(){
    cout<<"NAME=";
    cout<<name<<endl;
    cout<<"AGE=";
    cout<<age<<endl;
    cout<<"GENDER=";
    cout<<gender<<endl;
    }
    bool operator==(student &a){
      if(name==a.name && age==a.age && gender==a.gender){
         return true;
      }
      return false;
    } 
};

int main(){
 /*student arr[3];
 for(int i=0;i<3;i++){
    string s;
    cout<<"NAME=";
    cin>>s;
    arr[i].setname(s);
    cout<<"AGE=";
    cin>>arr[i].age;
    cout<<"GENDER=";
    cin>>arr[i].gender;

 }
 for(int i=0;i<3;i++){
    arr[i].printinfo();
 }*/
 student a("abheek",15,0);
//a.printinfo();
student b;
student c=a;
if(c==a){
   cout<<"same"<<endl;
}
else{
   cout<<"not same"<<endl;
}
    return 0;
}