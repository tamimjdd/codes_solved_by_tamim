#include<bits/stdc++.h>
using namespace std;

int main(){
string sub;


        while(cin>>sub){
        int mainarray[sub.size()+10],indxofmain=0,k,i;
///***kmp main array
    for( i=0;i<sub.size();i++){
     if(i==0){
        mainarray[i]=0;
     }
     else{
        if(sub[indxofmain]==sub[i]){
            mainarray[i]=mainarray[i-1]+1;
            indxofmain++;
        }
        else{
               // cout<<mainarray[indxofmain]<<endl;
                indxofmain=0;
            mainarray[i]=0;
        }

     }

    }


int len;

len=sub.size();

vector<int>values;

for(i=1;i<sqrt(len);i++){
    if(len%i==0){
        values.push_back(i);
                values.push_back(len/i);
    }
}


sort(values.begin(),values.end(),greater<int>());
vector<int>::iterator it;
values.erase(values.begin()+values.size()-1);
string main;
main=sub;
int flag5=0;
///occurrence of a substring
for(it=values.begin();it!=values.end();it++){

map<int,int>indx;
int savestring[main.size()+10];
memset(savestring,0,sizeof(savestring));

sub=sub.substr(0,*it);
//cout<<*it<<endl;
    int flag=0,counts=0;
    for(int j=0;j<main.size();j++){

            for(int i=1;i<=sub.size();i++){


        if(main[j]==sub[i-1]){

            //cout<<j<<endl;
            indx[j]=1;
            j++;

        }
        else{
            i-=2;
        }

        if(i==sub.size()){counts++;i=mainarray[i-1];
        for(auto x:indx){
            savestring[x.first]=1;
        }
        indx.clear();
        }

            }

    }




if(counts==len/ *it){
cout<<counts<<endl;
flag5=1;
break;
}
if(flag5==1)break;
}

}

return 0;
}
