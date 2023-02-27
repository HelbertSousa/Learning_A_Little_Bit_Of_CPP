#include <iostream>

using namespace std;

int main(){
    //int modifier suffixes
    int value1 {10};
    int value2 {300};

    cout << "value1 : " << value1 << endl;
    cout << "value2 : " << value2 << endl;
    cout << "var1 occupies " << sizeof(value1) << " bytes" << endl;
    cout << "var2 occupies " << sizeof(value2) << " bytes" << endl;


    return 0;
}