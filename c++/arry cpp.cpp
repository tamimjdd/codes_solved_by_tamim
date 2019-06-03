#include<iostream>
using namespace std;
class a{
char x[100],y[100];
public:
    void input1(){cin.getline(x,100);
    }
    void input2(){cin.getline(y,100);
    }
    string output1(){return x;
    }
    string output2(){return y;
    }
};
int main(){
a arr1[100];
char l[1];
    int x,y,z,s;
    cin>>s;
    for(x=0;x<1;x++){
    //cout<<"enter any content from keybord for 2 imes\n";
             cin.getline(l,1);
}
    for(x=0;x<s;x++){
        arr1[x].input1();
    }
    for(x=0;x<s;x++)
    {

        for(y=x+1;y<s;y++)
        {
            if(arr1[x].output1()==arr1[y].output1())
            {

                for(z=y;z<s;z++)
                {
                    arr1[z].output1()=arr1[z+1].output1();

                }

                s--;
                y--;
            }
        }
    }
    for(x=0;x<s;x++){
        cout<<arr1[x].output1()<<endl;
    }
}
