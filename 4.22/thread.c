#include <stdio.h> 
#include <stdlib.h>
#include <pthread.h>

/*  Global Variables    */
float array[100];
int count;
int i;
int threads[3];

float average;
float minimum;
float maximum;

void input()
{
    printf("Enter the number of elements: ");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        scanf("%f",& array[i]);
    }
}

/* Thread-1 */
void *thread_average()
{
    float sum=0;
    for(i=0;i<count;i++)
    {
        sum  = sum + array[i];
    }
    average = sum/count ;
    printf("\n Average is %f",average);
}

/*  Thread-2    */
void *thread_minimum()
{
    float temp;
    temp = array[0];
    for(i=0;i<count;i++)
    {
        if(array[i]<temp)
        {
            temp = array[i];
        }
    }
    minimum = temp;
    printf("\n Minimum is %f",minimum);
}

/*  Thread-3    */
void *thread_maximum()
{
    float temp;
    temp = array[0];
    for(i=0;i<count;i++)
    {
        if(array[i]>temp)
        {
            temp = array[i];
        }
    }
    maximum = temp;
    printf("\n Maximum is %f\n",maximum);
}

int main(void)
{
    input();
    
    pthread_t t1;
    pthread_t t2;
    pthread_t t3;
    
   threads[0]=pthread_create(&t1,NULL,&thread_average,NULL);
	
   threads[1]=pthread_create(&t2,NULL,&thread_minimum,NULL);
	
   threads[2]=pthread_create(&t3,NULL,&thread_maximum,NULL);

    pthread_join(t1,NULL);

    pthread_join(t2,NULL);

    pthread_join(t3,NULL);
}