#include <iostream>

using namespace std;

int balance = 1000;

// @param Takes in pin number and validates

bool validatePin(int num){

    int matching = 1234;

    if (num == 1234){

        return true;

    } else {

        cout << "Invalid PIN" << endl;

        return false;

    }

}

// Displays option menu for the main() function

void showMenu(){

    cout << "Please Choose an Option" << endl;
    cout << "1 - Balance" << endl;
    cout << "2 - Deposit" << endl;
    cout << "3 - Withdraw" << endl;
    cout << "4 - Exit" << endl;

}

// Prints the balance to the console, and notifies customer of a low balance

int showBalance(){

    if (balance < 100){
        cout << "You Have a Low Balance of: " << balance << endl;
    } else {
        cout << "Balance: " << balance << endl;
    }
    return 0;

}

// Adds more funds to the balance and validates input is greater than zero

int makeDeposit(){

    int deposit;

    cout << "Enter Amount" << endl;
    cin >> deposit;

    if (deposit <= 0){
        cout << "Invalid Amount" << endl;
        return makeDeposit();
    } else {
        cout << "Balance: " << balance + deposit << endl;
        balance = balance + deposit;
        return 0;
    }

}

// Handles option to withdraw funds and updates the balance.
// Validates user input and notifies of additional fees.

int withdrawMoney(){


    int withdraw;

    cout << "Enter Amount" << endl;
    cin >> withdraw;

    if (withdraw <= 0){
        cout << "Invalid Amount" << endl;
        return withdrawMoney();
    } else if (withdraw > balance) {
        cout << "Insufficient Funds" << endl;
        return withdrawMoney();
    } else if (balance <= 100){
        cout << "This Transaction Will Incur a $25 Fee" << endl;
        balance = balance - withdraw - 25;
        return 0;
    } else {
        cout << "Balance: " << balance - withdraw << endl;
        balance = balance - withdraw;
        return 0;
    }

}

// ATM logic

int main() {


    int pin;
    int option;

    cout << "Please Enter Your PIN" << endl;
    cin >> pin;

    if(!validatePin(pin)){
        return main();
    };

    showMenu();
    cin >> option;

    if (option == 1){
        showBalance();
        return main();
    } else if (option == 2){
        makeDeposit();
        return main();
    } else if (option == 3){
        withdrawMoney();
        return main();
    } else if (option == 4){
        cout << "Have a Nice Day" << endl;
        return 0;
    } else if (option >= 5 || option <= 0){
        cout << "invalid Option, Please Select Again" << endl;
        return main();
    }

    return 0;

}

