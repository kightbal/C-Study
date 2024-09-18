
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main() {
    const double price_per_sroom {25};
    const double price_per_lroom {35};
    const float tax_rate {0.06};
    cout<<"How many small room would you clean \n";
    int count_sroom {0};
    cin>> count_sroom;
    cout << "How many large room would you clean \n";
    int count_lroom {0};
    cin >> count_lroom;
    cout << "Estimate for carpet cleaning service \n";
    cout << "Number of small rooms:" << count_sroom <<endl;
    cout << "Number of large rooms:" << count_lroom << endl;
    cout << "Price per small room:" << price_per_sroom;
    cout << "\nPrice per large room:" << price_per_lroom;
    cout << "\nCost:" <<(price_per_sroom*count_sroom+price_per_lroom*count_lroom);
    cout << "\nTax:"<<(price_per_sroom*count_sroom+price_per_lroom*count_lroom)*tax_rate;
    cout <<"\n====================== ";
    cout << "\nTotal estimate: $"<<(price_per_sroom*count_sroom+price_per_lroom*count_lroom)*(1+tax_rate);
    cout << "\nThis estimate is valid for 30 days";
    
    
    cout << endl;
    return 0;
}

