#include <iostream>

int main(){
  using namespace std;
  int N;
  cout <<"Type number to calculate it's fib. number"<< endl;		//Input to cal. F(N)
  cout <<"N="<< endl;							
  cin >> N;								//save input in N
  int f0=0,f1=1,fz;
  for (int i=1; i<N; i++){						//do for loop till F(N) is calc. -> i goes from 1 to N
    fz=f1;								//save the value of f1, need for the next loop
    f1+=f0;								//f1=f1+f0
    f0=fz;								//f0=fz -> f0 have got the former value of f1 needed to cal the next round
  }
  
  cout <<"f(N)="<<f1<< endl;
  return 0;
}
