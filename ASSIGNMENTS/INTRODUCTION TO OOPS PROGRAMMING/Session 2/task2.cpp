
#include <iostream>
using namespace std;

class Playlist {
public:
    char name[100];
    char createdOn[20];
    int isPublic;

    void togglePublic() {
        if (isPublic == 1)
            isPublic = 0;
        else
            isPublic = 1;
    }

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
    Playlist p = {"My Songs", "22-10-2026", 1};

    cout << "Original Playlist:\n";
    p.display();

    p.togglePublic();
    cout << "\nAfter First Toggle:\n";
    p.display();

    p.togglePublic();
    cout << "\nAfter Second Toggle:\n";
    p.display();

    return 0;
}

