/**
 * @file Config.cpp
 * 
 * @author SiGG (Project::Stock_Portfolio_Maker_Gradient_Descent)
 * @brief 
 * @version 0.1
 * @date 2022-11-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "Config.h"
#include <string>

using namespace std;

//Opening prompt
char openingMessage[] = "Welcome to the Stock Selector! Are you an investor, portfolio manager, or developer?(Type Corresponding Number)\n"
		"1) Investor\n2) Portfolio Manager\n3) Developer\n4) Create New Account\n0) Exit";
char responseInvalidInput[] = "Invalid Entry. Please repeat or press q to exit.";

//Login prompts
char usernamePrompt[] = "Please enter your username: ";
char passwordPrompt[] = "Please enter your password: ";
char invalidUser[]  = "Username or password not found. Please repeat or type to QUIT to exit.";

//Main Prompts
char managerMain[] = "Welcome to Manager Mode.\n******\nType any of the letters below to enter the corresponding option.\na. View statistics and performance.\nb. Edit/View investors\nc. "
		"Edit/View stocks\nd. Edit/View Algorithm and Simulation settings\ne. Edit/View buying and selling settings\nf. Run backtests\ng. Logout";
char investorMain[] = "Welcome to Investor Mode.\n******\nType any of the letters below to enter the corresponding option.\na. View your stock history and projections.\nb. "
		"Change investment amount.\nc. Edit your investor settings.\nd. Logout";
char devMain[] = "Not implemented yet.";
string backtestPrompt = "Run simulation with algorithm..\na. Regression\nPredict dates over a period of..\na. 10 days\nb. 30 days\nc. 60 days\nStarting at date..\n(Example date 10/27/17)\n";

//Input and output filenames
string stockFilenameDefault = "StockDataCurrent.csv";
string investorFilenameDefault = "InvestorData.csv";
string fundFilenameDefault = "FundData.csv";
char fileDelimDefault = ',';
string defaultFundName = "Portfolio";
int defaultInvestorFactorDate = 0;

Config::Config() {
	// TODO Auto-generated constructor stub

}

Config::~Config() {
	// TODO Auto-generated destructor stub
}

