#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    printf("The random between 0 to 100 is %d\n",rand()%100);
    printf("The random between 0 to 30 is %d\n",rand()%30);
    return 0;
}