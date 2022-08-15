#include <iostream>
using namespace std;

int main() {

    //BMI Calculator
    //weight(kg) / height * height(m)
    //Underweight < 18.5
    //Normal weight 185.-24.9
    //Overweight > 25 

    float weight, height, bmi;

    cout << "Weight(kg), Height(m)";

    cin >> weight >> height;

    bmi = weight / (height * height);

    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } 
    else if (bmi > 25) {
        cout << "Overweight" << endl;
    }
    else {
        cout << "Normal Weight" << endl;
    }

    
    cout << "Your bmi is " << bmi << endl;

    return 0;
}