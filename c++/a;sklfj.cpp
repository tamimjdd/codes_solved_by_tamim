#include<iostream>
#include<time.h>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int b[15000];
int a[15000];
void merge_a(int low,int mid,int high){
int h=low,i=low,j=mid+1,k;
while(h<=mid && j<=high){
    if(a[h]<=a[j]){
        b[i]=a[h];
        h++;
    }
    else{
        b[i]=a[j];
    j++;
    }
    i++;
}
if(h>mid){
    for(k=j;k<=high;k++){
        b[i]=a[k];
        i++;
    }
}
    else{
        for(k=h;k<=mid;k++){
            b[i]=a[k];
            i++;
        }
    }
    for(k=low;k<=high;k++){
        a[k]=b[k];
    }
}

void mergesort(int low,int high){
int mid;
if(low<high){
mid=(low+high)/2;
mergesort(low,mid);
mergesort(mid+1,high);
merge_a(low,mid,high);
 }
}
int main()
{

 long i;
 char c;

  ofstream fp1,fp2;

 double total_time;

 clock_t start, end;

 start = clock(); //time count starts.

 fp1.open("D:\\data.txt");

 fp2.open("D:\\data_copy.txt");
 srand(time(NULL)); //seed rand with the system time.
 for (i = 0; i < 200000; i++)
 {
  //printf(" %d\n", rand());
  //fprintf(fp1," %ld\n", rand());
  fp1<<rand()<<endl;
 }
  ifstream fp("D:\\data.txt");

  while(!fp.eof())
	 {
		fp.get(c);
		fp2<<c;
	 }
	fp1.close();
	fp2.close();

 end = clock(); //time count stops.

 total_time = ((double) (end - start)) / CLK_TCK;//calulate total time

 cout<<"\nTime taken to print 15000 random number is: %f"<<total_time;

 getch();
 int x,j,n=12000;
   int E[15000];
   double total_time2;

   //clock_t start, end;

    start = clock(); //time count starts.
    srand(time(NULL)); //seed rand with the system time.

   for (x = 0; x <n; x++)

   {

      a[x]=rand();
      //printf("%d\n",a[i]);


   }

   mergesort(1,n);

   cout<<"\n\nSorted list is:"<<endl;

   //The sorted result is stored in array E;
   x=0;
   for(j=0;j<n;j++)
	 {
	   //printf(" %d ",a[j]);
	   E[x]=a[j];
	   x++;
	 }
   for(x=0;x<n;x++)
      {
      E[x]=((1+E[x])*(1.5-E[x]))/E[x];
      //printf(" %d ",E[i]);
      }
    srand(time(NULL));
   for(x=0;x<10;x++)
    {
     j=rand();
     if(j<n && j>0)
     {
     cout<<E[j]<<" ";
     }
     else x=x-1;
     }

   end = clock(); //time count stops.

   total_time2 = ((double) (end - start)) / CLK_TCK;//calulate total time

   cout<<"\nTime taken "<<total_time2;

   getch();
  }


