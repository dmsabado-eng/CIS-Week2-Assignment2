#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int age;
    double height, weight, bmi;
    int score;
    char grade;
    string category;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height (meters): ";
    cin >> height;

    cout << "Enter your weight (kg): ";
    cin >> weight;

    // BMI Calculation
    bmi = weight / (height * height);

    if (bmi < 18.5)
        category = "Underweight";
    else if (bmi < 25)
        category = "Normal weight";
    else if (bmi < 30)
        category = "Overweight";
    else
        category = "Obese";

    cout << "Enter your test score (0-100): ";
    cin >> score;

    // Grade Calculation
    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    cout << fixed << setprecision(2);

    cout << "\nHey " << name << ", you're " << age
         << " years old with a BMI of " << bmi
         << " (" << category << ") and you got a grade "
         << grade << "! Keep it up!" << endl;

    return 0;
}
