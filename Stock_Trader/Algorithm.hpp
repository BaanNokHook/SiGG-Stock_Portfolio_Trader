/**
 * @file Algorithm.hpp
 * 
 * @author SiGG (Project::Stock_Portfolio_Maker_Gradient_Descent)
 * @brief 
 * @version 0.1
 * @date  @date 2022-11-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef ALGORITHM_H
#define ALGORITHM_H
#include <ctime>
#include "Fund.h"

class Algorithm {
public: 
      Algorithm(int interval, Fund *fund, vector<string> *factorNames, int budget, int numPur, double upperLim, double lowerLim);  
      virtual ~Algorithm();  
      double predictDate(tm *Date, Stock *st);   
      double* selectStockDistribution(map<string, double> *percentCorrect, map<string, double> *increase, tm *date);  
private:  
      int getDateIndex(tm* Date, Stock *st, Fund *fund);   
      double getPrediction(double result[], vector<string> *faName, Stock *stk, int date, vector<tm*> *dates);   
      int testInterval;  
      Fund *fund;  
      vector<string> *faName;   
      std::map<string, Stock> *stockList;  
      //Initialize in algorithm when ready
      int totalBudget;   
      int numDiffPurchased;
      double upperPercentLimit;  
      double lowerPercentLimit;  
};  


#endif  //ALGORITHM_H
