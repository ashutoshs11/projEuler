#include<iostream>
using namespace std;
//Brute force
unsigned long long number = 600851475143;
int main(){
  unsigned int divisor=2;
  while (number > 1){
    if (!(number % divisor)) 
      number /= divisor;
    else
      divisor++;
  }
  cout<<"the result is "<< divisor;
}
