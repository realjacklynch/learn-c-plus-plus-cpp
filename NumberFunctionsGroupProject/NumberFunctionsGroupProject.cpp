#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void removeNumber(vector<int>& arr, int index) {
    if (index < 1 || index > arr.size()) {
        cout << "Sorry, couldn't remove. Invalid index!\n";
        return;
    }
    arr.erase(arr.begin() + index - 1);
}

void sortArray(vector<int>& arr) {
    sort(arr.begin(), arr.end());
}

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Here are some numbers:\n";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << i + 1 << ". " << numbers[i] << endl;
    }

    int removeIndex;
    cout << "Enter the number's position you want to remove: ";
    cin >> removeIndex;
    removeNumber(numbers, removeIndex);

    cout << "After removing, the numbers are:\n";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << i + 1 << ". " << numbers[i] << endl;
    }

    int arr[] = {50, 20, 30, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Now sorting some other numbers...\n";
    sortArray(numbers);

    cout << "After sorting, the numbers are:\n";
    for (int i = 0; i < numbers.size(); ++i) {
        cout << i + 1 << ". " << numbers[i] << endl;
    }

    vector<int> moreNumbers = {50, 20, 30, 10, 40};
    char choice;
    do {
        cout << "Menu:\n";
        cout << "1. Remove a number\n";
        cout << "2. Sort the numbers\n";
        cout << "3. Quit\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case '1': {
                int index;
                cout << "Enter the position of the number you want to remove: ";
                cin >> index;
                removeNumber(moreNumbers, index);
                cout << "After removal, the numbers are: ";
                for (int i = 0; i < moreNumbers.size(); ++i) {
                    cout << i + 1 << ". " << moreNumbers[i] << endl;
                }
                break;
            }
            case '2': {
                sortArray(moreNumbers);
                cout << "After sorting, the numbers are: ";
                for (int i = 0; i < moreNumbers.size(); ++i) {
                    cout << i + 1 << ". " << moreNumbers[i] << endl;
                }
                break;
            }
            case '3':
                cout << "Quitting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != '3');

    return 0;
}

