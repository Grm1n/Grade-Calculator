#include <iostream>
#include <limits>
using namespace std;

int main() {
    int numSubjects;
    float totalScore = 0.0, totalWeight = 0.0;

    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    // Validate the input
    while (cin.fail() || numSubjects <= 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> numSubjects;
    }

    for (int i = 1; i <= numSubjects; i++) {
        float score, weight;
        cout << "Enter the score for subject " << i << ": ";
        cin >> score;
        cout << "Enter the weight for subject " << i << ": ";
        cin >> weight;

        totalScore += score * weight;
        totalWeight += weight;
    }

    if (totalWeight > 0) {
        float overallGrade = totalScore / totalWeight;
        cout << "Overall Grade: " << overallGrade << endl;
    } else {
        cout << "Unable to calculate the overall grade. Total weight is zero." << endl;
    }

    return 0;
}
