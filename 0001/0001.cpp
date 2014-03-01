#include<iostream>
using namespace std;

long sumAP(int N, int a){
  long l=N-(N%a), n=N/a;
  return (a+l)*n/2;
}

int main(){
  int n=999;//1000 not included in acceptable elementd for sum

  cout<<"\nThe result is : "<<sumAP(n,3) + sumAP(n,5) - sumAP(n,15);

}
