#include <iostream>
#include <string.h>
using namespace std;

char stuName[20][30];
float stuRollno[20];
int presentAttendance[20] = {0};
int absentAttendance[20] = {0};
int totalAttentaken = 0;
int TotalStuPresent;
int TotalStudAbssesnt;
int indexNumber = 0;

void checkAttendance(){
    int i, TotalPresents, TotalAbsent;
    int TotalStuPresents = 0;
    int TotalStuAbsents = 0;
    int s = 0;

    cout << endl<< "           "<< " | "<< "                    |    Total Present    |    Total Absent    | " << endl;
    cout << "           "<< " | "<< "                    |                     |                    | " << endl;
    for (i = 0; i < indexNumber; i++){
        cout << "   Name ->  |" << stuName[i] << "" << endl;
        cout << "  Roll no.  |         " << stuRollno[i] << "        |          " << presentAttendance[i] << "          "<< "|"<< "         " << absentAttendance[i] << "          |" << endl;
        cout << endl;
    }
    cout << endl
         << "Total students = " << indexNumber << endl;
    cout << "Total Attendance Taken = " << totalAttentaken << endl;
repeate6:
    if (s < 1){
        for (i = 0; i < indexNumber; i++){
            TotalStuPresents;
            TotalStuPresents += presentAttendance[i];
        }
        cout << "Total Student Present in the class this Week = " << TotalStuPresents << endl;
        for (i = 0; i < indexNumber; i++){
            TotalStuAbsents;
            TotalStuAbsents += absentAttendance[i];
        }
        cout << "Total Student Absent in the class this Week = " << TotalStuAbsents << endl;
        s++;
    }
    else if (s >= 1){
        TotalStuPresents = 0;
        TotalStuAbsents = 0;
        s = 0;
        goto repeate6;
    }
}

void addStudent(){
    int i, num, add;
    if (indexNumber == 0){
        cout << "Enter how many students you want to add: ";
        cin.clear();
        cin >> num;
        for (i = 0; i < num; i++){
            cout << endl<< "Enter " << i + 1 << " student name to add in attendance ragister: ";
            cin.clear();
            cin >> stuName[i];
        repeate3:
            cout << "Enter " << i + 1 << " student 4-degit Roll-number: ";
            cin.clear();
            cin >> stuRollno[i];
            if (stuRollno[i] < 1000 || stuRollno[i] > 9999){
                cout << "Wrong input.." << endl;
                goto repeate3;
            }
            indexNumber++;
        }
    }
    else{
        cout << "Enter how many students you want to add: ";
        cin.clear();
        cin >> num;
        add = indexNumber + num;
        for (i = indexNumber; i < add; i++){
            cout << endl<< "Enter " << i + 1 << "student name to add in attendance ragister: ";
            cin.clear();
            cin >> stuName[i];
        repeate2:
            cout << "Enter " << i + 1 << " student 4-degit Roll-number: ";
            cin.clear();
            cin >> stuRollno[i];
            if (stuRollno[i] < 1000 || stuRollno[i] > 9999){
                cout << "Wrong input.." << endl;
                goto repeate2;
            }
            indexNumber++;
        }
    }
}
void removeStudent(){
    char name[30];
    int i, j;
    cout << "Enter student name to remove: ";
    cin.clear();
    cin >> name;
    for (i = 0; i < indexNumber; i++){
        if (strcmp(name, stuName[i]) == 0){
            for (j = i; j < indexNumber; j++){
                strcpy(stuName[j], stuName[j + 1]);
                presentAttendance[i] = presentAttendance[i + 1];
                absentAttendance[i] = absentAttendance[i + 1];
            }
            indexNumber--;
            cout << endl<< name << " student is removed " << endl;
            break;
        }
        else if (i == indexNumber - 1){
            cout << "This name is not exits " << endl;
        }
    }
}
void takeAttendance(){
    int i;
    char ch;
    int j;
    cout << endl<< "How you wont take Attendance" << endl;
repeate6:
    cout << " Enter 1 (to take Attendance by Rollno.) or Enter 2 (to take Attendance by Name): ";
    cin.clear();
    cin >> j;
    if (j == 2){
        cout << endl<< "Enter Y for present and N for absent" << endl;
        for (i = 0; i < indexNumber; i++){
        repeate4:
            cout << i + 1 << "." << stuName[i] << " is present: ";
            cin.clear();
            cin >> ch;
            if (ch == 'Y' || ch == 'y'){
                presentAttendance[i] += 1;
            }
            else if (ch == 'N' || ch == 'n'){
                absentAttendance[i] += 1;
            }
            else{
                cout << "Invalid character Try again" << endl;
                goto repeate4;
            }
        }
        totalAttentaken++;
    }
    if (j == 1){
        cout << endl << "Enter Y for present and N for absent" << endl;
        for (i = 0; i < indexNumber; i++){
        repeate1:
            cout << i + 1 << "." << stuRollno[i] << " is present: ";
            cin.clear();
            cin >> ch;
            if (ch == 'Y' || ch == 'y'){
                presentAttendance[i] += 1;
            }
            else if (ch == 'N' || ch == 'n'){
                absentAttendance[i] += 1;
            }
            else{
                cout << "Invalid character Try again" << endl;
                goto repeate1;
            }
        }
        totalAttentaken++;
    }
    else{
        cout << endl << "Wrong input.." << endl;
        goto repeate6;
    }
}
void resetdata(){
    int i = 0;
    int j = 0;
    for (i = 0; 1 < 20; i++){
        for (j = 0; j < 30; j++){
            delete[] stuName;
        }
    }
    for (i = 0; i < 20; i++){
        delete[] stuRollno;
    }
    for (i = 0; i < 20; i++){
        delete[] presentAttendance;
    }
    for (i = 0; i < 20; i++){
        delete[] absentAttendance;
    }
    char name[30];
    for (i = 0; i < 30; i++){
        delete[] name;
    }
    int totalAttentaken = 0;
    int TotalStuPresent = 0;
    int TotalStudAbssesnt = 0;
    int indexNumber = 0;
    int TotalPresents = 0;
    int TotalAbsent = 0;
    int TotalStuPresents = 0;
    int TotalStuAbsents = 0;
    char ch;
    int num = 0;
    int add = 0;
    int s = 0;
    cout << endl << endl << "student data is Rested now" << endl << endl;
}

int main(){
    int choose;
    do{
        cout << endl << ">========> Main Menu <========<" << endl;
        cout << "Enter 1 for add student" << endl;
        cout << "Enter 2 for take attendance" << endl;
        cout << "Enter 3 for check attendance" << endl;
        cout << "Enter 4 for remove student" << endl;
        cout << "Enter 5 for reset student data" << endl;
        cout << "Enter 6 for exit" << endl;
        cout << "Please choose any menu: ";
        cin.clear();
        cin >> choose;
        switch (choose){
        case 1:
            addStudent();
            break;
        case 2:
            takeAttendance();
            break;
        case 3:
            checkAttendance();
            break;
        case 4:
            removeStudent();
            break;
        case 5:
            resetdata();
        case 6:
            exit(0);
            break;
        }
    } while (choose != 6);
    return 0;
}
