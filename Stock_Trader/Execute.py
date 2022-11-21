##
 # @file Execute.py
 # 
 # @author SiGG (Project::Stock_Portfolio_Maker_Gradient_Descent)
 # @brief 
 # @version 0.1
 # @date  @date 2022-11-21
 # 
 # @copyright Copyright (c) 2022
 # 
##
import pause
import datetime
import os
from time import sleep
#while True:
#pause.days(1)

print("cd /home/pi/Desktop/PortfolioManager")
Command = 'cd /home/pi/Desktop/PortfolioManager'
os.system(Command)

print('python3 ExtractData.py')
Command = 'python3 ExtractData.py'
os.system(Command)

print('python3 FormatData.py')
Command = 'python3 FormatData.py'
os.system(Command)

print('python3 RunStockSelector.py')
Command = 'python3 RunStockSelector.py'
os.system(Command)

sleep(30)

print("python3 SendEmail.py -a 'Stocks to select today'")
Command = "python3 SendEmail.py -a 'Stocks to select today'"
os.system(Command)


    
