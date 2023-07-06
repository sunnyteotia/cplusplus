//Patterns problems//
//1.print a solid triangle//
/*#include <iostream>
using namespace std;
int main(){
int rows,column;
cout<<"ENTER THE NO. OF ROWS:"<<endl;
cin>>rows;
cout<<"ENTER THE NO. OF COLUMN:"<<endl;
cin>>column;
for (int i=1; i<=rows; i++)
{for(int j=1;j<=column;j++){
    cout<<"*";
}
    cout<<endl;
}
return 0;
}*/
//2.Print a hollow triangle//
/*#include <iostream>
using namespace std;
int main(){
    int  rows,columns;
    cout<<"ENTER THE NO. OF ROWS:"<<endl;
    cin>>rows;
    cout<<"ENTER THE NO. OF COLUMN"<<endl;
    cin>>columns;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            if(i==1||i==rows||j==1||j==columns){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }cout<<endl;
    }
    return 0;
}*/
//3.PRTINT HALF PYRAMID PATTERNS USING STARS//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }cout<<endl;
    }
    return 0;
}*/
//4.PRINT AN INVERTED HALF PYRAMID//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
return 0;
}*/
//5.PRINT HALF PYRAMID AFTER 180 DEGREE ROTATION//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }cout<<endl;
    }
    return 0;
}*/
//PRINT HALF PYRAMID USING NUMBERS//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
        }
        return 0;
    }*/
    //PRINT INVERTED HALF PYRAMID USING NUMBERS//
   /* #include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;--i){
        for(int j=1;j<=i;++j){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
//PRINT INVERTED HALF PYRAMID USING NUMBERS//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>=1;--i){
        for(int j=1;j<=i;++j){
            cout<<j<<" ";

        }cout<<endl;
    }
    return 0;
}*/
//PRINT HALF PYRAMID USIING NUMBERS-2//
/*#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";

        }cout<<endl;
    }
}*/
//PRINT INVERTED HALF PYRAMID USING NUMBERS-2//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;++j){
            cout<<i<<" ";
        }cout<<endl;
    }
}*/
//PRINT FLOYD'S TRIANGLE//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    for(int i=1; i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }cout<<endl;
    }
    return 0;
}*/
//PRINT O-1 PATTERN//
/*#include <iostream>
using namespace std;
int main(){
    int i,j,r;
    cin>>r;
    for(i=1;i<=r;i++){
        for(j=1;j<=i;j++){
            if((i+j)%2==0)
            cout<<" 1";
            else
            cout<<" 0";
        }cout<<endl;
    }
    return 0;
}*/
//PATTERN PALINDROMIC PATTERN//
/*#include <iostream>
using namespace std;
int main(){
    int i,j,r;
    cin>>r;
    for(i=1;i<=r;i++){
        int k=i;
        for(j=1;j<=(r-i);j++){
            cout<<" ";
        }
        for(;j<=r;j++){
            cout<<k<<" ";
            k--;
        }
        k=1;
        for(;j<(r+i);j++){
            k++;
            cout<<k<<" ";
        }
        for(;j<=(2*r-1);j++){
            cout<<" ";
        }cout<<endl;
    }
    return 0;
}*/
//ADVANCED PATTERN PROBLEMS//
//PRINT DIAMOND USING STARS:GIVEN n,PRINT DIAMOND WITH 2*n ROWS//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int space=(2*n-1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }cout<<endl;
        space--;
    }
    space=0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=space;j++){
            cout<<"*";
        }
        cout<<endl;
        space++;
    }
    return 0;
}*/
//PRINT SOLID RHOMBUS//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}*/
//PRINT HOLLOW RHOMBUS//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }for(int j=1;j<=n;j++){
            if(i==1||i==n){
                cout<<"*";
            }else{
                if (j==1||j==n){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}*/
//PYRAMID PATTERN FOR NUMBERS//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int space=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        space--;
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }cout<<endl;
    }
    return 0;
}*/
//PYRAMID PATTERN FOR NUMBERS-2//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int space=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }space--;
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
    return 0;
}*/
//print solid butterfly pattern//
/*#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    int empty_space =2*n-2*i;
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=1;j<=empty_space;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=n;i>=1;i--){
    int empty_space=2*n-2*i;
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=1;j<=empty_space;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}*/
//PRINT HOLLOW BUTTERFLY PATTERN//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int empty_space=2*n-2*i;
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=1;j<=empty_space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

 for(int i=n;i>=1;i--){
        int empty_space=2*n-2*i;
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=1;j<=empty_space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}*/
//PRINT PASCAL'S TRIANGLE//
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int coef=1;
    for(int i=0;i<n;i++){
        for(int space=1;space<=n-i;space++)
        cout<<" ";
        for(int j=0;j<=i;j++){
            if(j==0||i==0){
                coef=1;
            }else{
                coef=coef*(i-j+1)/j;
            }
            cout<<coef<<" ";
        }
        cout<<endl;
        }
        return 0;
    }*/
    //ZIG-ZAG PATTERN//
    #include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(i=1;i<=3;i++){
        for(j=1;j<=n;j++){
            if(((i+j)%4==0)||((i==2)&&(j%4==0)))
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

