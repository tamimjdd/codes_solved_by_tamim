#include<iostream>
using namespace std;
class samp{
int i;
public:
    samp(int n){
        i=n;
    cout<<"constructing;\n";}
    ~samp(){cout<<"distructing\n";}
    int get_i(){return i;}
};
int sqr_it(samp o){
return o.get_i()*o.get_i();
}
int main(){
samp a(10);
cout<<sqr_it(a)<<'\n';
}
