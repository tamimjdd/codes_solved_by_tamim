#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>


void merge_sort(int a[15000],int low,int high);
  void merge(int a[15000],int low,int mid,int high);
int main()

{

 long i;
 char c;

  FILE *fp1,*fp2;

 double total_time;

 clock_t start, end;


start = clock(); //time count starts.


  //task 1

 fp1=fopen("data.txt","w");

 fp2=fopen("data_copy.txt","w");

 srand(time(NULL)); //seed rand with the system time.

 for (i = 0; i < 200000; i++)

 {

  //printf(" %d\n", rand());
  fprintf(fp1," %ld\n", rand());

 }
  fp1=fopen("data.txt","r");

  while((c=getc(fp1))!=EOF)
	 {
		putc(c,fp2);

	 }
	fclose(fp1);
	fclose(fp2);

   //task 2

  int j, a[15000],n=12000,l=0;
   int E[15000];





    srand(time(NULL)); //seed rand with the system time.

   for (i = 0; i <n; i++)

   {

      a[i]=rand();
      //printf("%d\n",a[i]);


   }

   merge_sort(a,l,n-1);

   printf("\n\nSorted list is:");

   //The sorted result is stored in array E;
   i=0;
   for(j=0;j<n;j++)
	 {
	   //printf(" %d ",a[j]);
	   E[i]=a[j];
	   i++;
	 }
   for(i=0;i<n;i++)
      {
      E[i]=((1+E[i])*(1.5-E[i]))/E[i];
      //printf(" %d ",E[i]);
      }
   //srand(time(NULL));
   for(i=0;i<10;i++)
    {
     j=rand();
     if(j<n && j>0)
     {
     printf("%d   ",E[j]);
     }
     else i=i-1;
     }

   end = clock(); //time count stops.

   total_time = ((double) (end - start)) / CLOCKS_PER_SEC;//calulate total time

   printf("\nTime taken to print 10 random number is: %f", total_time);

   getch();
  }

  void merge_sort(int a[15000],int low,int high)
  {
   int mid;
   if(low<high)
	{
	  mid=(low+high)/2;
	  merge_sort(a,low,mid);
	  merge_sort(a,mid+1,high);

	  merge(a,low,mid,high);
	}
   }

   void merge(int a[15000],int low,int mid,int high)
   {
	int l,i,j,b[15000],k;
	l=low;
	i=low;
	j=mid+1;
	while(l<=mid&&j<=high)
	 {
	   if(a[l]<=a[j])
		 {
		   b[i]=a[l];
		   l++;
		 }
	   else
		 {
		   b[i]=a[j];
		   j++;
		 }
	   i++;
	 }
   if(l>mid)
	 {
	  for(k=j;k<=high;k++)
	   {
		 b[i]=a[k];
		 i++;
	   }
	 }
   else
	 {
	  for(k=l;k<=mid;k++)
	   {
		 b[i]=a[k];
		 i++;
	   }
	 }

	for(k=low;k<=high;k++)
	 {
	   a[k]=b[k];
	 }

   }











