#include <stdio.h>
#include <stdlib.h>

void functie(int sum, int n, int vect[])
{
    int* retine=(int*)calloc(n, sizeof(int));
    int k =0;
    int i;

    for(i = n; i >= 0; i--)
    {

        if( sum - vect[i] >= 0)
        {
            sum = sum -vect[i];
            retine[k] = vect[i];
            k++;
            n = i;
        }
        if(i == 0 ) break;
    }

    if(sum > 0)
    {
        printf("Nu se poate reprezenta fix");
        return;
    }

    for(int i =0; i<k ;i++)
    {
        printf("%d ", retine[i]);
    }
}

int main()
{
   int n =7;
   int vect[]={1, 5, 10, 20, 50, 100, 200, 500};

   int sum;
   scanf("%d", &sum);

    functie(sum, n, vect);
    return 0;
}
