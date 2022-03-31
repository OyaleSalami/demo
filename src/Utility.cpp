#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

static void Summary(string date)
{
    cout << endl << " Data From " + date << endl;
    //print the actual data from that day
}

static void DisplayData()
{
    cout << "Displaying Data..." << endl;
    system("pause");
}

static void LoadData()
{
    string monthName;
    string path;

    cout << "Enter The Path To The File: " << endl;
    cin >> path;

    //Month Name is equal to the name of the file

    cout << "Done Loading Data ... " + monthName << endl;
    system("pause");
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

    Summary(monthName + " " + day);
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

    Summary(monthName + " " + day);
    //modify the data and print summary
    cout << "New Data: ";

    Summary(monthName + " " + day);
    system("pause");
}

static void AddData()
{
    cout << "New Data: " << endl;
    system("pause");
}

