#include <iostream>
using namespace std;

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        void setDay(int newDay);        // these three members of the class have access to the private info of the class
        void setMonth(int newMonth);
        void setYear(int newYear) {     // setYear method defined inside the class, setDay and setMonth defined outside
            year = newYear;             // there's no difference in the code whether defined inside or outside of the class, but doing outside helps cut clutter
        }
        int getDay() const {            // these get functions are marked as const functions, which can access the data but not change it
            return day;                 // in a const function, the object will not change. this is a protection mechanism to prevent accidental changes
        }                               // if an object is passed to a function by const reference, then the only functions we have access to are const functions
        int getMonth() const {          // serves as a protection to make sure we can't do more than what the function can do
            return month;
        }
        int getYear() const {
            return year;
        }
        void displayDate() const {      // a const function that prints the formatted date
            cout << day << "/" << month << "/" << year;
        }
        bool validate() const;          // validates whether date is valid or not.
};

void Date::setDay(int newDay) {         // restricts values of day to reasonable ones
    if (newDay > 0 && newDay <= 31)
        day = newDay;                   // has access to day
}

void Date::setMonth(int newMonth) {
    if (newMonth > 0 && newMonth <= 12)
        month = newMonth;
}

int main() {
    Date d1;
    d1.setDay(6);
    d1.setMonth(8);
    d1.setYear(1991);

    cout << "Very important date: ";
    d1.displayDate();
}


// CONSTRUCTORS

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        Date() : day(1), month(1), year(1970) {     // Constructor using Member Initialization List
        }
};

// IS EQUIVALENT TO:

class Date {
    private:
        int day;
        int month;
        int year;
    public:
        Date() {                                    // Constructor using the code inside the class without using Member Initialization List
            day = 1;                                // there will later be situations where we can only use the MIL
            month = 1;
            year = 1970    
        }
};