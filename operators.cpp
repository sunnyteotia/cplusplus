//Program of oerators//
//1//
/*#include<iostream>
using namespace std;
int main () {
    int a=5;
    a=1,2,3;
    printf("%d",a);
    return 0;
}*/
//2//
/*#include<iostream>
using namespace std;
int main () {
    int a=5;
    a=(1,2,3);
    printf("%d",a);
    return 0;
}*/
//3//
/*#include<iostream>
using namespace std;
int main () {
    int x=2;
    (x & 1)?printf("true"):printf("false");
    return 0;
}*/
//4//
/*#include<iostream>
using namespace std;
int main () {
    printf("%d",3*2);
}*/
//5//
/*#include<iostream>
using namespace std;
int main () {
    int i=10;
    i++;
    i*i;
    printf("%d\n",i);
    return 0;
}*/
//6//
#include<iostream>
using namespace std;
int main () {
    int a=1,b=3,c;
    c=b<<a;
    b=c*(b*(++a)--);
    a=a>>b;
    printf("%d",b);
    return 0;
}
