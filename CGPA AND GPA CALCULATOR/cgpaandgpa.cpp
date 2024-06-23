#include <iostream>
#include <cstdlib> // for exit()
#include <vector> // for vector usage

using namespace std;

// Function to calculate GPA
void calculateGPA(){
    int q;
    cout << "----------GPA CALCULATOR----------" << endl;
    cout << "Enter number of courses: ";
    cin >> q;

    vector<float> credit(q);
    vector<float> point(q);

    for (int i = 0; i < q; i++){
        cout << "Enter credit of course " << i + 1 << ": ";
        cin >> credit[i];
        cout << "Enter point of course " << i + 1 << ": ";
        cin >> point[i];
        cout << endl;
    }

    float sum = 0;
    float total;
    for (int j = 0; j < q; j++){
        total = credit[j] * point[j];
        sum += total;
    }

    float totalcredit = 0;
    for (int k = 0; k < q; k++){
        totalcredit += credit[k];
    }

    cout << "\nTotal Points: " << sum << ". Total Credits: " << totalcredit << ". Total GPA: " << sum / totalcredit << "." << endl;

    int menu;
    cout << "\n1. Calculate again\n2. Main Menu\n3. Exit\n\nEnter your choice: ";
    cin >> menu;
    switch (menu){
        case 1:
            calculateGPA();
            break;
        case 2:
            return; // Return to main menu
        case 3:
            exit(0);
        default:
            cout << "Invalid Input. Please try again." << endl;
            calculateGPA();
            break;
    }
}

// Function to calculate CGPA
void calculateCGPA(){
    int q;
    cout << "----------CGPA CALCULATOR----------" << endl;
    cout << "Enter number of semesters: ";
    cin >> q;

    vector<float> credit(q);
    vector<float> point(q);

    for (int i = 0; i < q; i++){
        cout << "Enter credit of semester " << i + 1 << ": ";
        cin >> credit[i];
        cout << "Enter point of semester " << i + 1 << ": ";
        cin >> point[i];
        cout << endl;
    }

    float sum = 0;
    float total;
    for (int j = 0; j < q; j++){
        total = credit[j] * point[j];
        sum += total;
    }

    float totalcredit = 0;
    for (int k = 0; k < q; k++){
        totalcredit += credit[k];
    }

    cout << "\nTotal Points: " << sum << ". Total Credits: " << totalcredit << ". Total CGPA: " << sum / totalcredit << "." << endl;

    int menu;
    cout << "\n1. Calculate again\n2. Main Menu\n3. Exit\n\nEnter your choice: ";
    cin >> menu;
    switch (menu){
        case 1:
            calculateCGPA();
            break;
        case 2:
            return; // Return to main menu
        case 3:
            exit(0);
        default:
            cout << "Invalid Input. Please try again." << endl;
            calculateCGPA();
            break;
    }
}

// Method to display calculation methods
void method(){
    cout << "--------Method of calculation of CGPA and GPA--------" << endl;
    cout << "GPA = Sum of (credit * point) / Total credit" << endl;
    cout << "CGPA = Sum of GPA / Total semesters" << endl;
    cout << "-----------------------------------------------------" << endl;

    int menu;
    cout << "\n1. Calculate GPA\n2. Calculate CGPA\n3. Main Menu\n4. Exit\n\nEnter your choice: ";
    cin >> menu;
    switch (menu){
        case 1:
            calculateGPA();
            break;
        case 2:
            calculateCGPA();
            break;
        case 3:
            return; // Return to main menu
        case 4:
            exit(0);
        default:
            cout << "Invalid Input. Please try again." << endl;
            method();
            break;
    }
}

// Main function to display menu and control flow
int main(){
    int input;
    while (true){
        cout << "-------------------------------------------------------" << endl;
        cout << "--------------------GPA & CGPA CALCULATOR----------------" << endl;
        cout << "---------------------MENU--------------" << endl;
        cout << " 1. Calculate GPA (Grade Point Average)" << endl;
        cout << " 2. Calculate CGPA (Cumulative Grade Point Average)" << endl;
        cout << " 3. Method of calculation of CGPA and GPA" << endl;
        cout << " 4. Exit" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> input;

        switch (input){
            case 1:
                calculateGPA();
                break;
            case 2:
                calculateCGPA();
                break;
            case 3:
                method();
                break;
            case 4:
                exit(0);
            default:
                cout << "Invalid Input. Please try again." << endl;
                break;
        }
    }
    return 0;
}