#include <iostream>

using namespace std;

int A(int m,int n);


int main()
{
  int m,n;
  cin>>m>>n;
  cout<<A(m,n)<<endl;


  return 0;
}

int A(int m,int n)
{
  if(m==0) return n+1;
  else
  {
    if(n==0) return A(m-1,1);
    else return A(m-1,A(m,n-1));
  }
}
