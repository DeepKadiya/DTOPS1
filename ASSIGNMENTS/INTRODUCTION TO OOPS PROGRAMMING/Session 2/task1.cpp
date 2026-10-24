
#include <iostream>
using namespace std;

class Playlist {
public:
    char name[100];
    char createdOn[20];
    int isPublic;

    void display() {
        cout << "Playlist Name: " << name << endl;
        cout << "Created On: " << createdOn << endl;
        cout << "Is Public: ";

        if (isPublic == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
};

int main() {
    Playlist p = {"My Favorite Songs", "22-10-2026", 1};

    p.display();

    return 0;
}

