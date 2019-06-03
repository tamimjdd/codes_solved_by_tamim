#include<bits/stdc++.h>
using namespace std;
int main(){
int T,n,i,j,flag=0,counts1=0,minimum=0,counts2=0,cases=1,f1=0,f2=0,f3=0,ans=0;

string first,second,fw1,fw2,fw3,copys,temp1,temp2,temp3;
char c;

cin>>T;

while(T--){

    counts1=0;
    counts2=0;
    ans=0;

    cin>>first>>second>>n;


    for(i=1;i<=n;i++){

        cin>>fw1>>fw2>>fw3;



for(j=0;j<fw1.size();j++){
for(int k=0;k<fw2.size();k++){
    for(int l=0;l<fw3.size();l++){

            temp1=fw1[j];
            temp2=fw2[k];
            temp3=fw3[l];


                copys=second[0];
          //cout<<copys<<" "<<temp1<<endl;
if((copys.compare(temp1))==0){
        copys=second[1];
//cout<<copys<<" "<<temp2<<endl;
        if((copys.compare(temp2))==0){
        copys=second[2];
       // cout<<copys<<" "<<temp3<<endl;
        if((copys.compare(temp3))==0){

        ans=-1;
        }
}
}


copys=first[0];
if((copys.compare(temp1))==0){
        copys=first[1];

        if((copys.compare(temp2))==0){
        copys=first[2];
        if((copys.compare(temp3))==0){

        ans=-1;
        }
}
}


    }
}
}


                     }



                      if(ans==-1){
            printf("Case %d: -1\n",cases);
cases++;
        }
        else{




string copy2;
copy2=first;

          minimum=0;
i=0;
                     if((flag==0 && ans==0) || (n==0)){
counts1=0;
     counts2=0;
       while(i<=2){

     while(first[i]!=second[i]){


            if(first[i]=='z'){
                first[i]='a';
                counts1++;
            }
            else{
     first[i]++;
     counts1++;
            }

     }



     while(copy2[i]!=second[i]){

            if(copy2[i]=='a'){
                copy2[i]='z';
                counts2++;
            }
            else{
            counts2++;
            copy2[i]--;
            }
     }

                 minimum=+min(counts1,counts2);
                 i++;
       }
                    }


        printf("Case %d: %d\n",cases,minimum);
cases++;


        }







            }
return 0;

            }



