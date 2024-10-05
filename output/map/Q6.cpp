// Write a program that uses a std::map to store information about products (product name and price). Allow the user to update the price of a product if it already exists, or insert a new product if it doesn't.
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, double> productPrices;
    string productName;
    double productPrice;
    char choice;

    do {
        // Input product name
        cout << "Enter product name: ";
        cin >> productName;

        // Check if the product already exists in the map
        if (productPrices.find(productName) != productPrices.end()) {
            // Product exists, update its price
            cout << "Product already exists. Enter new price to update: ";
            cin >> productPrice;
            productPrices[productName] = productPrice;
            cout << "Price updated for product: " << productName << endl;
        } else {
            // Product does not exist, insert it into the map
            cout << "Enter price for the new product: ";
            cin >> productPrice;
            productPrices[productName] = productPrice;
            cout << "New product added: " << productName << " with price " << productPrice << endl;
        }

        // Ask the user if they want to add/update another product
        cout << "Do you want to add/update another product? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Displaying all products and their prices
    cout << "\nProduct list:\n";
    for (const auto& product : productPrices) {
        cout << product.first << " : $" << product.second << endl;
    }

    return 0;
}
