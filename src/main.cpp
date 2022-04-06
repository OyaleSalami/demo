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
<<<<<<< HEAD
    cout<<"1. Display All Data" << endl;
    cout<<"2. Display Data From File" << endl;
    cout<<"3. Load Data" << endl;
    cout<<"4. Search Data" << endl;
    cout<<"5. Clear Loaded Data"<< endl;
    cout<<"7. Exit" << endl;
=======
    cout<<"1. Display Data" << endl;
    cout<<"2. Load Data" << endl;
    cout<<"3. Modify Data" << endl;
    cout<<"4. Search Date"<< endl;
    cout<<"5. Add Data" << endl;
    cout<<"6. Exit" << endl;
>>>>>>> 3b76570938d83a99c5dfc12cf9440484a3ff2bdc

    cin >> selection;
    cin.ignore();

    if (selection == 1)
    {
<<<<<<< HEAD
        DisplayAllData(dataList);
=======
        DisplayData("");
>>>>>>> 3b76570938d83a99c5dfc12cf9440484a3ff2bdc
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

<<<<<<< HEAD
    Menu();
=======
    DailyData dat("2022 11 09 89 32 0.0 0.0 7.8");
    dat.Summary();
>>>>>>> 3b76570938d83a99c5dfc12cf9440484a3ff2bdc

    system("Pause");
    exit();
    return 0;
}
