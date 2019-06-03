#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class strtype{
char *p;
int len;
public:
    char *getstring(){return p;}
    int getlenget(){return len;}
    strtype(){
    p=new char[255];
    p='\0';
     len=255;
    }
    strtype(char *n,int m){
    if(strlen(n)>=m){
        cout<<"too shrot memory;";
    }
    p=new char(m);
    strcpy(p,n);
    len=m;
    }
};
int main(){
strtype s1;
strtype s2("this is a test",100);
cout<<s1.getstring();
cout<<s1.getlenget();
cout<<s2.getstring();
cout<<s2.getlenget();
}
