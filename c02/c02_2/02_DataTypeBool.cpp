#include <iostream>
using namespace std;

bool IsPositive(int i) {
    if (i > 0) {
        return true;
    }else{ return false; }
}

int main(void) {
    bool isPos;
    int num;
    cout << "Input number: ";
    cin >> num;
    
    isPos = IsPositive(num);
    if(isPos){
        cout << "Positive number" << endl;
    }else{
        cout << "Negative number" << endl;
    }

    return 0;
}