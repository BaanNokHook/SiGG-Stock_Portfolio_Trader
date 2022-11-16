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
//  A class that is primarily used for prediction after the execution of the gradient descent algorithm.

#ifndef CompanyForecast_hpp
#define CompanyForecast_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

class CompanyForecast {
    
    std::vector<double> thetaValues;
    std::string companyName;
    
public:
    
    CompanyForecast(const std::vector<double>& thetaVal, const std::string& company);
    double returnCompanyForecast(const std::vector<double>& predictionValues);
    std::string getCompanyName() const;
    friend std::ostream& operator<<(std::ostream& outputStream, const CompanyForecast& company);
    
};

#endif /* CompanyForecast_hpp */
