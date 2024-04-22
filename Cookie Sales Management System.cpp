#include <iostream>
#include <string>

using namespace std;

// Constants
const int MAX_TRANSACTIONS = 50;

// Global arrays to store sales data
int transactionNo[MAX_TRANSACTIONS];
string cookieType[MAX_TRANSACTIONS];
int quantitySold[MAX_TRANSACTIONS];#include <iostream>
#include <string>

using namespace std;

// Constants
const int MAX_TRANSACTIONS = 50;

// Global arrays to store sales data
int transactionNo[MAX_TRANSACTIONS];
string cookieType[MAX_TRANSACTIONS];
int quantitySold[MAX_TRANSACTIONS];
double pricePerUnit[MAX_TRANSACTIONS];
string customerName[MAX_TRANSACTIONS];
int numTransactions = 0; // To keep track of the number of transactions

// Function to record sales
void recordSales() {
    if (numTransactions >= MAX_TRANSACTIONS) {
        cout << "Maximum transactions reached. Cannot add more." << endl;
        return;
    }

    cout << "Enter transaction details:" << endl;
    cout << "Transaction Number: ";
    cin >> transactionNo[numTransactions];
    cout << "Cookie Type: ";
    cin.ignore(); // Clear buffer
    getline(cin, cookieType[numTransactions]);
    cout << "Quantity Sold: ";
    cin >> quantitySold[numTransactions];
    cout << "Price Per Unit: ";
    cin >> pricePerUnit[numTransactions];
    cout << "Customer Name: ";
    cin.ignore(); // Clear buffer
    getline(cin, customerName[numTransactions]);

    numTransactions++;
}

// Function to calculate total revenue
double calculateTotalRevenue() {
    double totalRevenue = 0.0;
    for (int i = 0; i < numTransactions; i++) {
        totalRevenue += quantitySold[i] * pricePerUnit[i];
    }
    return totalRevenue;
}

// Function to display sales records
void displaySalesRecords() {
    if (numTransactions == 0) {
        cout << "No sales records available." << endl;
        return;
    }
    cout << "Transaction No\tCookie Type\tQuantity Sold\tPrice Per Unit\tCustomer Name\tTotal Revenue" << endl;
    for (int i = 0; i < numTransactions; i++) {
        double totalRevenue = quantitySold[i] * pricePerUnit[i];
        cout << transactionNo[i] << "\t\t" << cookieType[i] << "\t\t" << quantitySold[i] << "\t\t" << pricePerUnit[i] << "\t\t" << customerName[i] << "\t\t" << totalRevenue << endl;
    }
}

// Function to find sales records by customer
void findSalesByCustomer(string searchCustomer) {
    bool found = false;
    cout << "Sales records for customer: " << searchCustomer << endl;
    cout << "Transaction No\tCookie Type\tQuantity Sold\tPrice Per Unit\tCustomer Name\tTotal Revenue" << endl;
    for (int i = 0; i < numTransactions; i++) {
        if (customerName[i] == searchCustomer) {
            double totalRevenue = quantitySold[i] * pricePerUnit[i];
            cout << transactionNo[i] << "\t\t" << cookieType[i] << "\t\t" << quantitySold[i] << "\t\t" << pricePerUnit[i] << "\t\t" << customerName[i] << "\t\t" << totalRevenue << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No sales records found for customer: " << searchCustomer << endl;
    }
}

// Function to update sales record
void updateSalesRecord(int transaction) {
    bool found = false;
    for (int i = 0; i < numTransactions; i++) {
        if (transactionNo[i] == transaction) {
            cout << "Enter new details for transaction " << transaction << ":" << endl;
            cout << "Cookie Type: ";
            cin.ignore(); // Clear buffer
            getline(cin, cookieType[i]);
            cout << "Quantity Sold: ";
            cin >> quantitySold[i];
            cout << "Price Per Unit: ";
            cin >> pricePerUnit[i];
            cout << "Customer Name: ";
            cin.ignore(); // Clear buffer
            getline(cin, customerName[i]);
            cout << "Sales record updated successfully." << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Transaction not found." << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\n*** Cookie Sales Management System ***" << endl;
        cout << "1. Record Sales" << endl;
        cout << "2. Calculate Total Revenue" << endl;
        cout << "3. Display Sales Records" << endl;
        cout << "4. Find Sales by Customer" << endl;
        cout << "5. Update Sales Record" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                recordSales();
                break;
            case 2:
                cout << "Total Revenue: $" << calculate

double pricePerUnit[MAX_TRANSACTIONS];
string customerName[MAX_TRANSACTIONS];
int numTransactions = 0; // To keep track of the number of transactions

// Function to record sales
void recordSales() {
    if (numTransactions >= MAX_TRANSACTIONS) {
        cout << "Maximum transactions reached. Cannot add more." << endl;
        return;
    }

    cout << "Enter transaction details:" << endl;
    cout << "Transaction Number: ";
    cin >> transactionNo[numTransactions];
    cout << "Cookie Type: ";
    cin.ignore(); // Clear buffer
    getline(cin, cookieType[numTransactions]);
    cout << "Quantity Sold: ";
    cin >> quantitySold[numTransactions];
    cout << "Price Per Unit: ";
    cin >> pricePerUnit[numTransactions];
    cout << "Customer Name: ";
    cin.ignore(); // Clear buffer
    getline(cin, customerName[numTransactions]);

    numTransactions++;
}

// Function to calculate total revenue
double calculateTotalRevenue() {
    double totalRevenue = 0.0;
    for (int i = 0; i < numTransactions; i++) {
        totalRevenue += quantitySold[i] * pricePerUnit[i];
    }
    return totalRevenue;
}

// Function to display sales records
void displaySalesRecords() {
    if (numTransactions == 0) {
        cout << "No sales records available." << endl;
        return;
    }
    cout << "Transaction No\tCookie Type\tQuantity Sold\tPrice Per Unit\tCustomer Name\tTotal Revenue" << endl;
    for (int i = 0; i < numTransactions; i++) {
        double totalRevenue = quantitySold[i] * pricePerUnit[i];
        cout << transactionNo[i] << "\t\t" << cookieType[i] << "\t\t" << quantitySold[i] << "\t\t" << pricePerUnit[i] << "\t\t" << customerName[i] << "\t\t" << totalRevenue << endl;
    }
}

// Function to find sales records by customer
void findSalesByCustomer(string searchCustomer) {
    bool found = false;
    cout << "Sales records for customer: " << searchCustomer << endl;
    cout << "Transaction No\tCookie Type\tQuantity Sold\tPrice Per Unit\tCustomer Name\tTotal Revenue" << endl;
    for (int i = 0; i < numTransactions; i++) {
        if (customerName[i] == searchCustomer) {
            double totalRevenue = quantitySold[i] * pricePerUnit[i];
            cout << transactionNo[i] << "\t\t" << cookieType[i] << "\t\t" << quantitySold[i] << "\t\t" << pricePerUnit[i] << "\t\t" << customerName[i] << "\t\t" << totalRevenue << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No sales records found for customer: " << searchCustomer << endl;
    }
}

// Function to update sales record
void updateSalesRecord(int transaction) {
    bool found = false;
    for (int i = 0; i < numTransactions; i++) {
        if (transactionNo[i] == transaction) {
            cout << "Enter new details for transaction " << transaction << ":" << endl;
            cout << "Cookie Type: ";
            cin.ignore(); // Clear buffer
            getline(cin, cookieType[i]);
            cout << "Quantity Sold: ";
            cin >> quantitySold[i];
            cout << "Price Per Unit: ";
            cin >> pricePerUnit[i];
            cout << "Customer Name: ";
            cin.ignore(); // Clear buffer
            getline(cin, customerName[i]);
            cout << "Sales record updated successfully." << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Transaction not found." << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\n*** Cookie Sales Management System ***" << endl;
        cout << "1. Record Sales" << endl;
        cout << "2. Calculate Total Revenue" << endl;
        cout << "3. Display Sales Records" << endl;
        cout << "4. Find Sales by Customer" << endl;
        cout << "5. Update Sales Record" << endl;
                cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                recordSales(numTransactions, transactionNo, cookieType, quantitySold, pricePerUnit, customerName);
                break;
            case 2:
                cout << "Total Revenue: $" << calculateTotalRevenue(numTransactions, quantitySold, pricePerUnit) << endl;
                break;
            case 3:
                displaySalesRecords(numTransactions, transactionNo, cookieType, quantitySold, pricePerUnit, customerName);
                break;
            case 4:
                string searchCustomer;
                cout << "Enter customer name: ";
                cin.ignore(); // Clear buffer
                getline(cin, searchCustomer);
                findSalesByCustomer(numTransactions, searchCustomer, transactionNo, cookieType, quantitySold, pricePerUnit, customerName);
                break;
            case 5:
                int transaction;
                cout << "Enter transaction number to update: ";
                cin >> transaction;
                updateSalesRecord(numTransactions, transaction, transactionNo, cookieType, quantitySold, pricePerUnit, customerName);
                break;
            case 6:
                cout << "Exiting program. Thank you!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

