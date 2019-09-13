#include<cstdio>
#include<iostream>

int esprimo(int j);
int sumprimos(int imin, int imax);

int main(void)
{
  std::printf("sumprimos(%d, %d) = %d\n",500, 12400, sumprimos(500,12400));
  return 0;
}

int esprimo(int j)
{
  int a=0;
  for(int i=2; i<j; i++)
    {
      if(j%i==0)
	a++;
    }
  if(a==0)
    return 1; //es primo
    
  return 0;
  
}
int sumprimos(int imin, int imax)
{
  int sum=0; int b=0;
  //std::printf("Los primos sumados del %d al %d son: \n",500,12400);
  for(int i=imin;i<=imax;i++)
    {
      if(esprimo(i))
	{
	  b++; sum=sum+i; //std::printf("%d,",i);
        }
    }
  std::cout<<"El numero de primos sumados es: "<<b<< "\n";
  return sum;
}
