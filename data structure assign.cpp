#include <iostream>
#include <vector>
using namespace std;

struct Product {
    int id;
    string name;
    float price;
    float rating;
};

// Input products from user
void inputProducts(vector<Product>& products, int count) {
    for (int i = 0; i < count; i++) {
        Product p;
        cout << "\nEnter details for product " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> p.id;
        cout << "Name: ";
        cin >> ws;
        getline(cin, p.name);
        cout << "Price: ";
        cin >> p.price;
        cout << "Rating: ";
        cin >> p.rating;
        products.push_back(p);
    }
}

// Display products
void display(const vector<Product>& products) {
    cout << "\nID\tName\t\tPrice\tRating\n";
    for (const auto& p : products) {
        cout << p.id << "\t" << p.name << "\t\t" << p.price << "\t" << p.rating << "\n";
    }
}

// Quick Sort by Price
int partition(vector<Product>& arr, int low, int high) {
    float pivot = arr[high].price;
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j].price < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<Product>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}




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

