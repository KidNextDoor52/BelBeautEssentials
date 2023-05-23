#include <iostream>
#include <string>

using namespace std;

// Function to handle user login
bool userLogin();

bool userLogin() {
    string username, password;
    cout << "\nEnter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    // Hardcoded valid username and password for demonstration purposes
    string validUsername = "user";
    string validPassword = "user123";

    if (username == validUsername && password == validPassword) {
        cout << "Login successful!" << endl;
        return true;
    } else {
        cout << "Invalid username or password. Login failed." << endl;
        return false;
    }
}