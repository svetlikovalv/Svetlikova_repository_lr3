#include <iostream>
#include <string>
#include <functional>
using namespace std;

//void enter_number(){}


//проверка ввода
bool user_input(string input){
    if (input.empty())
 return false;
 try{
    int num=stoi(input);
    if (num<0) return false;

 }
catch(...)
{return false;}
return true;
}
//ввод целых чисел
function<void()>  enter_number(int& var_link,string label){
    return [&var_link, label](){
        string raw_input;
        cout<< label <<" = ";
        getline(cin,raw_input);
        while(!user_input(raw_input)){
            cout<<label<<"=";
            getline(cin,raw_input);
        }
        var_link=stoi(raw_input);
    };
}
void input_a(){
    cout<<"введите вещественную часть комплексного числа"<<endl;
    int a;
    enter_number(a,"введите целую часть комспексного числа - а");
}

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
    int user_input;
    cin>>user_input;
    switch(user_input)
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



