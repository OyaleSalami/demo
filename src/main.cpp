#include <iostream>
#include <sstream>
#include "Utility.h"
using namespace std;

void Menu()
{
    system("CLS");
    int selection = 0;

    cout<< "Welcome To The Weather App!\n" << endl;
    cout<<"1. Display Data" << endl;
    cout<<"2. Load Data" << endl;
    cout<<"3. Modify Data" << endl;
    cout<<"4. Search Date"<< endl;
    cout<<"5. Add Data" << endl;
    cout<<"6. Exit" << endl;

    cin >> selection;
    cin.ignore();

    if (selection == 1)
    {
        DisplayData("");
    }
    if (selection == 2)
    {
        LoadData();
    }
    if (selection == 3)
    {
        ModifyData();
    }
    if (selection == 4)
    {
        SearchData();
    }
    if (selection == 5)
    {
        AddData();
    }
    if(selection == 6)
    {
        return;
    }
    Menu();
}

void exit()
{
    ofstream data;
    data.open("data", ios::out);
    data << "";
    data.close();
}

int main()
{
    cout << "Welcome To The Weather App!" << endl;

    DailyData dat("2022 11 09 89 32 0.0 0.0 7.8");
    dat.Summary();

    system("Pause");
    exit();
    return 0;
}
