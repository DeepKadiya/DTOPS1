
#include <iostream>
using namespace std;

class Movie {
public:
    char title[100];
    int year;
    float rating;

    Movie(const char t[], int y, float r) {
        int i = 0;
        while (t[i] != '\0' && i < 99) {
            title[i] = t[i];
            i++;
        }
        title[i] = '\0';

        year = y;
        rating = r;
    }

    Movie(const Movie &m) {
        int i = 0;
        while (m.title[i] != '\0') {
            title[i] = m.title[i];
            i++;
        }
        title[i] = '\0';

        year = m.year;
        rating = m.rating;
    }

    void display() {
        cout << "Movie Title: " << title << endl;
        cout << "Year: " << year << endl;
        cout << "Rating: " << rating << "/10" << endl;
    }
};

int main() {
    Movie original("Inception", 2010, 8.8);

    Movie copied(original);

    cout << "Original Movie Details:\n";
    original.display();

    cout << "\nCopied Movie Details:\n";
    copied.display();

    return 0;
}

