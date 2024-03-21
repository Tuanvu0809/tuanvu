#include <stdio.h>
#include <stdlib.h>
#include "queue.h" 
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	queue *quene=creatqueue(40);
	 int r,i=0,j;
	 int *index=(int* ) malloc(20 *sizeof(int) ) ;
	      srand((int)time(0));
	int a=0; 
	int n=0; 
	while(1)
	{
	//a++;
//	free(quene->arr);  
	//	free(quene->arr); 
	    r = rand()%100+1;
        enqueue(quene,&r);
       // 	
        printf(" %d  ",quene->arr[i]); 
        sleep(1);  
        dequeue(quene ,&index[n]);
		n++;
		if (n==20)
		{
			sapxep(index);
			n=0; 
		 } 
		 //i++; 
	
    }


	return 0;
}
