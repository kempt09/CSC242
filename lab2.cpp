
#include <ctime>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


int randoNum(){

    return rand() % 4 + 1;

}

int main() {

    // Variable Declarations
    int eastWest = 0;
    int northSouth = 0;
    string eastWestMessage;

    // Used to prevent rand() from return the same values every time
    srand(time(0));

    for (int i = 0; i < 100; i++){

        int n = randoNum();

        if (eastWest == 10 || eastWest == -10 || northSouth == 10 || northSouth == -10){

            // If you pass the boundaries of the 10 by 10 grid the simulation will end.
            cout << "You have reached the limit" << endl;
            break;

        } else {

            if (n == 1){
                eastWest++;
            } else if (n == 2){
                eastWest--;
            } else if (n == 3){
                northSouth++;
            } else if(n == 4){
                northSouth--;
            }

        }

    }

    cout << eastWest << "  " << northSouth << endl;

    return 0;

}
