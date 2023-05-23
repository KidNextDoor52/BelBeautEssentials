#include <iostream>
#include <string>
#include <map>

using namespace std;

// Function to display the main menu
void displayMainMenu();

// Function to display the admin menu
void displayAdminMenu();

// Function to display the user menu
void displayUserMenu();

// Function to handle admin login
bool adminLogin();

// Function to handle user login
bool userLogin();

// Function to manage the inventory
void manageInventory();

// Function to track sales
void trackSales();

int main() {
    string adminName = "Saran";
    string adminPassword = "admin123";

    bool isLoggedIn = false;
    bool isAdmin = false;

    string username;
    string password;

    cout << "Welcome to Bel Beaute Essentials Application!" << endl;
    
    while (!isLoggedIn) {
        displayMainMenu();
        
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                isAdmin = adminLogin();
                isLoggedIn = true;
                break;
            
            }
            case 2: {
                isLoggedIn = userLogin();
                break;
            }
            default:
                cout<< "Invalid choice. Please try again." << endl;
            }
    }

    if (isAdmin) {
        cout << "Welcome, " <<adminName << " (Admin)!" << endl;

        while (isLoggedIn) {
            displayAdminMenu();

            int choice;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: 
                    manageInventory();
                    break;
                case 2: 
                    trackSales();
                    break;
                case 3:
                    isLoggedIn = false;
                    break;
                default:
                    cout<< "Invalid choice. Please try again." << endl;
            }   
        }
    } else {
        cout << "Welcome, User!" << endl;

        while (isLoggedIn) {
            displayUserMenu();

            int choice;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: 
                    manageInventory();
                    break;
                case 2: 
                    trackSales();
                    break;
                case 3:
                    isLoggedIn = false;
                    break;
                default:
                    cout<< "Invalid choice. Please try again." << endl;
            }   
        }
    }

    cout << " Thank you for using the Bel BeauteEssentials App" << endl;
    return 0;
}
