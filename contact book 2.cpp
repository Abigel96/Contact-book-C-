
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Contact {
    string firstName;
    string lastName;
    string phoneNumber;
};

void addContact(Contact contacts[], int& numContacts) {
    if (numContacts >= 100) {
        cout << "Cannot add more contacts. Contact list is full." << endl;
        return;
    }

    Contact newContact;
    cout << "Enter first name: ";
    cin >> newContact.firstName;
    cout << "Enter last name: ";
    cin >> newContact.lastName;
    cout << "Enter phone number: ";
    cin >> newContact.phoneNumber;

    contacts[numContacts] = newContact;
    numContacts++;

    cout << "Contact added successfully." << endl;
}

void removeContact(Contact contacts[], int& numContacts) {
    if (numContacts == 0) {
        cout << "Cannot remove contact. Contact list is empty." << endl;
        return;
    }

    string firstName, lastName;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;

    bool found = false;
    for (int i = 0; i < numContacts; i++) {
        if (contacts[i].firstName == firstName && contacts[i].lastName == lastName) {
            found = true;
            for (int j = i; j < numContacts - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            numContacts--;
            cout << "Contact removed successfully." << endl;
            break;
        }
    }

    if (!found) {
        cout << "Contact not found." << endl;
    }
}

void editContact(Contact contacts[], int numContacts) {
    if (numContacts == 0) {
        cout << "Cannot edit contact. Contact list is empty." << endl;
        return;
    }

    string firstName, lastName;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;

    bool found = false;
    for (int i = 0; i < numContacts; i++) {
        if (contacts[i].firstName == firstName && contacts[i].lastName == lastName) {
            found = true;
            cout << "Enter new phone number: ";
            cin >> contacts[i].phoneNumber;
            cout << "Contact edited successfully." << endl;
            break;
        }
    }

    if (!found) {
        cout << "Contact not found." << endl;
    }
}

void searchContact(Contact contacts[], int numContacts) {
    if (numContacts == 0) {
        cout << "Cannot search contact. Contact list is empty." << endl;
        return;
    }

    string firstName, lastName;
    cout << "Enter first name: ";
    cin >> firstName;
    cout << "Enter last name: ";
    cin >> lastName;

    bool found = false;
    for (int i = 0; i < numContacts; i++) {
        if (contacts[i].firstName == firstName && contacts[i].lastName == lastName) {
            found = true;
            cout << "Phone number: " << contacts[i].phoneNumber << endl;
            break;
        }
    }

    if (!found) {
        cout << "Contact not found." << endl;
    }
}

int main() {
    Contact contacts[100];
    int numContacts = 0;

    while (true) {
        cout << "Select an option:" << endl;
        cout << "1. Add contact" << endl;
        cout << "2. Remove contact" << endl;
        cout << "3. Edit contact" << endl;
        cout << "4. Search contact" << endl;
        cout << "5. Exit" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                addContact(contacts, numContacts);
                break;
            case 2:
                removeContact(contacts, numContacts);
                break;
            case 3:
                editContact(contacts, numContacts);
                break;
            case 4:
                searchContact(contacts, numContacts);
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    }
}


