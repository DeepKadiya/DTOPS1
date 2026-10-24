#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Content {
public:
    string title, platform, status;
    int views;

    void display() {
        cout << "Title: " << title << endl;
        cout << "Platform: " << platform << endl;
        cout << "Views: " << views << endl;
        cout << "Status: " << status << endl;
    }
};

void displayList() {
    ifstream file("content_list.txt");
    Content c;
    int count = 0;

    cout << "\n--- Content List ---\n";

    while (getline(file, c.title)) {
        getline(file, c.platform);
        file >> c.views;
        file.ignore();
        getline(file, c.status);

        count++;
        cout << count << ". " << c.title
             << " (" << c.platform << ")" << endl;
    }

    if (count == 0)
        cout << "No content found.\n";

    file.close();
}

int main() {
    int choice;

    do {
        cout << "\n===== Content Manager =====\n";
        cout << "1. Add Content\n";
        cout << "2. Display All Content\n";
        cout << "3. Update Content Status\n";
        cout << "4. Delete Content\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            Content c;

            cout << "Enter title: ";
            getline(cin, c.title);

            cout << "Enter platform: ";
            getline(cin, c.platform);

            cout << "Enter views: ";
            cin >> c.views;
            cin.ignore();

            cout << "Enter status: ";
            getline(cin, c.status);

            ofstream file("content_list.txt", ios::app);

            file << c.title << endl;
            file << c.platform << endl;
            file << c.views << endl;
            file << c.status << endl;

            file.close();

            cout << "Content added successfully!\n";
        }

        else if (choice == 2) {
            displayList();
        }

        else if (choice == 3) {
            ifstream file("content_list.txt");
            Content items[100];
            int count = 0, number;

            while (count < 100 && getline(file, items[count].title)) {
                if (!getline(file, items[count].platform)) break;
                if (!(file >> items[count].views)) break;
                file.ignore();
                if (!getline(file, items[count].status)) break;
                count++;
            }
            file.close();

            for (int i = 0; i < count; i++)
                cout << i + 1 << ". " << items[i].title
                     << " (" << items[i].platform << ") - "
                     << items[i].status << endl;

            cout << "Enter content number to update: ";
            cin >> number;
            cin.ignore();

            if (number >= 1 && number <= count) {
                cout << "Enter new status: ";
                getline(cin, items[number - 1].status);

                ofstream out("content_list.txt");

                for (int i = 0; i < count; i++) {
                    out << items[i].title << endl;
                    out << items[i].platform << endl;
                    out << items[i].views << endl;
                    out << items[i].status << endl;
                }

                out.close();
                cout << "Status updated successfully!\n";
            } else {
                cout << "Invalid content number.\n";
            }
        }

        else if (choice == 4) {
            ifstream file("content_list.txt");
            Content items[100];
            int count = 0, number;

            while (count < 100 && getline(file, items[count].title)) {
                if (!getline(file, items[count].platform)) break;
                if (!(file >> items[count].views)) break;
                file.ignore();
                if (!getline(file, items[count].status)) break;
                count++;
            }
            file.close();

            for (int i = 0; i < count; i++)
                cout << i + 1 << ". " << items[i].title
                     << " (" << items[i].platform << ")" << endl;

            cout << "Enter content number to delete: ";
            cin >> number;

            if (number >= 1 && number <= count) {
                ofstream out("content_list.txt");

                for (int i = 0; i < count; i++) {
                    if (i != number - 1) {
                        out << items[i].title << endl;
                        out << items[i].platform << endl;
                        out << items[i].views << endl;
                        out << items[i].status << endl;
                    }
                }

                out.close();
                cout << "Content deleted successfully!\n";
                displayList();
            } else {
                cout << "Invalid content number.\n";
            }
        }

        else if (choice == 5) {
            cout << "Exiting Content Manager.\n";
        }

        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
