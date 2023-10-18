#include <iostream>
#include <string>
using namespace std;

#include "bracket.h"

int main() 
{
    string input;
    cin >> input;
    
    cout << ((isValid(input)) ? "true" : "false");
}