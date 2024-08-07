#include <iostream>
using namespace std;

int main()
{
    int h;
    int w;
    int x;
    int y;

    while (true) {
        cout << "Enter Height: ";
        cin >> h;
        cout << "Enter Width: ";
        cin >> w;

        if (5 > w || 5 > h) {
            cout << "\nHeight or Width is more than 5\n" << endl;
            h, w = 0;
            continue;
        }

        if (200 < w || 200 < h) {
            cout << "\nHeight or Width is exceeded 200\n" << endl;
            h, w = 0;
            continue;
        }

        for (y = 0; y <= h; ++y) {
            for (x = 0; x <= w; ++x) {
                if (y == 0 || y == h) {
                    cout << "-";
                }
                else if (x == 0 || x == w) {
                    cout << "|";
                }
                else if (x != 0 && y != h && x != 0 && x != h) {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}
