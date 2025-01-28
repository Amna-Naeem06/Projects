#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>

using namespace std;

// Function to check if the entered password exists in the word list
bool isPasswordInWordlist(const string &password) {
    ifstream file("wordfile.txt");
    string word;

    // Read each word from the file
    while (getline(file, word)) {
        if (password == word) {
            file.close();
            return true; // Password found in the wordlist
        }
    }

    file.close();
    return false; // Password not found
}

// Function to evaluate password strength
void passwordStrength(const char ch[11]) {
    int count = 0; // Reset count for each password

    // Check for uppercase letters
    int upper = 0;
    for (int i = 0; ch[i] != '\0'; i++) {
        if (isupper(ch[i]))
            upper++;
    }
    if (upper >= 2) count++;

    // Check for lowercase letters
    int lower = 0;
    for (int i = 0; ch[i] != '\0'; i++) {
        if (islower(ch[i]))
            lower++;
    }
    if (lower >= 2) count++;

    // Check for digits
    int digits = 0;
    for (int i = 0; ch[i] != '\0'; i++) {
        if (isdigit(ch[i]))
            digits++;
    }
    if (digits >= 2) count++;

    // Check for special characters
    int special = 0;
    for (int i = 0; ch[i] != '\0'; i++) {
        if (ispunct(ch[i]))
            special++;
    }
    if (special >= 2) count++;

    // Evaluate password strength
    cout << " Password Strength Evaluation: " << endl;
    if (count == 4) {
        cout << " Password is very strong." << endl;
    } else if (count == 3) {
        cout << " Password is strong." << endl;
    } else if (count == 2) {
        cout << " Password is moderate." << endl;
    } else {
        cout << " Password is weak." << endl;
        cout << "Your password lacks special characters. Consider adding at least two special characters for better security." << endl;
    }
    cout << "----------------------------------------" << endl; // Separator line
}

int main() {
    cout << "Welcome to the Password Strength Analyzer! " << endl;
    cout << "------------------------------------------" << endl; // Separator line

    while (true) {
        string password;
        cout << " Enter your password: ";
        cin >> password;

        // Check if the password exists in the wordlist
        if (isPasswordInWordlist(password)) {
            cout << " Password found in the wordlist. Please choose a more secure password." << endl;
            continue; // Ask the user to enter a new password
        }

        // Check password length
        if (password.length() < 8) {
            cout << "Password is too short. It must be at least 8 characters long." << endl;
            continue; // Ask the user to enter a new password
        }

        // Check password strength
        passwordStrength(password.c_str());

        // Ask if the user wants to continue
        char choice;
        cout << " Do you want to check another password? (y/n): ";
        cin>>choice;
        

        if (choice !='y')
        {
        cout << " Thank you for using the Password Strength Analyzer. Goodbye!" << endl;
        exit(0);
        }
        }
    

    return 0;
}