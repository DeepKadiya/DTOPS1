
#include <iostream>
using namespace std;

class Song {
private:
    char title[100];
    char artist[100];

public:
    void setTitle(const char t[]) {
        int i = 0;
        while (t[i] != '\0' && i < 99) {
            title[i] = t[i];
            i++;
        }
        title[i] = '\0';
    }

    void setArtist(const char a[]) {
        int i = 0;
        while (a[i] != '\0' && i < 99) {
            artist[i] = a[i];
            i++;
        }
        artist[i] = '\0';
    }

    const char* getTitle() {
        return title;
    }

    const char* getArtist() {
        return artist;
    }
};

int main() {
    Song s;

    s.setTitle("Perfect");
    s.setArtist("Ed Sheeran");

    cout << "Original Title: " << s.getTitle() << endl;
    cout << "Artist: " << s.getArtist() << endl;

    s.setTitle("Shape of You");

    cout << "\nUpdated Title: " << s.getTitle() << endl;
    cout << "Artist: " << s.getArtist() << endl;

    return 0;
}

