#ifndef lib_h 
#define lib_h 

typedef struct 
{
	int front;
	int rear;
	int used;
	int capacity;
	int *arr;
	}queue;
int *enqueue(queue *quene,int *n);
int *dequeue(queue *quene,int *index);
void sapxep(int *A ) ;
void swap(int *a,int *b);
void in(int *A);
void delay_ms(unsigned int x);
void xoadau( int **A ) ;
//int dem(queue *queue);

  #endif  
