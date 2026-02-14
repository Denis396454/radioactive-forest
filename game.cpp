#include <iostream>
#include <string>
#include <thread> 
#include <chrono>
using namespace std;
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
    while (true) {
	system("cls");
	gamezone("(:", pos);
	pos = pos + 1;
	if (pos == 4080) {
            pos = 1;
        }
        //this_thread::sleep_for(std::chrono::milliseconds(100));
    }
    //cin >> you;
    return 0;
}