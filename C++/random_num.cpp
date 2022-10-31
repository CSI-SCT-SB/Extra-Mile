#include<iostream>
#include<time.h>
#include<stdlib.h>
#define MAX_NUM 10
using namespace std;
void randnum()
{
  int random;
  srand(time(NULL));
  for(int i=0;i<10;i++)
  {
    random=rand()%MAX_NUM;
    cout<<random<<endl;
  }
}
int main()
{
  cout<<"The ten random number are "<<endl;
  randnum();
  return 0;
}
