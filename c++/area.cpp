#include<iostream>
using namespace std;
class area
{
private:
    int length;
    int breadth;
public:
    area():length(5),breadth(2){};
    area(int l,int b):length(l),breadth(b){};
    int areacalc(){return length*breadth;}
    void displayarea(int temp)
    {
        cout<<temp;
    }
};
int main()
{
    area a1,a2(2,1);
    int temp;
    temp=a1.areacalc();
    a1.displayarea(temp);
    temp=a2.areacalc();
    a2.displayarea(temp);
}
