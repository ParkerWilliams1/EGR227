#include <iostream>

using namespace std;

int calculateFactorial(int currentNum) {
    int result = 1;
    
    while (currentNum > 1) {
        result *= currentNum;
        currentNum--;
    }
    return result;
}

int main()
{
    int num;
    int currentNum;
    
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> currentNum;
        cout << calculateFactorial(currentNum) << " ";        
    }

    return 0;
}