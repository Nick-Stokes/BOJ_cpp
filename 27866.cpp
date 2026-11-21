// Example program
#include <iostream>
#include <string>

using namespace std;
int main()
{
  string input_str; int input_int;
  cout<<"Input a word and an integer.: ";cin>>input_str>>input_int;
  if(input_int>size(input_str)) {cout<<"error"<<endl; return -1;}
  else{cout<<input_str[input_int-1]<<endl;}
}