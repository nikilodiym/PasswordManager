#include "header_lib.h"
#include "user.h"
#include "password_manager.h"

using namespace password_manager_ns;

int main() {
    password_manager manager;
    user* current_user = nullptr;
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
        case 1: {
            string username, password, role_input;
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            cout << "Enter role (guest, regular_user, admin): ";
            cin >> role_input;

            user_role role = user_role::guest;
            if (role_input == "regular_user") role = user_role::regular_user;
            else if (role_input == "admin") role = user_role::admin;

            current_user = new user(username, role, password);
            cout << "User added successfully.\n";
            break;
        }
        case 2: {
            string username, password;
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;

            if (current_user && current_user->get_username() == username &&
                current_user->authenticate(password)) {
                cout << "Login successful.\n";
            }
            else {
                cout << "Login failed. Try again.\n";
            }
            break;
        }
        case 3: {
            if (current_user) {
                string category, service, service_username, service_password;
                cout << "Enter category: ";
                cin >> category;
                cout << "Enter service: ";
                cin >> service;
                cout << "Enter username: ";
                cin >> service_username;
                cout << "Enter password: ";
                cin >> service_password;

                if (manager.add_password(category, service, service_username, service_password)) {
                    cout << "Password added successfully.\n";
                }
                else {
                    cout << "Failed to add password.\n";
                }
            }
            else {
                cout << "Please log in first.\n";
            }
            break;
        }
        case 4: {
            if (current_user) {
                string service;
                cout << "Enter service name: ";
                cin >> service;

                string retrieved_password = manager.get_password(service, *current_user);
                if (!retrieved_password.empty()) {
                    cout << "Password for " << service << ": " << retrieved_password << "\n";
                }
                else {
                    cout << "Service not found.\n";
                }
            }
            else {
                cout << "Please log in first.\n";
            }
            break;
        }
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    delete current_user;
    return 0;
}
