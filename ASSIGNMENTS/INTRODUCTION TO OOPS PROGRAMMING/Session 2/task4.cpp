
#include <iostream>
using namespace std;

class Playlist {
public:
    char name[100];
    char songs[10][100];
    int songCount;

    Playlist() {
        songCount = 0;
    }

    void addSong(const char songTitle[]) {
        if (songCount < 10) {
            int i = 0;

            while (songTitle[i] != '\0' && i < 99) {
                songs[songCount][i] = songTitle[i];
                i++;
            }

            songs[songCount][i] = '\0';
            songCount++;
        }
    }

    void showSongs() {
        cout << "Playlist: " << name << endl;
        cout << "Songs List:" << endl;

        for (int i = 0; i < songCount; i++) {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main() {
    Playlist p;
    
    int i = 0;
    char playlistName[] = "My Favorite Songs";

    while (playlistName[i] != '\0') {
        p.name[i] = playlistName[i];
        i++;
    }
    p.name[i] = '\0';

    p.addSong("Perfect");
    p.addSong("Tum Hi Ho");
    p.addSong("Shape of You");

    p.showSongs();

    return 0;
}

