#include <iostream>
#include <vector>

using namespace std;

// Function to track sales
void trackSales();

// Sale structure to hold sale information
struct Sale {
    string productName;
    int quantity;
    double price;
};

vector<Sale> sales;  // Vector to store sales data

void trackSales() {
    cout << "\n--- Track Sales ---" << endl;

    while (true) {
        cout << "1. Record Sale" << endl;
        cout << "2. Display Sales Report" << endl;
        cout << "3. Go Back" << endl;
        cout << "------------------" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Sale newSale;
                cout << "\nEnter the product name: ";
                cin.ignore();
                getline(cin, newSale.productName);
                cout << "Enter the quantity sold: ";
                cin >> newSale.quantity;
                cout << "Enter the price per unit: ";
                cin >> newSale.price;

                sales.push_back(newSale);
                cout << "Sale recorded." << endl;
                break;
            }
            case 2: {
                double totalRevenue = 0;
                int totalQuantity = 0;

                cout << "\n--- Sales Report ---" << endl;
                for (const auto& sale : sales) {
                    double saleAmount = sale.quantity * sale.price;
                    totalRevenue += saleAmount;
                    totalQuantity += sale.quantity;

                    cout << "Product: " << sale.productName << endl;
                    cout << "Quantity: " << sale.quantity << endl;
                    cout << "Price per unit: $" << sale.price << endl;
                    cout << "Sale amount: $" << saleAmount << endl;
                    cout << "------------------" << endl;
                }

                cout << "Total Sales: " << sales.size() << endl;
                cout << "Total Quantity Sold: " << totalQuantity << endl;
                cout << "Total Revenue: $" << totalRevenue << endl;
                cout << "------------------" << endl;
                break;
            }
            case 3:
                return;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}