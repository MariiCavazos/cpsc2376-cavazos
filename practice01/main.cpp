#include <iostream>
#include <vector>

using namespace std;

void printVector(const vector<int>& vec) {
    if (vec.empty()) {
        cout << "The vector is empty!" << endl;
        return;
    }
    cout << "Vector contents: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

void doubleVector(vector<int>& vec) {
    for (int& num : vec) {
        num *= 2;
    }
    cout << "Vector has been doubled." << endl;
}

int calculateSum(const vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        sum += num;
    }
    return sum;
}

void printMultiples(const vector<int>& vec, int value) {
    cout << "Multiples of " << value << ": ";
    bool found = false;
    for (int num : vec) {
        if (num % value == 0) {
            cout << num << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "No multiples found." << endl;
    } else {
        cout << endl;
    }
}

int main() {
    vector<int> numbers;
    int choice;
    int num, value;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add an item to the vector" << endl;
        cout << "2. Print the vector" << endl;
        cout << "3. Double the vector" << endl;
        cout << "4. Find the sum of the vector" << endl;
        cout << "5. Print multiples of a user-defined value" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a number adding it to the vector: ";
                cin >> num;
                numbers.push_back(num);
                cout << num << " has been added to the vector." << endl;
                break;

            case 2:
                printVector(numbers);
                break;

            case 3:
                doubleVector(numbers);
                break;

            case 4:
                cout << "The sum of the vector is: " << calculateSum(numbers) << endl;
                break;

            case 5:
                cout << "Enter a value to find multiples of: ";
                cin >> value;
                printMultiples(numbers, value);
                break;

            case 6:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
