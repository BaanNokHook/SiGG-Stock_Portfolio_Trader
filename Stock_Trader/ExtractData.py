##
 # @file ExtractData.py
 # 
 # @author SiGG (Project::Stock_Portfolio_Maker_Gradient_Descent)
 # @brief 
 # @version 0.1
 # @date  @date 2022-11-21
 # 
 # @copyright Copyright (c) 2022
 # 
##

from alpha_vantage.timeseries import TimeSeries
import sys
import os

stocks = []
#Initializes Stock list
with open("Stocks.txt", "r") as file:
    for line in file:
        st = line.split(",")
        for stock in st:
            stocks.append(stock.rstrip())

i = 0
#Loops through each stock to extract data and write to file
for stock in stocks:
    i = i + 1
    tryAgain = True
    while tryAgain == True:
        print("Testing stock: " + stock + " (Number " + str(i) + " of " + str(len(stocks)) + ")")
        try:    
            #Delete old file
            try:
                os.remove('StockData/' + stock + '.csv')
            except OSError:
                pass

            ts = TimeSeries(key='9SROQY0F727KPEXL', output_format='pandas')
            data, meta_data = ts.get_daily_adjusted(symbol=stock, outputsize='compact')

            #Writes new data to file
            data.to_csv('StockData/' + stock + '.csv')
            tryAgain = False
            
        except ValueError as e:
            print("Error with " + stock + ": " + str(e))
            tryAgain = False
            
            if ("Invalid API call." in str(e)):
                continue

            if (str(e) != "Please consider optimizing your API call frequency.\n"):
                tryAgain = True

        except:
            print ("Error with " + stock + ": " + str(sys.exc_info()[0]))
            tryAgain = False
