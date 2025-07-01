#include <iostream>
using namespace std;
int main() {
    double weightInPounds, heightInInches;
    cout << "Welcome to the BMI Calculator!" << endl;
    cout << "Enter your weight in pounds: ";
    cin >> weightInPounds;
    cout << "Enter your height in inches: ";
    cin >> heightInInches;
    double bmi = (weightInPounds * 703) / (heightInInches * heightInInches);
    cout << "Your BMI is: " << bmi << endl;
    if (bmi < 18.5) {
        cout << "BMI Category: Underweight" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "BMI Category: Normal" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "BMI Category: Overweight" << endl;
    } else {
        cout << "BMI Category: Obese" << endl;
    }
    return 0;
}

