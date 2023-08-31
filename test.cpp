#include<iostream>
#include<math.h>
using namespace std;
int AP(int n){
  int num=3*n-7;
  return num;}
int Bit(int a){
    int ans=0;
    while (a!=0)
    {
        if (a&1)
        {
            ans++;
        }
        a=a>>1;
    }
return ans;
}
int Fib(int x){
int a=0;
int b=1;
int num=0;
for ( int i = 0; i <x-2; i++)
{
     num=a+b;
    a=b;
    b=num;
    
}return num;}
int main() {
int n,a;
cin>>n;
cin>>a;
cout<<AP(n)<<endl;
cout <<Bit(n)+Bit(a)<<endl;
cout << Fib(a)<<endl;
}