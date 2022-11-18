/**
 * @file Factor.cpp
 * 
 * @author SiGG (Project::Stock_Portfolio_Maker_Gradient_Descent)
 * @brief 
 * @version 0.1
 * @date 2022-11-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Factor.h"
#include <string>

using namespace std;

//This class holds the values for different variables associated with a stock
//EX) Volatility, Moving Average, etc..
Factor::Factor(string *factorName) {  
      name = *factorName;   
}

Factor::~Factor() {
      // TODO Auto-generated destructor stub    
}  

void Factor::setValue(int key, float value) {
      values[key] = value;  
}  

float Factor::getValue(int key) {
      return values[key];  
}


string Factor::getName() {
      return name;  
}
