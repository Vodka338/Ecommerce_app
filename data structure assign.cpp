#include <iostream>
#include <vector>
using namespace std;

struct Product {
    int id;
    string name;
    float price;
    float rating;
};



int main() {
    vector<Product> products;
    int count;

    cout << "Enter number of products: ";
    cin >> count;

    inputProducts(products, count);

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Sort by Price (Quick Sort)\n";
        cout << "2. Sort by Rating (Merge Sort)\n";
        cout << "3. Sort by Name (Bubble Sort)\n";
        cout << "4. Sort by ID (Insertion Sort)\n";
        cout << "5. Display Products\n";
        cout << "6. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        vector<Product> temp = products; // preserve original

        switch (choice) {
            case 1:
                quickSort(temp, 0, temp.size() - 1);
                cout << "\nSorted by Price:\n";
                display(temp);
                break;
            case 2:
                mergeSort(temp, 0, temp.size() - 1);
                cout << "\nSorted by Rating:\n";
                display(temp);
                break;
            case 3:
                bubbleSort(temp);
                cout << "\nSorted by Name:\n";
                display(temp);
                break;
            case 4:
                insertionSort(temp);
                cout << "\nSorted by ID:\n";
                display(temp);
                break;
            case 5:
                cout << "\nOriginal Product List:\n";
                display(products);
                break;
            case 6:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}

