#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

bool validUsername(const string& username) {
    if (username.empty()) return false;

    for (char ch : username) {
        if (!isalnum(static_cast<unsigned char>(ch)) && ch != '_')
            return false;
    }

    return true;
}

bool validPassword(const string& password) {
    return password.length() >= 6;
}

bool userExists(const string& username) {
    ifstream file("users.txt");
    string storedUsername, storedPassword;

    while (file >> storedUsername >> storedPassword) {
        if (storedUsername == username)
            return true;
    }

    return false;
}

void registerUser() {
    string username, password;

    cout << "\n--- Registration ---\n";
    cout << "Enter username: ";
    cin >> username;

    if (!validUsername(username)) {
        cout << "Invalid username. Use only letters, numbers and underscore.\n";
        return;
    }

    if (userExists(username)) {
        cout << "Username already exists.\n";
        return;
    }

    cout << "Enter password: ";
    cin >> password;

    if (!validPassword(password)) {
        cout << "Password must contain at least 6 characters.\n";
        return;
    }

    ofstream file("users.txt", ios::app);
    file << username << ' ' << password << '\n';

    cout << "Registration successful.\n";
}

void loginUser() {
    string username, password;
    string storedUsername, storedPassword;

    cout << "\n--- Login ---\n";
    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    ifstream file("users.txt");

    while (file >> storedUsername >> storedPassword) {
        if (storedUsername == username && storedPassword == password) {
            cout << "Login successful. Welcome, " << username << "!\n";
            return;
        }
    }

    cout << "Invalid username or password.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Login and Registration System =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                loginUser();
                break;
            case 3:
                cout << "Program exited.\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 3);

    return 0;
}
