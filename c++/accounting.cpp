#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
using namespace std;
ofstream trial("D:\\Trial balance.txt");
class file{
    char debit1[50];
    char credit1[50];
    string drx,cry;
public:
    void trail_balance(string c,int t,int &ver1,int &ver2){
        int sumtrial=0,subtrial=0;
    if(t<0){
        trial<<c<<"        \t\t\t     \t\t\t"<<t<<endl;
        subtrial=subtrial-t;
        ver2=subtrial;
    }
    else{
        trial<<c<<"           \t\t\t"<<t<<endl;
        sumtrial=sumtrial+t;
        ver1=sumtrial;
    }
    }
    void input1(){cin.getline(debit1,100);}
    void input2(){cin.getline(credit1,100);}
    void output(string &drx,string &dry){drx=debit1;cry=credit1;}
    string output1(){return debit1;}
    string output2(){return credit1;}
    char deletedebit1(char *c){
        strcpy(c,debit1);
        while(*c!='\0'){
            cout<<*c;
            c++;
            return *c;
        }
        cout<<endl;
    }
};

int main(){
    file obj,arr[100],arr2[100];
    ofstream ob("D:\\general journal.txt");
             trial<<"ACCOUNT TITLE\t\t\tDEBIT\t\t\tCREDIT"<<endl;
             ob<<"DATE\t\t\t"<<"ACCOUNT TITLE\t\t\t"<<"REF\t\t\t"<<"DEBIT\t\t\t"<<"CREDIT\t\t\t"<<endl;
int x,n,c=1,y,sum=0,total,sub=0,r,z,debit_trial,credit_trial;
string sdebit,scredit;
string cn;
char debit1[50][100],credit1[50][100],l[1],s[100],date[50],date2[50];
int dr[100],cr[100],reff[100];
             cout<<"enter the total transection number: \n";
             cin>>n;
for(x=0;x<1;x++){
    //cout<<"enter any content from keybord for 2 imes\n";
            obj.input1();
}

for(x=0;x<n;x++){
             cout<<"enter the transection no: "<<c<<endl;
             //arr[x].input1();//debit input
             cin.getline(debit1[x],100);
             //arr2[x].input2();//credit input
             cin.getline(credit1[x],100);
    c++;
}
c=1;
for(x=0;x<n;x++){
             cout<<"Enter the ammount of the account no: "<<c<<endl;
             c++;
             cin>>dr[x];
             cin>>cr[x];
             cout<<"Enter the date and reference: \n"<<endl;
             cin.getline(date,50); //this one is for getline problem, 1st getline isnt taking input
             cin.getline(date2,50);
             cin>>reff[x];
    if(dr[x]!=cr[x]){
do{
             cout<<"Oops mistake! write again: \n";
             cin>>dr[x];
             cin>>cr[x];
}while(dr[x]!=cr[x]);
    }
             ob<<date2<<"\t\t\t"<<debit1[x]<<"\t\t\t"<<reff[x]<<"      \t\t\t"<<dr[x]<<endl;
             ob<<"    \t\t\t"<<credit1[x]<<"   \t\t\t              \t\t\t"<<cr[x]<<endl;
}
ob.close();
ofstream ledger("D:\\ledger.txt");
                          /*ledger part*///
                          r=n;
for(x=0;x<n;x++){//check all accounts with debit account and creat that account
        total=0;
        sum=0;
        sub=0;
             ledger<<"\t\t\t"<<arr[x].output1()<<"\t\t\t"<<endl;
             ledger<<"ACCOUNT TITLE\t\t\t"<<"DEBIT\t\t\tCREDIT"<<endl;
             ledger<<"             \t\t\t"<<dr[x]<<endl;
        sum=sum+dr[x];
        for(y=x+1;y<n;y++){
        if(arr[x].output1()==arr[y].output1()){//checking all debits with the selected string
            ledger<<"             \t\t\t"<<dr[y]<<endl;
            sum=sum+dr[y];
            for(int i=y;i<n;i++){ //deleting the matched element
            arr[i].output1()=arr[i+1].output1();
            dr[i]=dr[i+1];
          }
          n--;
          arr[x].deletedebit1(s);
        }
        }
}
}
        //cout<<arr[x].output1();
        /*for(z=x+1;z<r;z++){
        if(arr[x].output1()==arr2[z].output2()){
            ledger<<"             \t\t\t     \t\t\t"<<cr[z]<<endl;
            sub=sub+cr[z];
            for(int i=z;i<r;i++){
            arr2[i].output2()=arr2[i+1].output2();
            cr[i]=cr[i+1];
           }
           r--;
           z--;
        }
    }*/
    //total=sum-sub;
          //  ledger<<"Total:       \t\t\t     \t"<<total<<endl;
    //obj.trail_balance(arr[x].output1(),total,debit_trial,credit_trial);

//cout<<endl<<n;
//}
/*sum=0;
sub=0;
total=0;*/

/*for(x=0;x<r;x++){//checking all the matching credits
        total=0;
        sum=0;
        sub=0;
             ledger<<"\t\t\t"<<arr2[x].output2()<<"\t\t\t"<<endl;
             ledger<<"ACCOUNT TITLE\t\t\t"<<"DEBIT\t\t\tCREDIT"<<endl;
             ledger<<"             \t\t\t     \t\t\t"<<cr[x]<<endl;
    sub=sub+cr[x];
    for(y=x+1;y<r;y++){
        if(arr2[x].output2()==arr2[y].output2()){
            ledger<<"             \t\t\t     \t\t\t"<<cr[y]<<endl;
            sub=sub+cr[y];
            for(int i=y;i<r;i++){
            arr2[i].output2()=arr2[i+1].output2();
            cr[i]=cr[i+1];
        }
        r--;
        y--;
        }
    }
        for(z=x+1;z<n;z++){
        if(arr2[x].output2()==arr[z].output1()){
            ledger<<"             \t\t\t     \t\t\t"<<dr[z]<<endl;
            sum=sum+dr[z];
            for(int i=z;i<n;i++){
        arr[i].output1()=arr[i+1].output1();
        dr[i]=dr[i+1];
        }
        n--;
        z--;
        }
    }
    total=sum-sub;
             ledger<<"TOTAL:    \t\t\t     \t"<<total<<endl;
    obj.trail_balance(arr2[x].output2(),total,debit_trial,credit_trial);
}
trial<<"Total:       \t\t\t"<<debit_trial<<"\t\t\t"<<credit_trial;
ledger.close();
trial.close();
}*/
