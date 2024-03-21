#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h" 

queue *creatqueue(int n)
{
	queue *qt=(queue*) malloc(sizeof(queue));
	qt->front=0;
	qt->rear=-1;
	qt->used=0;
	qt->capacity=n;
	qt->arr=(int* ) malloc((n)*sizeof(queue));
	return qt;
}
static bool day(queue *quene)
{
	return (quene->capacity==quene->used);
}
static bool trong(queue *quene)
{
	return (quene->used==0);
}
int *enqueue(queue *quene,int *n)
{
	if(day(quene))
	return -1;
	quene->rear++;
	quene->arr[quene->rear]=*n;
	quene->used++;
	return 0;
}
int *dequeue(queue *quene,int *index)
{
	if(trong(quene))
	return -1;
	*index = quene->arr[quene->front];
//	quene->front++;
    xoadau(&quene->arr); 
	quene->used--;
	quene->rear--; 
	
	return 0; 
}
void swap(int *a,int *b)
{
	*a=*a^*b;
	*b=*b^*a;
	*a=*a^*b; 
 } 

void sapxep(int *A ) 
{
	int i,j;
	//int A[20]; 

printf("sap xep:\n "); 
	for (i=0;i<=19;i++)
	{
	for (j =19 ; j > i; j--)
		{
			if (A[j]<=A[j-1])
			{
				swap(&A[j-1],&A[j]);	
			} 
		}
	 } 
	for (i=0;i<=19;i++)
	 {
	 	printf(" %d ",A[i]) ;
	//A[i]=queue->arr[i]; 
 }
	printf("\n "); 
}
void in(int *A)
{
	int i;
	printf("\n"); 
	for (i=0;i<=19;i++)
	 {
	 	printf("  %d",A[i]) ;

 }
 printf("\n"); 
	
 } 
 void delay_ms(unsigned int x){
unsigned int TGIAN_TRE1;     
      while(x!=0)
        {    
         TGIAN_TRE1=121;
         while(TGIAN_TRE1!=0)
         {          
                  TGIAN_TRE1=TGIAN_TRE1-1;
         }
         x=x-1;
      }
}
void xoadau( int **A ) 
{
 int *B ;
 B=*A;
 B++;
 *A=B ;
  
}
