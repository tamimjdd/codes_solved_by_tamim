//**FAIL ATTEMPT**//

#include<bits/stdc++.h>
using namespace std;

struct compare_first_only {
    template<typename T1, typename T2>
    bool operator()(const std::pair<T1, T2>& p1, const std::pair<T1, T2>& p2) {
        return p1.second <= p2.first;
    }
};

int main(){
int T,n,u,v,cases=1,prev_u,prev_v;

cin>>T;
while(T--){
        int Lykan=1,Vampire=1,samecheck;

        map<string,int>fighters;
        fighters["L"]++;
        fighters["V"]++;

vector<pair<int,int>>names_of_fighters;

string s1;
    cin>>n;

    for(int i=1;i<=n;i++){
cin>>u>>v;

names_of_fighters.push_back(make_pair(u,v));
}

stable_sort(names_of_fighters.begin(), names_of_fighters.end(), compare_first_only());


int i=1;
for(auto x: names_of_fighters){
    if(i==1){
      //  cout<<"yesss "<<endl;
    prev_u=x.first;prev_v=x.second;
    i++;
}
else if(i==2){
    //cout<<"ues2 "<<endl;
    if(x.first==prev_u || x.first== prev_v){
      Lykan++;
      samecheck=x.first;
    }
    else if(x.second==prev_u || x.second== prev_v){
        Lykan++;
        samecheck=x.second;
    }
    prev_u=x.first;prev_v=x.second;
s1='L';
fighters["V"]++;
i++;
}
else{
       // cout<<"ueeee"<<endl;
    if(x.first==prev_u || x.first== prev_v){

    if(samecheck!=x.first){
    if(s1=="L"){
        s1='V';
    }
    else{
        s1='L';
    }
    samecheck=x.first;
    }

    if(s1=="L"){
            fighters["V"]++;
        Lykan++;
    }
    else{
                    fighters["L"]++;
        Vampire++;
    }


    }
    else if(x.second==prev_u || x.second== prev_v){

if(samecheck!=x.second){
if(s1=="L"){
    s1='V';
}
else{
    s1='L';
}
samecheck=x.second;
}

if(s1=="L"){
                    fighters["V"]++;
    Lykan++;
}
else{
                fighters["L"]++;
    Vampire++;
}


    }
    prev_u=x.first;prev_v=x.second;
    i++;
}
}


for(auto x:names_of_fighters){
    cout<<x.first<<" "<<x.second<<endl;
}





if(fighters["L"]>fighters["V"]){

printf("Case %d: %d\n",cases,fighters.find("L")->second);
cases++;
}
else{
    printf("Case %d: %d\n",cases,fighters.find("V")->second);
cases++;
}



}
return 0;
}
