#include <iostream>
#include <string>


using namespace std;

// Function to return conversion value

double convert(double a, double b){

    return a * b;

}

int main() {

    // English
    const string ounce = "oz";
    const string pounds = "lb";
    const string inches = "in";
    const string foot = "ft";
    const string miles = "mi";

    // Metric
    const string grams = "g";
    const string centimeters = "cm";
    const string kilometers = "km";

    // Conversion Values
    const double ounceToGram = 28.3495;
    const double poundToGram = 453.6;
    const double inchToCentimeter = 2.54;
    const double footToCentimeter = 30.5;
    const double mileToKilometer = 1.609;

    // Other Variables
    string englishType = "";
    string metricType = "";
    double value = 0.0;
    double a, b;

    // Input
    cout << "Select a value." << endl;
    cin >> value;
    cout << "Select english unit." << endl;
    cin >> englishType;
    cout << "Select metric unit to convert to." << endl;
    cin >> metricType;

    // Logic
    a = value;
    if ( englishType == ounce && metricType == grams ){
        b = ounceToGram;
    } else if (englishType == pounds && metricType == grams ){
        b = poundToGram;
    } else if (englishType == inches && metricType == centimeters){
        b = inchToCentimeter;
    } else if (englishType == foot && metricType == centimeters){
        b = footToCentimeter;
    } else if (englishType == miles && metricType == kilometers){
        b = mileToKilometer;
    } else {
        cout << "Invalid Conversion ";
        return main();
    }

    // Output

    cout << convert(a,b) << " " + metricType;
    return 0;

}
