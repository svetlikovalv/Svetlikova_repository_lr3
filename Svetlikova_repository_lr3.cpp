#include <iostream>
#include <string>
#include <limits>
#include <cmath>
using namespace std;

double a;
double b;

double enter_number(){
    double value;
    while (!(cin >> value)) {
        cout << "Неверный ввод. Введите вещественное число: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return value;
}


void input_a(){
    cout<<"введите целую часть комсплексного числа - а"<<endl;
    a=enter_number();
    cout<<"комплексная часть числа а= "<<a<<endl;
}

void input_b(){
    cout<<"введите целую часть комсплексного числа - b"<<endl;
    b=enter_number();
    cout<<"комплексная часть числа b= "<<b<<endl;
}
void modul() {
    cout<<"комплексная часть числа а= "<<a<<"  комплексная часть числа b= "<<b<<endl;
    cout<<"модуль комплексного числа: "<<pow((a*a+b*b),0.5)<<endl;
}
void argument() {
    cout<<"комплексная часть числа а= "<<a<<"  комплексная часть числа b= "<<b<<endl;
    if (a>0){
        cout<<"аргумент функции"<<atan2(b,a)<<endl;
    }
    if (a<0 && b>0){
        cout<<"аргумент функции"<<atan2(b,a)+acos(-1.0) <<endl;
    }if(a<0 && b<0){ 
        cout<<"аргумент функции"<<atan2(b,a)-acos(-1.0) <<endl;
    }if(a==0&&b>0){
        cout<<"аргумент функции"<<acos(-1.0)/2<<endl;
    }
    if(a==0&&b<0){
        cout<<"аргумент функции"<<- acos(-1.0)/2 <<endl;
    }if (a==0 && b==0){
        cout<<"аргумента не существует"<<endl;
    }

}
void menu(){
    setlocale(LC_ALL,"rus");
    
    cout<<"задача 1: вводит вещественную часть комплексного числа - A"<<endl;
    cout<<"задача 2: вводит мнимую часть комплексного числа - B"<<endl; 
    cout<<"задача 3: находит модуль комплексного числа"<<endl; 
    cout<<"задача 4: находит аргумент комплексного числа"<<endl;
    cout << "введите номер задачи: ";
    int user_num;
    cin>>user_num;
    switch(user_num)
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



