#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "please input your pyramid string"<<endl;
    string string_input;
    getline(cin,string_input);
    cout<<string_input<<endl;
   
    for(size_t i=0;i<string_input.size();i++){
        auto count_space {string_input.length()-i-1};
        
        string space (count_space,' ');
        cout<<space;
     

        for(size_t j {0};j<=i;j++)
            cout<<string_input[j];
        
        for(int k {static_cast<int>(i)-1};k>=0;k--)
             cout<<string_input[k];
        
        cout <<endl;
        cout << space<<endl;
        
    }
}