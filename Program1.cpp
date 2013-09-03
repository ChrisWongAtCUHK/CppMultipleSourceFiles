/*
 * Program1.cpp
 */

//all in one program. Want to "save" class and function for reuse.
#include <iostream>  

using namespace std;

class MyClass
{
public:
  //using default default constructor
  //using default copy constructor
  //using default assignment operator
  //using default destructor
  int   getData(void);
  void  setData(int);

private:
  int data;
};

int MyClass::getData(void)
{
  return(data);
}

void MyClass::setData(int input)
{
  data = input;
}

void  myFunc(int &);

int main(void)
{
  int num = 3;
  
  myFunc(num);
  cout << num << endl;
  
  MyClass sample;
  sample.setData(num);
  cout << sample.getData();
  
  return(0);
}

void myFunc(int &Num)
{
  Num += 10;
}