#include <iostream>

using namespace std;

int main(){
    // key word that is going to let the 
    // compiler deduce the type of the variable
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};

    //int modifier suffixes
    auto var6 { 123u}; // unsigned int
    auto var7 { 123ul}; // unsigned long int
    auto var8 { 123ull}; // unsigned long long int

    cout << "var1 occupies " << sizeof(var1) << " bytes" << endl;
    cout << "var2 occupies " << sizeof(var2) << " bytes" << endl;
    cout << "var3 occupies " << sizeof(var3) << " bytes" << endl;
    cout << "var4 occupies " << sizeof(var4) << " bytes" << endl;
    cout << "var5 occupies " << sizeof(var5) << " bytes" << endl;
    cout << "var6 occupies " << sizeof(var6) << " bytes" << endl;
    cout << "var7 occupies " << sizeof(var7) << " bytes" << endl;
    cout << "var8 occupies " << sizeof(var8) << " bytes" << endl;

    return 0;
}