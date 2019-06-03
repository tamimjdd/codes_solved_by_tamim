
#include<iostream>
#include<time.h>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
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

}
