
#include <iostream>
using namespace std;

class MusicPlayer {
public:
    virtual void play(const char song[]) {
        cout << "Playing: " << song << endl;
    }
};

class SpotifyPlayer : public MusicPlayer {
public:
    void play(const char song[]) override {
        cout << "Streaming on Spotify: " << song << endl;
    }
};

int main() {
    MusicPlayer* player = new SpotifyPlayer();

    player->play("Tum Hi Ho");

    delete player;
    return 0;
}
 //Explanation
 //MusicPlayer* player = new SpotifyPlayer(); creates a SpotifyPlayer object and stores its address in a base-class pointer.
 //The virtual keyword enables runtime polymorphism.
 //play() is overridden in SpotifyPlayer.
 //When player->play("Tum Hi Ho") is called, the derived-class method executes instead of the base-class method.
