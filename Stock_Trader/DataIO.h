/**
 * @file DataIO.h
 * 
 * @author SiGG (Project::Stock_Portfolio_Maker_Gradient_Descent)
 * @brief 
 * @version 0.1
 * @date  @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * 
**/


#ifndef DATAIO_H_
#define DATAIO_H_

#include "Stock.h"
#include "Investor.h"
#include "Fund.h"
#include "Config.h"
#include <vector>
#include <string>
#include <fstream>

//extern string defaultFundName;
//Fund inFund;

class DataIO {
public: 
      DataIO();  
      DataIO(string stockFilename, string investorFilename, string fundFilename);  

      void writeDistributionToFile(tm *Date, double *results, std::map<string, Stock> *sl);  
      void initializeStocksLocal();  
      void initializeInvestorLocal();  
      void initializeAllInvestorsLocal();  
      void exportInvestorsLocal();  
      void exportsStocksLocal();  
      vector<tm *>* getDates(string filename, char delim);  
      //Importing the data from computer
      Fund * initializeAllInvestorLocal();  
      //Exporting the Data 
      void exportFundLocal();  
      virtual ~DataIO();   

private:
      Fund fund;  
      string stockFilename;  
      string investorFilename;  
      string fundFilename;  
      ifstream input;  

};  

#endif /* DATAIO_H_ */    


