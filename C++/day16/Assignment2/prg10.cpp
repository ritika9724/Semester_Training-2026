// Write a program to read time in hh:mm:ss and display answer I n only seconds. 
// For Example if user enters   2:15:30 then it should display 8130 seconds.  
// Input:  Enter Hours: 2  Enter minutes: 15  Seconds: 30  Output: 8130 seconds 


#include<iostream>
using namespace std;

class Time{
public:
    int hours;
    int minutes;
    int seconds;

    void setTime(int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }

    void displaySeconds(){
        int total_seconds;

        total_seconds = (hours * 3600) + (minutes * 60) + seconds;

        cout << "Hours : " << hours << endl;
        cout << "Minutes : " << minutes << endl;
        cout << "Seconds : " << seconds << endl;
        cout << "Total Seconds : " << total_seconds << " seconds" << endl;
    }
};

int main(){

    Time obj;

    int h, m, s;

    cout << "Enter Hours : ";
    cin >> h;

    cout << "Enter Minutes : ";
    cin >> m;

    cout << "Enter Seconds : ";
    cin >> s;

    obj.setTime(h, m, s);
    obj.displaySeconds();

    return 0;
}