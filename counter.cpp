#include <iostream>

using namespace std;

int main() {
    int count = 0;
    char choice;

    cout << "Counter Program\n\n";

    do {
        cout << "Current Count: " << count << endl;
        cout << "Choose an option:\n";
        cout << "1. Add (+1)\n";
        cout << "2. Subtract (-1)\n";
        cout << "3. Stop\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case '1':
            count++;
            break;
        case '2':
            count--;
            break;
        case '3':
            cout << "Final Count: " << count << endl;
            return 0;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (true);

    return 0;
}
