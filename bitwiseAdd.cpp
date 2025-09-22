#include<iostream>
using namespace std;
int main(){
  int a ,b;
  cout<<"enter the value of a"<<endl;
  cin>>a;
  cout<<"enter the value of b"<<endl;
  cin>>b;
  while(b!=0) {
  	int carry= a & b;
     	  a=a^b;
     	  b=carry<<1;
  }
  cout<<"sum of a and b ="<<a<<endl;
  return 0;
   
  }
  
  
  

