#include <iostream>
#include <string>
#include <thread> 
#include <chrono>
using namespace std;

void gamezone(string person) {
    int width = 171;
    int height = 50;
    int personx = 10; // строка
    int persony = 20; // колонка

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (y == personx && x == persony) {
                cout << person;
                x += person.size() - 1; // чтобы не перезаписать символами #
            } else {
                cout << "#";
            }
        }
        cout << endl;
    }
}

int main() {
    while (true) {
        gamezone("(:");
        this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    return 0;
}
