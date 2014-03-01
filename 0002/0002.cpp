#include<iostream>
using namespace std;

int main(){
  //after 2, every 3rd term is positive
  //so we might as well sum those instead of calculating all and then trying to 
  //find which ones are even valued
  //1 _2_ 3 5 _8_ 13 21 _34_ 
  //

  int LIMIT = 4e6;

  int a=1, b=2;
  int c= 0;
  long sum =0;
  while(b<=LIMIT){
    sum+=b;
    c=a+b;a=b;b=c;
    c=a+b;a=b;b=c;
    c=a+b;a=b;b=c;
  }

  cout << "The result is "<<sum;

}
