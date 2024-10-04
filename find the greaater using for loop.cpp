#include <vector>
#include <iostream>

using namespace std;

pair<int, int> greatest(const vector<int>& values) {
    int temp = 0;
    int count = 0;

    for (auto i : values) {
        if (i > temp) {
            temp = i;
            count = 1; 
        }
        else if (i == temp) {
            count++;  
        }
    }

    return { temp, count }; 
}

int main() {
    vector<int> values = { 99, 2, 5, 7, 8, 99, 6, 5, 1, 99, 99 };

    auto result = greatest(values);
    cout << "Greatest number is " << result.first << " and it appears " << result.second << " times." << endl;
}
