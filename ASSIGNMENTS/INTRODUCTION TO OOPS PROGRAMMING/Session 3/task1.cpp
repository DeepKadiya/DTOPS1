
#include <iostream>
using namespace std;

class Playlist {
public:
    char name[100];

    Playlist() {
        char defaultName[] = "My Favourites";
        int i = 0;

        while (defaultName[i] != '\0') {
            name[i] = defaultName[i];
            i++;
        }
        name[i] = '\0';

        cout << "Welcome to your playlist!" << endl;
    }

    void display() {
        cout << "Playlist Name: " << name << endl;
    }
};

int main() {
    Playlist p;
    p.display();

    return 0;
}

