/**
 * @file Factor.h
 * 
 * @author SiGG (Project::Stock_Portfolio_Maker_Gradient_Descent)
 * @brief 
 * @version 0.1
 * @date  @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * 
**/

#ifndef FACTOR_H_
#define FACTOR_H_
#include <string>
#include <map>


class Factor {

public: 
      Factor(std::string *factorName);  
      virtual ~Factor(); 
      void setValued(int index, float value);   
      float getValue(int index);   
      std::string getName();  
private: 
      std::string name;  
      std::map<int,float> values;  
};  


#endif /* FACTOR_H_ */

