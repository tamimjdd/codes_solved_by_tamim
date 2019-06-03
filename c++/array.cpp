#include<iostream>
using namespace std;
int main(){
char arr[10][10];
int x,y;
for(x=0;x<=5;x++)
{
    for(y=0;y<=5;y++){

        cin>>arr[x][y];
        cout<<arr[x][y];
    }
}
}
