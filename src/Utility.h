<<<<<<< HEAD
#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

class DailyData
{
public:
    int year;
    int month;
    int day;
    float maxTemp;
    float minTemp;
    float meltedRain;
    float snowPellets;
    float snowPelletsOnGround;

    DailyData(string line)
    {
       stringstream ss(line);
       string s_year, s_month, s_day, s_maxTemp, s_minTemp, s_meltedRain, s_snowPellets, s_snowPelletsOnGround;

       try
       {
           getline(ss, s_year, ' ');
           getline(ss, s_month, ' ');
           getline(ss, s_day, ' ');
           getline(ss, s_maxTemp, ' ');
           getline(ss, s_minTemp, ' ');
           getline(ss, s_meltedRain, ' ');
           getline(ss, s_snowPellets, ' ');
           getline(ss, s_snowPelletsOnGround, ' ');

           year = stoi(s_year);
           month = stoi(s_month);
           day = stoi(s_day);
           maxTemp = stof(s_maxTemp);
           minTemp = stof(s_minTemp);
           meltedRain = stof(s_meltedRain);
           snowPellets = stof(s_snowPellets);
           snowPelletsOnGround = stof(s_snowPelletsOnGround);
       }
       catch(...)
       {
            cout << "Error: File is damaged!" << endl;
       }
    }

    void Summary()
    {
      cout <<"Weather Summary for " <<day <<"/"<< month <<"/" << year <<endl
           <<"Max Temperature: "     << maxTemp <<endl
           <<"Min Temperature: "     << minTemp <<endl
           <<"Rain/Melted Snow(In): "<< meltedRain <<endl
           <<"Snow/Ice Pellets/Hail(In): " << snowPellets <<endl
           <<"Snow/Ice Pellets/Hail On Ground(In): " <<snowPelletsOnGround<<endl;
    }

    void print()
    {
        cout << day <<"/"<< month <<"/" << year << " "
             << maxTemp << " " << minTemp << " " << meltedRain
             << " " << snowPellets << " " << snowPelletsOnGround << endl;
    }
};

static void ClearData(vector<DailyData>& dataList, vector<DailyData>& temp)
{
    dataList.clear();
    temp.clear();
}

static void DisplayAllData(vector<DailyData>& dataList)
{
    if (dataList.size() == 0)
    {
        cout << "Load Some Data First!!" << endl;
        return;
    }
    for(int i = 0; i < dataList.size(); i++)
    {
        dataList[i].print();
    }
    system("pause");
}

static void DisplayDataFromFile()
{
    string path;
    cout << "Enter the path to the file: ";
    getline(cin, path);
    if(path == "")
    {
        cout << "No path entered!" << endl;
        return;
    }

    ifstream data;
    data.open(path.c_str(), ios::in);

    string currLine;
    cout << "Displaying Data from " << path <<endl;
    int line = 0;
    while(getline(data, currLine))
    {
        cout << setw(3) << line <<": "<<currLine << endl;
        line++;
    }
}

static void LoadData(vector<DailyData>& dataList)
{
    string path;
    cout << "Enter The Path To The File: ";
    getline(cin, path);

    ifstream data;
    data.open(path.c_str(), ios::in);
    cout << "\nReading Data From " << path <<endl;

    string currLine;
    while(getline(data, currLine))
    {
        dataList.push_back(DailyData(currLine));
    }

    cout << "Done Loading Data From " << path << endl;
    system("pause");
}

static void SearchData(vector<DailyData>& dataList, vector<DailyData>& temp)
{
    int selection;

    cout << "1. Search By Date" << endl
         << "2. Search By Day" << endl
         << "3. Search By Month" << endl
         << "4. Search By Year" << endl
         << "5. Search By Rainfall" << endl;
    cin >> selection;
    cin.ignore();

    if(selection == 1)
    {
        //Searching by date
        int day;
        int month;
        int year;

        cout << "\nEnter the day: ";
        cin >> day;
        cin.ignore();

        cout << "\nEnter the month: ";
        cin >> month;
        cin.ignore();

        cout << "\nEnter the year: ";
        cin >> year;
        cin.ignore();

        for(int i = 0; i < dataList.size(); i++)
        {
            if (dataList[i].day = day)
                if (dataList[i].month = month)
                    if (dataList[i].year = year)
                        temp.push_back(dataList[i]);
        }
    }
    else if(selection == 2)
    {
        int day;

        cout << "\nEnter the day: ";
        cin >> day;
        cin.ignore();

        //Searching by day
        for(int i = 0; i < dataList.size(); i++)
        {
            if (dataList[i].day = day)
                temp.push_back(dataList[i]);
        }
    }
    else if(selection == 3)
    {
        //Search by month
        int month;

        cout << "\nEnter the month: ";
        cin >> month;
        cin.ignore();

        //Searching by day
        for(int i = 0; i < dataList.size(); i++)
        {
            if (dataList[i].month = month)
                temp.push_back(dataList[i]);
        }
    }
    else if(selection == 4)
    {
        //By year
        int year;

        cout << "\nEnter the year: ";
        cin >> year;
        cin.ignore();

        //Searching by day
        for(int i = 0; i < dataList.size(); i++)
        {
            if (dataList[i].year = year)
                temp.push_back(dataList[i]);
        }

    }
    else if(selection == 5)
    {
        //TODO: Blank for now
    }
    else
    {
        cout << "Invalid Option" <<endl;
        SearchData(dataList, temp);
    }

    if (temp.size() == 0)
    {
        cout << "No data has been found!" << endl;
    }
    else
    {
        for(int i = 0; i < dataList.size(); i++)
        {
            temp[i].print();
        }
    }
    system("pause");
    temp.clear();
}

static void ModifyData()
{
    string monthName;
    string day;

    cout << "Enter The Name Of The Month: ";
    cin >> monthName;
    //search for month
    cout  << "Enter The Day: ";
    //search for the day

    //modify the data and print summary
    cout << "New Data: ";
    system("pause");
}

static void AddData()
{
    cout << "New Data: " << endl;
    system("pause");
}

=======
#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

class DailyData
{
public:
    int year;
    int month;
    int day;
    float maxTemp;
    float minTemp;
    float meltedRain;
    float snowPellets;
    float snowPelletsOnGround;

    DailyData(string line)
    {
       stringstream ss(line);
       string s_year, s_month, s_day, s_maxTemp, s_minTemp, s_meltedRain, s_snowPellets, s_snowPelletsOnGround;

       getline(ss, s_year, ' ');
       getline(ss, s_month, ' ');
       getline(ss, s_day, ' ');
       getline(ss, s_maxTemp, ' ');
       getline(ss, s_minTemp, ' ');
       getline(ss, s_meltedRain, ' ');
       getline(ss, s_snowPellets, ' ');
       getline(ss, s_snowPelletsOnGround, ' ');

       year = stoi(s_year);
       month = stoi(s_month);
       day = stoi(s_day);
       maxTemp = stof(s_maxTemp);
       minTemp = stof(s_minTemp);
       meltedRain = stof(s_meltedRain);
       snowPellets = stof(s_snowPellets);
       snowPelletsOnGround = stof(s_snowPelletsOnGround);
    }

    void Summary()
    {
      cout <<"Weather Summary for " <<day <<"/"<< month <<"/" << year <<endl
           <<"Max Temperature: "     << maxTemp <<endl
           <<"Min Temperature: "     << minTemp <<endl
           <<"Rain/Melted Snow(In): "<< meltedRain <<endl
           <<"Snow/Ice Pellets/Hail(In): " << snowPellets <<endl
           <<"Snow/Ice Pellets/Hail On Ground(In): " <<snowPelletsOnGround<<endl;
    }
};

static void DisplayData(string path)
{
    ifstream data;
    data.open(path.c_str(), ios::in);
    string currLine;
    cout << "Displaying Data from " << path <<endl;
    int line = 0;
    while(getline(data, currLine))
    {
        cout << setw(3) << line <<": "<<currLine << endl;
        line++;
    }
}

static void LoadData()
{
    string path;
    cout << "Enter The Path To The File: ";
    getline(cin, path);

    ifstream data;
    data.open(path.c_str(), ios::in);

    string currLine;
    cout << "Reading Data From " << path <<endl;

    while(getline(data, currLine))
    {
        //Fill in data here
    }

    cout << "Done Loading Data From " << path << endl;
    system("pause");

    ifstream exit;
    exit.open("data", ios::app);
    getline(exit, path);
    exit.close();
}

static void SearchData()
{
    string monthName;
    string day;

    cout << "Enter The Name Of The Month: ";
    cin >> monthName;
    //search for month

    cout  << "Enter The Name Of The Day: ";
    cin >> day;
    //search for the day

    cout << "Searching ..." << endl;
    system("pause");
}

static void ModifyData()
{
    string monthName;
    string day;

    cout << "Enter The Name Of The Month: ";
    cin >> monthName;
    //search for month
    cout  << "Enter The Day: ";
    //search for the day

    //modify the data and print summary
    cout << "New Data: ";
    system("pause");
}

static void AddData()
{
    cout << "New Data: " << endl;
    system("pause");
}

>>>>>>> 3b76570938d83a99c5dfc12cf9440484a3ff2bdc
