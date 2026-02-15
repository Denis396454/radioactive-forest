#include <iostream>
#include <string>
#include <thread> 
#include <chrono>
#include <windows.h>
using namespace std;

void clear(int x, int y) { HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); COORD pos = { (SHORT)x, (SHORT)y }; SetConsoleCursorPosition(hOut, pos); }


void clsupanddown(int row, int width) {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD start = {0, (SHORT)row};
    DWORD written;
    FillConsoleOutputCharacter(hOut, ' ', width, start, &written);
    FillConsoleOutputAttribute(hOut, 0x07, width, start, &written);
}



void hidecursor() {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(hOut, &cursorInfo);
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hOut, &cursorInfo);
}



void notmouse() {
    HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hInput, &mode);
    mode &= ~ENABLE_QUICK_EDIT_MODE;
    mode &= ~ENABLE_MOUSE_INPUT;
    SetConsoleMode(hInput, mode);
}




void gamezone(string person, int personpos) {
    string game = " ";
    //for (int a = 0; a <= 50; a += 1){
    //    for (int i = 0; i <= 171; i += 1) {
    //        cout << game;
    //    }
    //}
    int personx = 20;
    int persony = 151;
    int width = 171;
    int height = 48;







    //int personpos = 100
    int zone = 4080; //4262; //2161;
    //string person = "(:";
    //string person2 = "):";
    //for (int a = 0; a <= personx; a += 1){
       // for (int i = 0; i <= persony; i += 1) {
        //    cout << game;
	
      //  }
    //}
    for (int a = 0; a <= personpos; a += 1) {
	cout << game;
    }
    cout << person;
    //for (int a = 0; a <= width - person.size() - personx; a += 1)
      //  for (int i = 0; i <= height - persony; i += 1) {
        //    cout << game;
        //}
    //}
    for (int a = 0; a <= zone - personpos; a += 1) {
	cout << game;
    }
//} 
}
int main() {
    string you;
    int pos = 100;
    notmouse();
    hidecursor();
    string smile = "(:";
    while (true) {
	clsupanddown(0, 172);
	clsupanddown(47, 172);
	//clear(0, 0);
	//clear(pos % 172, pos / 172); 
	//cout << " ";

	//system("cls");
        if (GetAsyncKeyState('W') & 0x8000) {
	   system("cls");
           pos = pos - 172; // 86;
	   gamezone(smile, pos);
        }
	if (GetAsyncKeyState(VK_SHIFT) & 0x8000) {
	   if (smile == "(:") {
	        system("cls");
                smile = "):"; // 86;
	        gamezone(smile, pos);
	   }
	   else if (smile == "):") {
	        system("cls");
                smile = "(:"; // 86;
	        gamezone(smile, pos);
	   }
	this_thread::sleep_for(std::chrono::milliseconds(100));
        }
	if (GetAsyncKeyState('S') & 0x8000) {
	   system("cls");
           pos = pos + 172; //86;
	   gamezone(smile, pos);
        }
        if (GetAsyncKeyState('D') & 0x8000) {
	   system("cls");
           pos = pos + 1;
	   gamezone(smile, pos);
        }
        if (GetAsyncKeyState('A') & 0x8000) {
	   system("cls");
           pos = pos - 1;
	   gamezone(smile, pos);
        }
	//pos = pos + 86;
	//if (pos >= 4080) { //86
          //  pos = 1;
        //}
	//if (pos <= 1) { //86
          //  pos = 1;
        //}
	//pos = (pos / 86) * 86 + (pos % 86);

        //this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    
    //cin >> you;
    return 0;
}