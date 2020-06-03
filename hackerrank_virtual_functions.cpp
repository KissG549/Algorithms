/*
  Source: https://www.hackerrank.com/challenges/virtual-functions/problem
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    protected:
        int age;
    public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class Professor: public Person
{
        static unsigned id;
        int publications;
        int cur_id;
        string name;
    public:
        Professor():cur_id(++id){};

        void getdata() override
        {
            cin >> name >> age >> publications;
           /* this->name = name;
            this->age = age;
            this->publications = pub;*/
        }

        void putdata() override
        {
            cout << name << " " << age << " " << publications << " " << cur_id << endl;
        }
};

class Student:public Person
{
        static unsigned id;
        int marks_sum;
        int cur_id;
        string name;
    public:
        Student():cur_id(++id){};

        void getdata() override
        {
            int marks[6] {0};
            marks_sum = 0;
            cin >> name >> age >> marks[0] >>marks[1] >>marks[2] >>marks[3] >>marks[4] >>marks[5];

            for( int it = 0; it < 6 ; ++it )
            {
                marks_sum += marks[it];
            }
        }

        void putdata() override
        {
            cout << name << " " << age << " " << marks_sum << " " << cur_id << endl;
        }
};

unsigned Professor::id = 0;
unsigned Student::id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
