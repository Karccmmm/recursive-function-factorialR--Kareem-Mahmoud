
#include <bits/stdc++.h>
using namespace std;
 
int factorialR(int n)
{
   if(n<=1){
      return n;
   }
   return n*factorialR(n-1);//recursively calling factorialR
}
 
int main()
{
   int n;
   cin>>n;//taking input from user
   cout<<factorialR(n)<<endl;//calling recursive function 
   return 0;
}