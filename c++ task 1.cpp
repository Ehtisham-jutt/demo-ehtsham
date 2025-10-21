

// There are two types of header files:
//1.system header files: it comes with the compiler
#include<iostream>
//2.user defined header files: it is written by the programmer
// include "this.h" //--> This will produce an error if this.h is no present in the cureent directory
 
using namespace std;

 int main(){
 int a =4 , b = 5;
cout<<"operators in c++:" <<endl;
cout<<"Following are the types of operators in c++"<<endl;
// Arithmetic operators           	
cout<<"The value of a + b is"<<a+b<<endl;
cout<<"The value of a - b is"<<a-b<<endl;
cout<<"The value of a * b is"<<a*b<<endl;
cout<<"The value of a / b is"<<a/b<<endl;
cout<<"The value of a % b is"<<a%b<<endl;
cout<<"The value of a ++  is"<<a++<<endl;
cout<<"The value of a --  is"<<a--<<endl;
cout<<"The value of ++a  is"<<++a<<endl;
cout<<"The value of --a is"<<--a<<endl;
//assignment operators --> use to asign values of variables
//int a = 3 , b = 9;
//char d = 'd';
// comparison operators --> compere two values means values are equal and not equal or values are greater than and less than
cout<<"Following are the types  of compersion operators in c++"<<endl;
cout<<" The value of a == b is "<<(a==b)<<endl;
cout<<" The value of a > b is "<<(a>b)<<endl;
cout<<" The value of a < b is "<<(a<b)<<endl;
cout<<" The value of a >= b is "<<(a>=b)<<endl;
cout<<" The value of a <= b is "<<(a<=b)<<endl;
cout<<" The value of a != b is "<<(a!=b)<<endl;
cout<<endl;

return 0;

 }
