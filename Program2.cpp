/*
 *  Program2.cpp
 */

//driver program for MyClass and MyFunctions
#include <iostream> 

//include your header files this time, not the actual code as before
//Note: do NOT include the cpp files, don't even mention them
//the linker will link the necessary cpp files for you (like magic!)
#include "DataInt.h" 
#include "DataStr.h" 
#include "MyFunctions.h" 

using namespace std;
int main(void)
{
  int num = 3;
  myFunc1(num);
  cout << num << endl;

  DataStr sample;
  sample.setData("999");
  cout << sample.getData() << endl;
  sample.setData(1999);
  cout << sample.getData() << endl;
  cout << sample.getData_i() << endl;
  return(0);
}
