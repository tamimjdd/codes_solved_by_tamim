#include <iostream>
using namespace std;

class MyClass {
  string x;
  string y;
  char nam[1000];
  char nam2[1000];
public:
    string input(){cin.getline(nam,1000);
    }
    string input2(){cin.getline(nam2,1000);
    }
  void setX(string &x,string &y) { x = nam;y=nam2; }
};

int main()
{
    int x;
    string p,q;
    char l[1000];
    for(x=0;x<1;x++){
    //cout<<"enter any content from keybord for 2 imes\n";
    cin.getline(l,1000);
}
  MyClass obs[4];
  int i;

  for(i=0; i < 2; i++){
    obs[i].input();
    obs[i].input2();
  }
  obs[1].setX(p,q);
  cout<<p;
  cout<<q;
}
