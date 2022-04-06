#include <iostream>
#include <sstream>
#include "Utility.h"
using namespace std;


static vector<DailyData> dataList;
static vector<DailyData> temp;

void Menu()
{
    system("CLS");
    int selection = 0;

    cout<< "Welcome To The Weather App!\n" << endl;
    cout<<"1. Display All Data" << endl;
    cout<<"2. Display Data From File" << endl;
    cout<<"3. Load Data" << endl;
    cout<<"4. Search Data" << endl;
    cout<<"5. Clear Loaded Data"<< endl;
    cout<<"7. Exit" << endl;

    cin >> selection;
    cin.ignore();

    if (selection == 1)
    {
        DisplayAllData(dataList);
    }
    else if (selection == 2)
    {
        DisplayDataFromFile();
    }
    else if (selection == 3)
    {
        LoadData(dataList);
    }
    else if (selection == 4)
    {
        SearchData(dataList, temp);
    }
    else if (selection == 5)
    {
        ClearData(dataList, temp);
    }
    else if (selection == 6)
    {
        AddData();
    }
    else if(selection == 7)
    {
        return;
    }

    system("pause");
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

    Menu();

    system("Pause");
    exit();
    return 0;
}



