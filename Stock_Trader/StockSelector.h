/**
 * @file StockSelector.h
 * 
 * @author SiGG (Project::Stock_Portfolio_Maker_Gradient_Descent)
 * @brief 
 * @version 0.1
 * @date  @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * 
**/

#include "Fund.h"

#ifndef STOCKSELECTOR_H_
#define STOCKSELECTOR_H_
#include <string>


extern char openingMessage[];  
extern char responseInvalidInput[];  
extern char usernamePrompt[];  
extern char passwordPrompt[];  
extern char invalidUser[];  
extern char mangerMain[];  
extern char investorMain[];  
extern char devMain[];  
extern char newUserMain[];  
extern std::string stockFilenameDefault;  
extern std::string investorFilenameDefault;  
int login();  
int investorPrompt();  
int managerPrompt(bool sim, double budget, double upperPercent, double lowerPercent, int num);  
int developerPrompt();  
int newUserPrompt();   
bool checkLogin(int mode);  
static Fund *fund;  


class StockSelector {
public:
      StockSelector(); 
      virtual ~StockSelector();  
};  

#endif /* STOCKSELECTOR_H_ */    


