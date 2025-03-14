#include <iostream>
#include <string>

using namespace std;

void enter_number(){}
void input_a(){}
void input_b(){}
void modul() {}
void argument() {}

void menu(){
    setlocale(LC_ALL,"rus");
    
    cout<<"задача 1: вводит вещественную часть комплексного числа - A"<<endl;
    cout<<"задача 2: вводит мнимую часть комплексного числа - B"<<endl; 
    cout<<"задача 3: находит модуль комплексного числа"<<endl; 
    cout<<"задача 4: находит аргумент комплексного числа"<<endl;
    cout << "введите номер задачи: "<<endl;
    switch(enter_number())
    {
        case 1: 
            input_a();
            menu();
        case 2: 
            input_b();
            menu();
        case 3: 
            modul();
            menu();
        case 4: 
            argument();
            menu();
        
        default: 
            menu();
    }
    
}
int main(){
    
    menu();
    return 0;
}



