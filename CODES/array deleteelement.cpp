#include<iostream>
using namespace std;
struct{
char arr[1000];

}box[1000];
int main(){
int x,n,k;
char l[1000];
cin>>n;
for(x=0;x<1;x++){
    //cout<<"enter any content from keybord for 2 imes\n";
    cin.getline(l,1000);
}
for(x=0;x<n;x++){
    cin.getline(box[x].arr,1000);
}
    cin>>k;
for(int i=k;i<n-1;i++){
    box[i]=box[i+1];
}
n--;
for(x=0;x<n-1;x++){
    cout<<box[x].arr<<endl;
}
}
