#include"stdio.h"
#include"stdlib.h"
#include"time.h"
int main()
{
	int number,guess,i=0;
	srand(time(0));
	number=rand()%100+1;
	printf("The random number is %d\n",number);
    do{
        printf("Guess your no:\n");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Lower no please\n");
        }
        else if(guess<number)
        {
            printf("\nHigher number please");
        }
        else if(guess==number)
        {
            printf("\nCongratulation!!");
            printf("\nYou guess the correct no:%d",guess);
        }
        i++;

    }while(guess!=number);
    printf("\nThe number of turn you guess the answer is %d",i);
	
}