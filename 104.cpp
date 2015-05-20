
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#include <time.h>
#include <algorithm>
#define N 65536*2
using namespace std;
void Selection(int *a,int n);
void select_sort(short*a,int n);
int main()
{
	int i;
	short sort1[N];
	short A[N+1];
srand(time(NULL));
	for( i=1;i<=N;i++)sort1[i]=rand()%10000;
	time_t t1,t2;	struct tm *pt; 
	time(&t1);pt=gmtime(&t1);
 	cout<<setfill('0');
	cout<<"排序开始时间:";
	cout<<setw(2)<<(pt->tm_hour+8)%24<<":"<<setw(2)<<pt->tm_min<<":"<<setw(2)<<pt->tm_sec<<endl;
	cout<<"SelectionSort排序中"<<flush;
	sort(sort1,sort1+N);

	for(i=1;i<=N-1;i++){
		if(i%2048==0)cout<<"."<<flush;
		sort(sort1,sort1+i);
	//	Selection(sort,i);
	//		select_sort(sort1,N);
	}
	cout<<endl<<"排序结束时间:";
	time(&t2);pt=gmtime(&t2);
	cout<<setw(2)<<(pt->tm_hour+8)%24<<":"<<setw(2)<<pt->tm_min<<":"<<setw(2)<<pt->tm_sec<<endl;
	cout<<"排序耗费时间="<<t2-t1<<endl;
	/*for(i=0;i<30;i++)
	cout<<"\t"<<sort[i];*/
	getch();
	return 0;
}
void Selection(int *a,int n)
{
				//n 取10
	int i;
	int min=99999;
	int flag;
	int temp;
	int j;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				flag=j;
			}
		}
		temp=a[i];
		a[i]=a[flag];
		a[flag]=temp;
		min=99999;
	}
} 
void select_sort(short *a,int n)
{
    register int i,j,min,t;
    for(i=0;i<n-1;i++)
    {
        min=i;//查找最小值
        for(j=i+1;j<n;j++)
            if(a[min]>a[j])
                min=j;//交换
        if(min!=i)
        {
            t=a[min];
            a[min]=a[i];
            a[i]=t;
        }
    }
}



