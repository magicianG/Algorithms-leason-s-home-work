// ********************************************************
// *  工 程 名：103.dsp 	              		        		  *
// *  程 序 名：103.cpp 	              		       	      *
// *  主要功能：自底向上合并排序法		  			            *
// *  学号姓名：20134830347 刘明钧                     	  *
// *  编制时间：2015年5月12日             		  		      *
// ********************************************************

/*
算法1.4 SelectionSort（参见Page 8）
输入：数组A[1..n]
输出：按升序排列的数组A[1..n]
1.	for i←1 to n-1
2.		 Selection(i) 
3.	end for	
过程Selection(i)
1.	k←i
2.	for j←i+1 to n
3.		if A[j]<A[k] then k←j
4.	end for
5.	if k≠i then 交换A[i]和A[k]	
用C语言实现上述算法并上机通过。


*/

#include <stdio.h>
void main()
{
	int a[10];				//n 取10
	int i;
	int min=99999;
	int flag;
	int temp;
	int j;
	for( i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		for(j=i;j<10;j++)
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
	for( i=0;i<10;i++)
		printf("%d\t",a[i]);
} 





