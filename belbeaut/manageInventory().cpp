#include <iostream>
#include <string>
#include <map>

using namespace std;

void manageInventory();

int main() {
    // ...
    while (isLoggedIn) {
        // ...
        switch (choice) {
            // ...
            case 1:
                manageInventory();
                break;
            // ...
        }
    }
    // ...
}

void manageInventory() {
    map<string, int> inventory;
    inventory["Mind, Body & Spirit Candle"] = 95;
    inventory["Love Rain Candle"] = 95;

    while (true) {
        cout << "\n--- Manage Inventory ---" << endl;
        cout << "1. Add Product" << endl;
        cout << "2. Update Product" << endl;
        cout << "3. Remove Product" << endl;
        cout << "4. Display Inventory" << endl;
        cout << "5. Go Back" << endl;
        cout << "-------------------------" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: {
                string productName;
                int quantity;

                cout << "\nEnter the name of the product: ";
                cin.ignore();
                getline(cin, productName);

                cout << "Enter the quantity: ";
                cin >> quantity;

                inventory[productName] += quantity;
                cout << "Product added to the inventory." << endl;
                break;
            }
            case 2: {
                string productName;
                int quantity;

                cout << "\nEnter the name of the product: ";
                cin.ignore();
                getline(cin, productName);

                cout << "Enter the quantity: ";
                cin >> quantity;

                if (inventory.find(productName)!= inventory.end()) {
                    cout << "Enter the new quantity: ";
                    cin >> quantity;

                    inventory[productName] = quantity;
                    cout << "Product quantity updated." << endl;
                } else {
                    cout << "Product not found in the inventory." << endl;
                }
                break;
            }
            case 4: {
                cout << "\n--- Inventory ---" << endl;
                for (const auto& item : inventory) {
                    cout << item.first << ": " << item.second << endl;
            }
            cout << "-------------------------" << endl;
            break;
        }
        case 5:
            return;
        default:
            cout << "Invalid choice. Please try again." << endl;

    }
}
