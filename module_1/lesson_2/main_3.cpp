//
// Created by BosnaZmaj on 4/20/2020.
//

#include <iostream>
using std::cout;
using std::endl;

int main() {
    int a_variable = 10;
    int &a_reference = a_variable; //must be initialized
    cout << a_variable << endl;
    cout << a_reference << endl;
}

