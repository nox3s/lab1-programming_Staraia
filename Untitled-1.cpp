#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(CP_UTF8); 
    // Вывод приветствия
    cout << "Hello, World!" << endl;
    // Вывод имени студента
    string name = "Вероника Старая";
    cout << "Студент: " << name << endl;
    // Вывод даты 
    cout << "Дата: 2026-09-10" << endl;
    return 0;
}
