#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

double calculateMean(vector<double> list) {
    double sum = 0.0;
    
    for (int i = 0; i < list.size(); i++) {
        sum += list[i];
    }
    return sum / (list.size() + 0.0);
}

double calculateMedian(vector<double> list) {
    sort(list.begin(), list.end());
    double median;
    
    if (list.size() % 2 == 1) {
        median = list[list.size() / 2];
    } else {
        median = (list[size / 2 - 1] + list[size / 2]) / 2.0;
    }
    
    return median;
}

double calculateRange(vector<double> list) {
    double min = list[0];
    double max = list[0];
    
    for (int i = 0; i < list.size(); i++) {
        if (list[i] > max) {
            max = list[i];
        } else if (list[i] < min) {
            min = list[i];
        }
    }
    return max - min;
}


int main()
{
    vector<double> list;
    double num;
    
    while (true) {
        cin >> num;
        if (num < 0) break;
        
        list.push_back(num);
    } 
    
    cout << "Mean: "  << calculateMean(list) << endl;
    cout << "Median: " << calculateMedian(list) << endl;
    cout << "Range: "  << calculateRange(list) << endl;
    
    return 0;
}