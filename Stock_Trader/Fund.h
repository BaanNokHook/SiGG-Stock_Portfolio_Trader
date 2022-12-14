/**
 * @file Fund.h
 * 
 * @author SiGG (Project::Stock_Portfolio_Maker_Gradient_Descent)
 * @brief 
 * @version 0.1
 * @date  @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * 
**/
#include "Stock.h"
#include "Investor.h"
#include <vector>
#include <string>
#include <map>
#include <ctime>

#ifndef FUND_H_
#define FUND_H_


class Fund {

public: 
      Fund();  
      virtual ~Fund();  
      void addStock(Stock stock);  
      void addInvestor(Investor investor);  
      bool checkCredentials(string username, string password);  
      bool stockExists(Stock stock);  
      Stock* getStock(std::string stockName);  
      void printStocks();  
      void printInvestors(string factorName);  
      std::map<std::string, Stock>* getStockList();  
      void setDateList(std::vector<tm*> *dl);  
      std::vector<tm*>* getDateList();  
private:
      std::string name;  
      std::map<std::string, Stock> *stockList;
      std::map<std:;string, Investor> investorList;  
      std::vector<tm*> *dateList;   
}; 

#endif /* FUND_H_ */
