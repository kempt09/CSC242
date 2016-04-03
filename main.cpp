#include <iostream>

using namespace std;

int main() {

    double in_num = 0.0;
    int count = 0;

    while (in_num >= 0) {
        cout << "Please enter the next input number (< 0 = no more): ";
        cin >> in_num;
        count = count + 1;
    };

    cout << count - 1 << endl;

    return 0;

}