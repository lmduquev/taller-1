#include <iostream>
#include<cstdio>
#include<fstream>

int main(void)
{
  std::ofstream fout("sumarmonica1.txt");
  double term = 0; double sum=0;
  for(int N = 1.0; N < 5001; ++N){
    term  = 1.0/N;
    sum += term;
          
    std::printf("%6d %20.10f\n",N,sum);
    fout<< N << "\t" << sum << "\n";
  }
  
  return 0;
}
