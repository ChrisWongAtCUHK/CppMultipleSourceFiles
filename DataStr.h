#include <iostream>
#include <string>
#include <sstream>

#include "DataInt.h"  

using namespace std;
/*
 * The header file: DataStr.h
 */ 

#ifndef DATASTR_H  
#define DATASTR_H  
//put just the descriptive part of the class in here 
class DataStr 
{ 
public: 
  //using default default constructor 
  //using default copy constructor 
  //using default assignment operator 
  //using default destructor 
  string getData();
  int getData_i();
  void setData(string); 
  void setData(int);
private: 
  string data; 
  DataInt data_i;
}; 
#endif 