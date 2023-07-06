// how to declare string//
#include<iostream>
#include<string>
using namespace std;
int main(){
 string a;
 cin>>a;
 cout<<a;
    return 0;
}
// how to declare string with spaces//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
string str;
getline(cin,str);
cout<<str<<endl;
    return 0;
}*/
// how to append functions//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1="hare";
    string s2="krishna";
    s1.append(s2);
    cout<<s1<<endl;
    return 0;
}*/
// how to append functions without writing append//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string a="hare";
    string b="krishna";
    cout<<a+b<<endl;
    return 0;
}*/
//  same as above//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
 string a="sita";
 string b="ram";
 a+=b;
 cout<<a<<endl;
    return 0;
}*/
// how to declare character of a string//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
string a="krishna";
cout<<a[2]<<endl;
    return 0;
}*/
// clear function//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string a="jdgfuiwbfvuwgfuwarfgufguwg";
    a.clear();
    cout<<a<<endl;
    return 0;
}*/
// how to copmare 2 strings//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string u="abc";
    string r="xyz";
    cout<<u.compare(r)<<endl;
    return 0;
}*/
// same as above//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
string a="abc";
string b="abc";
if (a.compare(b));
cout<<"strings are equal";
    return 0;
}*/
// empty functions//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
 string a="abc";
 cout<<a<<endl;
 a.clear();
 if(a.empty())
 cout<<"string is empty";
    return 0;
}*/
// erase functions//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
 string a="harebbbkrishna";
 a.erase(4,3);
 cout<<a<<endl;
    return 0;
}*/
// find function//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
string a="sitaram";
cout<<a.find("ram")<<endl;
    return 0;
}*/
//insert function//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
string a="sm";
a.insert(1,"itara"); //put index and what to insert in argument//
cout<<a<<endl;
    return 0;
}*/
// how to find size//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
string a="harekrishna";
cout<<a.size()<<endl; //or you can use length instead of size//
    return 0;
}*/
// iteration//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
 string a="harekrishna";
 for(int i=0;i<a.length();i++)
 cout<<a[i]<<endl;
    return 0;
}*/
// sub string//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
 string a="harekrishna";
 string b=a.substr(4,11);
 cout<<b<<endl;
    return 0;
}*/
//strings to integers//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
string s="1000";
int x=stoi(s); // string to integers-stoi//
cout<<x+2<<endl;
    return 0;
}*/
// integers to strings//
/*#include<iostream>
#include<string>
using namespace std;
int main(){
 int x=354;
 cout<<to_string(x)+"2"<<endl;
    return 0;
}*/
// sorting in string //
/*#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string a="jfklgavbshf";
sort(a.begin(),a.end());
cout<<a<<endl;
    return 0;
}*/
// problem to convert lower case to upper case//
/*#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string a="harekrishna";
for(int i=0;i<a.size();i++){
    if(a[i]>='a' && a[i]<='z')
    a[i]=a[i]-32;
    
}
cout<<a<<endl;
// convert to lower case//
for(int i=0;i<a.size();i++){
    if (a[i]>='A' && a[i]<='Z')
    a[i]+=32;
} 
cout<<a<<endl;
    return 0;
}*/
// same as above but by different method //
/*#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string a="harekrishna";
    transform(a.begin(),a.end(),a.begin(),::toupper); // first write first iterator and last iterator and 
    //then that point from where you have to transform and then tye of transform 

    cout<<a<<endl;
    transform(a.begin(),a.end(),a.begin(), ::tolower);
    cout<<a<<endl;
    return 0;
}*/
// how to make greatest number from given number//
/*#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
     string a="123456789";
     sort(a.begin(),a.end(),greater<int>());
     cout<<a<<endl;
    return 0;
}*/
// to  find maximum frequency of alphabet in a given number//
/*#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string a="harekrishna";
int freq[26];
for(int i=0;i<26;i++)
freq[i]=0;
for(int i=0;i<a.size();i++)
freq[a[i]-'a']++;
char ans='a';
int maxf=0;
for(int i=0;i<26;i++){
    if(freq[i]>maxf){
        maxf=freq[i];
        ans=i+'a';
    }
}
cout<< maxf <<" "<<ans<<endl;
    return 0;
}*/