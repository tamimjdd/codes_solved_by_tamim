#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int flag1=0,flag2=0;
int mid;
cin>>s;
int arr[s.size()+1],i;



for( i=0;i<s.size();i++){
    if(i==0){
        arr[i]=int(s[i]);
        cout<<arr[i]<<endl;
    }
    else{
        arr[i]=arr[i-1]+int(s[i]);
cout<<arr[i]<<endl;
    }
}



int length=s.size();

for(i=0;i<length;i++){

        if(length%2==0){
        mid=length/2;
        mid=mid-1;
        flag1=1;
    }
    else{
       mid=floor(length/2);

       cout<<mid<<endl;
       flag2=1;
    }

    if(flag1==1){
     if(arr[mid]==(arr[length-1]-arr[mid])){
        length--;

     }
     else{

        cout<<length<<endl;
        return 1;
     }
    }

    else if(flag2==1){
        if(arr[mid-1]==(arr[length-1]-arr[mid])){
               length--;
        }
        else{

            cout<<length<<endl;
            return 1;
        }
    }

}
}
