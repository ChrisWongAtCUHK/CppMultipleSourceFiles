/*
 *  Data.cpp
 */ 

#include "DataStr.h"  

using namespace std;
//put interesting/working part of class in here 
string DataStr::getData() 
{ 
  return data;
} 

void DataStr::setData(string input) 
{ 
  data = input; 
}

void DataStr::setData(int input) 
{ 
	data_i.setData(input);
	stringstream ss;
	ss << input;
	data = ss.str();
}

int DataStr::getData_i(){
	return data_i.getData();
}