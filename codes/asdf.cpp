#include<bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;
int main(){
       // freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
int T,x=1,bike,car,bus,person;
float x1;
scanf("%d",&T);
while(T--){
scanf("%d%d%d%d",&person,&bike,&car,&bus);
   int arr[3];
   map< int,string >values;
   vector<pair<int,string>>prices;
values.insert(pair<int,string>(bike,"bike"));
values.insert(pair<int,string>(car,"car"));
values.insert(pair<int,string>(bus,"bus"));
int bikeprice,carprice,busprice;
   map< int,string >::iterator it=values.begin();
//**getting the minimum price out of three vicles **//
   for(it=values.begin();it!=values.end();it++){
    if(it->second=="bike"){
        bikeprice=it->first;
    }
    else if(it->second=="car"){
        carprice=it->first;
    }
    else if(it->second=="bus"){
        busprice=it->first;
    }
   }

values.clear();
//**calculating minimum values 1st part **//

   if(person>2 && person%2!=0){
   bikeprice=((person/2)+1)*bikeprice;
   }
   else if(person>2 && person%2==0){
       bikeprice=((person/2))*bikeprice;
   }
   else{
       bikeprice=(1)*bikeprice;
   }
arr[0]=bikeprice;
prices.push_back(make_pair(bike,"bike"));

   if(person>4 && person%4!=0){
   carprice=((person/4)+1)*carprice;
   }
      else if(person>4 && person%4==0){
    carprice=((person/4))*carprice;
   }
   else{
       carprice=(1)*carprice;
   }
arr[1]=carprice;
prices.push_back(make_pair(car,"car"));


   if(person>50 && person%50!=0){

   busprice=((person/50)+1)*busprice;
   }
   else if(person>50 && person%50==0){
       busprice=(person/50)*busprice;
   }
   else{
       busprice=(1)*busprice;
   }

arr[2]=busprice;
prices.push_back(make_pair(bus,"bus"));
sort(arr,arr+3);
sort(prices.begin(),prices.end());
//** calculating minimum price 2nd part **//
int person3,ver1st=0,ver2nd=0,ver3rd=0;
person3=person/2;

if(prices[0].second=="bike" || prices[1].second=="bike"){
   if(person3>2 && person3%2!=0){
   bikeprice=((person3/2)+1)*bikeprice;
   }
   else if(person3>2 && person3%2==0){
       bikeprice=((person3/2))*bikeprice;
   }
   else{
       bikeprice=(1)*bikeprice;
   }
   ver1st=bikeprice;
}

if(prices[0].second=="car" || prices[1].second=="car"){
   if(person3>4 && person3%4!=0){
   carprice=((person3/4)+1)*carprice;
   }
      else if(person3>4 && person3%4==0){
    carprice=((person3/4))*carprice;
   }
   else{
       carprice=(1)*carprice;
   }
   ver2nd=carprice;
}
   if(prices[0].second=="bus" || prices[1].second=="bus"){
   if(person3>50 && person3%50!=0){

   busprice=((person3/50)+1)*busprice;
   }
   else if(person3>50 && person3%50==0){
       busprice=(person3/50)*busprice;
   }
   else{
       busprice=(1)*busprice;
   }
   ver3rd=busprice;
   }

if(ver1st!=0){
if((ver2nd+ver3rd)<arr[0]){
    arr[0]=ver2nd+ver3rd;
}
}
else if(ver2nd!=0){
if((ver1st+ver3rd)<arr[0]){
    arr[0]=ver1st+ver3rd;
}
}
else if(ver3rd!=0){
    if(ver1nd+ver2rd<arr[0]){
    arr[0]=ver1st+ver2nd;
}
}

if(person<=50 && arr[0]>busprice){
    cout<<busprice<<endl;
}
else if(person<=4 && arr[0]>carprice){
    cout<<carprice<<endl;
}
else if(person<=2 && arr[0]>bikeprice){
    cout<<bikeprice<<endl;
else{
    cout<<arr[0]<<endl;
}

}
}
