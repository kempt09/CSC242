#include <iostream>

using namespace std;

int main() {

    // Variable Declarations
    double total = 0.0;
    double received = 0.0;
    double balance;
    double dollars = 0.0;
    double quarter = 0.0;
    double dime = 0.0;
    double nickel = 0.0;
    double pennies = 0.0;

    // Contant Variables
    const double DOLLARS = 1.0;
    const double QUARTERS = 0.25;
    const double DIMES = 0.10;
    const double NICKELS = 0.05;
    const double PENNIES = 0.01;

    // Input
    cout << "What is the total: ";
    cin >> total;
    cout << "Amount received: ";
    cin >> received;


    //Computations
    balance = received - total;

    if (balance >= 0){

        while (balance >= DOLLARS){
            balance = balance - DOLLARS;
            dollars++;
        }

        while (balance >= QUARTERS){
            balance = balance - QUARTERS;
            quarter++;

        }

        while (balance >= DIMES){
            balance = balance - DIMES;
            dime++;

        }

        while (balance >= NICKELS){
            balance = balance - NICKELS;
            nickel++;

        }

        while (balance >= PENNIES){
            balance = balance - PENNIES;
            pennies++;
        }

    } else {
        // Calls main() function to begin new calculation
        cout << "Please, try again." << endl;
        cout << "Amount received was less than total." << endl;
        return main();
    }

    // Output
    cout << dollars << " dollars" << endl;
    cout << quarter << " quarters" << endl;
    cout << dime << " dimes" << endl;
    cout << nickel << " nickels" << endl;
    cout << pennies << " pennies" << endl;

    return 0;

}
