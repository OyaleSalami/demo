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

