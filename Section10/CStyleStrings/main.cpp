#include <iostream>
#include <cstring>      // for c-style string functions
#include <cctype>       // for character-based functions

using namespace std;    

int main()
{
    char first_name[20];
    char last_name[20] {};
    char full_name[50] {};
    char temp[50] {};
    
    cout << first_name;     // Will likely display garbage!
    string s1;              //初始化字符串不赋值
    string s2 {"Frank"};    //初始化字符串，使用双引号赋值
    string s3 {s2};         //根据一个字符串进行赋值，得到 "Frank"结果。
    string s4 {"Frank",3};   //根据一个字符串，并其终止位置切片赋值，得到"Fra"
    string s5{s3,0,2};        //根据一个字符串，对起始位置切片，得到Fr
    string s6(3,'x');         //对某一个字符或字符串进行复制来赋值

//    cout << "Please enter your first name: ";
//    cin >> first_name;
//
//    cout << "Please enter your last name: ";
//    cin >> last_name;
//    cout << "-------------------------------" << endl; 
//    
//    cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
//    cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;
//
//    strcpy(full_name, first_name);          // copy first_name to full_name
//    strcat(full_name, " ");                       // concatenate full_name and a space
//    strcat(full_name, last_name);           // concatenate last_name to full_name
//    cout << "Your full name is " << full_name << endl;

//    cout << "-------------------------------" << endl;
//    cout << "Enter your full name: ";
//    cin >> full_name;
//
//    cout << "Your full name is " << full_name << endl;

//    cout << "Enter your full name: ";
//    cin.getline(full_name, 50);
//    cout << "Your full name is " << full_name << endl;

//    cout << "-------------------------------" << endl;
//    strcpy(temp, full_name);
//    if(strcmp(temp, full_name) == 0)
//        cout << temp << " and " << full_name << " are the same" << endl;
//    else
//        cout << temp << " and " << full_name << " are different" << endl;
//        
//    cout << "-------------------------------" << endl;
    

//    for(size_t i{ 0 }; i < strlen(full_name); ++i) {
//        if(isalpha(full_name[i]))
//            full_name[i] = toupper(full_name[i]);
//    }
//    cout << "Your full name is " << full_name << endl;


//    cout << "-------------------------------" << endl;
//    if(strcmp(temp, full_name) == 0)
//        cout << temp << " and " << full_name << " are the same" << endl;
//    else
//        cout << temp << " and " << full_name << " are different" << endl;
//
//    cout << "-------------------------------" << endl;
//    cout << "Result of comparing " << temp << " and " <<  full_name <<  ": " << strcmp(temp, full_name) << endl;
//    cout << "Result of comparing " << full_name << " and " <<  temp <<  ": " << strcmp(full_name, temp) << endl;

    cout  << endl;
    return 0;
}
