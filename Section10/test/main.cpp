#include <iostream>

using namespace std;

int main(){
    string world {"hello world!"};
    string new_world;
    for(auto a:world){
        new_world=new_world+a<<2;
    }
    cout << new_world;
    
}