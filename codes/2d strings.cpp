#include<bits/stdc++.h>
using namespace std;

int counts=1;
struct main{
int one;
int two;
int three;
int size;
};

int comp2(struct main first,struct main second){
if(first.one==second.one){
    if(first.size<second.size) return 1;
    else return 0;
}
else{
    return 1;
}
}


vector< main>indx2;
int func(int ver,string s2){

while(ver<=s2.size()){
for(int i=ver;i<s2.size();i++){
        if(ver==i){
    indx2.push_back({ver,i,counts,1});
    counts++;
        }
        else{
            indx2.push_back({ver,i,counts,(i-ver)+1});
    counts++;
        }
}
break;
}

}
///suffix array part:

int temp=0;
struct tamim{
int indx;
int rank[3];
};

int comp(struct tamim first,struct tamim second){
if(first.rank[0]==second.rank[0]){
    if(first.rank[1]<second.rank[1]){
        return 1;
    }
    else if(first.rank[1]==second.rank[1]){
            if(first.rank[2]==second.rank[2]) return 1;
                    else if(first.rank[2]==second.rank[2]){
            if(first.indx<second.indx) return 1;
            else return 0;
        }
        }

    else return 0;
}
else{
    if(first.rank[0]<second.rank[0]) return 1;
    else return 0;
}

}

struct three_element{
int suf;
string s;
int indx;
three_element(int suf,const string& s,int ind):suf(suf),s(s),indx(ind){}
};






int *suffixarray(int n,string s){
struct tamim arr[n];

int i;
///for 1 size suffix


///for 2 size suffix
for(i=0;i<n;i++){
    arr[i].indx=i;
    arr[i].rank[0]=s[i]-'a';
    if(i+1<n){
        arr[i].rank[1]=s[i+1]-'a';
        arr[i].rank[2]=2;
    }
    else{
        arr[i].rank[1]=-1;
        arr[i].rank[2]=1;
    }

}

/*for(i=0;i<n;i++){
    cout<<arr[i].rank[2]<<endl;
}*/

    sort(arr,arr+n,comp);
    int ind[n];
    for(int k=4;k<2*n;k=k*2){
        int rankval=0;
        int prev_rank=arr[0].rank[0];
        arr[0].rank[0]=rankval;
        ind[arr[0].indx]=0;
        for(i=1;i<n;i++){
            if(prev_rank==arr[i].rank[0] && arr[i].rank[1]==arr[i-1].rank[0]){
                prev_rank=arr[i].rank[0];
                arr[i].rank[0]=rankval;
            }
            else{
                prev_rank=arr[i].rank[0];
                arr[i].rank[0]=++rankval;
            }
            ind[arr[i].indx]=i;
        }
int len=n;
        for(i=0;i<n;i++){
            int nextind=arr[i].indx+k/2;
            if(nextind<n){
                arr[i].rank[1]=arr[ind[nextind]].rank[0];
                arr[i].rank[2]=len-arr[i].indx;
            }
            else{
                arr[i].rank[1]=-1;
                arr[i].rank[2]=len-arr[i].indx;
            }
        }
        sort(arr,arr+n,comp);

/*cout<<"printing the 3rd column: \n";
for(i=0;i<n;i++){
    cout<<arr[i].rank[2]<<endl;
}*/



    }

    int *sarray=new int[n];

    for(i=0;i<n;i++){
        sarray[i]=arr[i].indx;
    }




    return sarray;
}





int main(){
string s[100],s2;
int k;
cin>>s2;
cin>>k;
int indx=0,ver=4;
int n=s2.size();
int *array=suffixarray(n,s2);
int i;


for( i=0;i<n;i++){
        cout<<array[i]<<" ";
    func(array[i],s2);
}
cout<<endl;
int sizeofindx=indx2.size();
sort(indx2.begin(),indx2.end(),comp2);

//for(auto x: indx2){
        /*if(x.one==x.two){
                cout<<s2.substr(x.one,1)<<endl;
        }
        else{
    cout<<s2.substr(x.one,x.one+x.two)<<endl;
}*/

//cout<<x.one<<" "<<x.two<<" "<<x.three<<" "<<x.size<<endl;
//}

if(k>indx2.size()){
printf("No such line.\n");
}
else{
        //cout<<indx2[k-1].one<<" "<<indx2[k-1].two<<endl;
if(indx2[k-1].one==indx2[k-1].two){
        //cout<<"yesss"<<endl;
cout<<s2.substr(indx2[k-1].one,1);
}
else{
    //cout<<"yesss222"<<endl;
cout<<s2.substr(indx2[k-1].one,(indx2[k-1].two-indx2[k-1].one)+1)<<endl;
}

}
return 0;
}
