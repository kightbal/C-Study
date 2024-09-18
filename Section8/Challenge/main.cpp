// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
#include <iostream>

using namespace std;

int main() {
    
    //提示用户输入cents数
    //计算dollars的数目，cents除以100，获得剩余的cents
    //计算quarters的数目，剩余的cents再除以25，再获得剩余的cents
    //以此类推，获得dimes,nickels,pennies,之后输出对应的转换数。
    cout << "Enter an amout in cents:" <<endl;
    int cents {0};
    cin >> cents;
    int dollars {0};
    int quarters {0};
    int dimes {0};
    int nickels {0};
    int pennies {0};
    dollars=cents/100;
    int cents_remain {0};
    cents_remain=cents %100;
    quarters=cents_remain /25;
    cents_remain=cents_remain%25;
    dimes=cents_remain/10;
    cents_remain=cents_remain %10;
    nickels=cents_remain/5;
    cents_remain=cents_remain%5;
    pennies=cents_remain;
    cout << "dollars:"<<dollars <<endl;
    cout << "quarters:"<<quarters <<endl;
    cout <<"dimes:"<<dimes <<endl;
    cout <<"nickels:"<<nickels<<endl;
    cout<<"pennies"<<pennies<<endl;
    

    cout << endl;
    return 0;
}


