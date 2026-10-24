#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("my_fav_songs.txt");

    file << "Tum Hi Ho" << endl;
    file << "Kesariya" << endl;
    file << "Apna Bana Le" << endl;
    file << "Heeriye" << endl;
    file << "Chaleya" << endl;

    file.close();

    cout << "Favorite songs written to file successfully!" << endl;

    return 0;
}
