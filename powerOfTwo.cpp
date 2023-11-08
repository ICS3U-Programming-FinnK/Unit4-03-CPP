// Created by: Finn Kitor
// Created on : November 8th, 2023
// This program asks the user to enter a positive number and then uses a loop to calculate to the power of two and display the result.

#include <iostream>
#include <string>

using namespace std;
int main() {
    // user will input the number to the terminal
    string user_number_as_string;
    int user_number_as_int;
    cout << "Enter a positive number: ";
    cin >> user_number_as_string;
    cout << endl;
    // terminal will process if the number is valid or not valid from the user.
    try {
        user_number_as_int = stoi(user_number_as_string);
    } catch (const invalid_argument &e) {
        cout << user_number_as_string << " is not a number." << endl;
    } catch (const out_of_range &e) {
        cout << user_number_as_string << " is out of range for int." << endl;
    }
    // terminal replicates a for loop that calculates the power of two
    if (user_number_as_int > 0) {
        for (int loop_counter = 0; loop_counter <= user_number_as_int; loop_counter++) {
            int power_of_two = loop_counter * loop_counter;
            cout << loop_counter << "^2 = " << power_of_two << endl;
        }
    } else {
        // terminal will display an error if the number is not inputted correctly
        cout << user_number_as_int << " is not a positive number." << endl;
    }
    cout << "Thanks for playing with my program!" << endl;
    return 0;
}