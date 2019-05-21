#include <stdio.h>
#include <math.h>

int Isprime(int a)
{
    if(a<2)
    return 0;
    int b=ceil(sqrt(a));
    while(b>1)
    {
      if(a%b==0)
      return 1;
      b--;
    }
    return 0;
}

int main(void)
{
    printf(Isprime(2));
    //func();
    return 0;
}

int func(void)
{
    int min, max;
    scanf("%i",&min);
    scanf("%i",&max);
    printf("Nubmers are%i,%i",min, max);
    return min;
}
