
#include <iostream>
#include <fstream>
using namespace std;

class Playlist {
public:
    char name[100];

    Playlist(const char playlistName[]) {
        int i = 0;

        while (playlistName[i] != '\0' && i < 99) {
            name[i] = playlistName[i];
            i++;
        }
        name[i] = '\0';
    }

    ~Playlist() {
        ofstream file("autosave.txt");

        if (file.is_open()) {
            file << name;
            file.close();
            cout << "Playlist auto-saved successfully!" << endl;
        }
    }

    void display() {
        cout << "Playlist Name: " << name << endl;
    }
};

int main() {
    Playlist p("My Favourites");

    p.display();

    return 0;
}

