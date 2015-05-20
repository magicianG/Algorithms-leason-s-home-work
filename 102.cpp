// **********************************************************
// *  工 程 名：102.dsp 	              		  			*
// *  程 序 名：102.cpp 	              		  			*
// *  主要功能：自底向上合并排序法		  		        	*
// *  学号姓名：20134830347 刘明钧                   	    *
// *  编制时间：2015年5月12日             		  		    *
// **********************************************************

#include <stdio.h>
void recursion_sort(int array[],int length);  
void main(){
    int a[10];
    int i = 0;
    for(i=0; i<sizeof(a)/(sizeof(int)); i++)    
        scanf("%d",&a[i]);
    recursion_sort(a,sizeof(a)/(sizeof(int)));
    for(i=0; i<sizeof(a)/(sizeof(int)); i++)
        printf("%d ",a[i]);
}
void recursion_sort(int array[],int length)
{  
        int *p = array; 
        if(1==length) 
            return;
        int i = 0;
        int temp = 0;
        for(i=0; i<length; i++) {
            if(*p>*(p+i)) {
                temp = *p;
                *p = *(p+i);
                *(p+i) = temp;
            }
        }
        p++;
        length--;
        recursion_sort(p,length);
}
