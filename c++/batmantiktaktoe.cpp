#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[5][5];
    int i,j,flag=0,T;
    cin>>T;
    while(T--){
            flag=0;
for(i=0;i<4;i++){
    for(j=0;j<4;j++){
        cin>>arr[i][j];
    }
}

for(i=0;i<4;i++){
    for(j=0;j<2;j++){

       if(arr[i][j]=='.' && arr[i][j+1]=='x' && arr[i][j+2]=='x'){
            flag=1;

            break;

        }
        if(arr[i][j]=='x' && arr[i][j+1]=='x' && arr[i][j+2]=='.'){

            flag=1;
break;
        }
        if(arr[i][j]=='x' && arr[i][j+1]=='.' && arr[i][j+2]=='x'){
            flag=1;

break;
        }

    }
}
if(flag==1){
    cout<<"YES"<<endl;
}
else{


for(j=0;j<4;j++){
    for(i=0;i<2;i++){

       if(arr[i][j]=='.' && arr[i+1][j]=='x' && arr[i+2][j]=='x'){
            flag=1;

break;
        }
        if(arr[i][j]=='x' && arr[i+1][j]=='x' && arr[i+2][j]=='.'){

            flag=1;
break;
        }
        if(arr[i][j]=='x' && arr[i+1][j]=='.' && arr[i+2][j]=='x'){
            flag=1;

break;
        }

    }
}

if(flag==1){
    cout<<"YES"<<endl;
}
else{

for(i=0;i<2;i++){
for(j=0;j<2;j++){
   if(arr[i][i]=='.' && arr[i+1][i+1]=='x' && arr[i+2][i+2]=='x'){
            flag=1;

break;
        }
        if(arr[i][i]=='x' && arr[i+1][i+1]=='.' && arr[i+2][i+2]=='x'){
            flag=1;

break;
        }
        if(arr[i][i]=='x' && arr[i+1][i+1]=='x' && arr[i+2][i+2]=='.'){
            flag=1;

break;
        }
        if(arr[i][j]=='.' && arr[i+1][j+1]=='x' && arr[i+2][j+2]=='x'){
            flag=1;
                       break;
        }
        if(arr[i][j]=='x' && arr[i+1][j+1]=='.' && arr[i+2][j+2]=='x'){
            flag=1;
                        break;
        }
        if(arr[i][j]=='x' && arr[i+1][j+1]=='x' && arr[i+2][j+2]=='.'){
            flag=1;
                        break;
        }
}
}

if(flag==1){
    cout<<"YES"<<endl;
}
else{



    for(i=0;i<2;i++){

for(j=3;j>1;j--){

        if(arr[i][j]=='.' && arr[i+1][j-1]=='x' && arr[i+2][j-2]=='x'){
            flag=1;
                  break;

        }
        if(arr[i][j]=='x' && arr[i+1][j-1]=='.' && arr[i+2][j-2]=='x'){
            flag=1;

break;
        }
        if(arr[i][j]=='x' && arr[i+1][j-1]=='x' && arr[i+2][j-2]=='.'){
            flag=1;

break;
        }

}

}
if(flag==1){
    cout<<"YES"<<endl;
}
else{
        cout<<"NO"<<endl;
}

}
}
}
    }
}
