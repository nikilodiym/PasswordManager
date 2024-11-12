#include "header_lib.h"
#include "user.h"

int main() {
    int choice;

    do {
        cout << "\nPassword Manager\n";
        cout << "1. Add User\n";
        cout << "2. Login\n";
        cout << "3. Add Password\n";
        cout << "4. View Passwords\n";
        cout << "5. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            username();
            break;
        case 2:
            if (role()) {
                cout << "Login successful.\n";
            }
            else {
                cout << "Login failed. Try again.\n";
            }
            break;
        case 3:
            if (user_role()) {
                add_password();
            }
            else {
                cout << "Please log in first.\n";
            }
            break;
        case 4:
            if (isLoggedIn()) {
                viewPasswords();
            }
            else {
                cout << "Please log in first.\n";
            }
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
