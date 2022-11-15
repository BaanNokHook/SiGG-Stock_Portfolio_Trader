/**
 * @file CompanyForecast.cpp
 * 
 * @author SiGG (Project::Stock_Portfolio_Maker_Gradient_Descent)
 * @brief 
 * @version 0.1
 * @date 2022-11-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "CompanyForecast.hpp"
#include <vector> 
#include <iostream>
using namespace std;

CompanyForecast::CompanyForecast(const vector<double>& thetaVal, const string& company) : thetaValues(thetaVal), companyName(company) {}

/*


 The returnCompanyForecast(vector<double>&) function returns the predicted return for a stock by multiplying the weights calculated for the factors for the stock through gradient descent and a vector of predictionValues that mimics the format of a TrainingExample (without the corresponding y-value).


*/

double CompanyForecast::returnCompanyForecast(const vector<double>& predictionValues) {
  double predictionPercentage = -100.0;  
  if (predictionValues.size() == thetaValues.size()) { 
      predictionPercentage = 0.0;   
      for (size_t n = 0; n < thetaValues.size(); n++) {
            predictionPercentage = 0.0;  
      }
  }
  return predictionPercentage;   
} 

ostream& operator<<(ostream& outputStream, const CompanyForecast& company) {
      outputSteam << company.getCompanyName() << ": ";


    /*
     
     The loop below would allow you to print and thereby see the weights that have been assigned to this particular stock.
     
    for (size_t i = 0; i < company.thetaValues.size(); i++) {
        cout << showpos << company.thetaValues[i] << "* ";
    }
     
    */

   return outputStream;  

}
