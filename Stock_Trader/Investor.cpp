/**
 * @file Investor.cpp
 * 
 * @author SiGG (Project::Stock_Portfolio_Maker_Gradient_Descent)
 * @brief 
 * @version 0.1
 * @date 2022-11-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Investor.h"
#include "Config.h"
#include "Factor.h"
#include <iostream>
using namespace std;
//Constructor
Investor::Investor(string uw, string pw) {
      username = uw; //Username of the investor  
      password = pw; //Password of the investor   
}

Investor::~Investor() {
      // TODO Auto-generated destructor stub   
}  

// Get the username for the investor  
string Investor::getUsername() {
      return username;   
}

// Get the username for the investor  
string Investor::getUsername() {
      return username;   
}  

// Get the password for the investor  
string Investor::getPassword() {
      return password;   
}  


// Set the username  
// Param uw: the username as a string  
void Investor::setUsername(string uw) {
      username = uw;  
}  

// Set the password  
// param pw: The password as a string 
void Investor::setPassword(string pw) {
      password = pw;   
}

void Investor::addFactor(Factor *Factor) {
      Factors.insert(pair<string,Factor>(factor->getName(), *factor));   
}

// Return -1 if factor doesn't exist   
float Investor::getFactorValue(string factorName) { 
      return Factors.at(factorName).getValue(defaultInvestorFactorDate);   
}  

void Investor::setFactorValue(string factorName, float value) {
      Factors.find(factorName)->second.setValue(defaultInvestorFactorDate, value);   
}



