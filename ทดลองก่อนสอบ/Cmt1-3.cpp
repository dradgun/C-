#include <iostream>
using namespace std;
int main()
{
        int score = 0, project = 0, midterm = 0, finals = 0;
        for (int i = 1; i <= 3; i++)
        {
                cout << "Enter Project score: ";
                cin >> project;
                cout << "Enter Midterm score: ";
                cin >> midterm;
                cout << "Enter Final score: ";
                cin >> finals;
                score = project + midterm + finals;
                if (project <= 20 && project >= 0 && midterm <= 30 && midterm >= 0 && finals >= 0 && finals <= 50)
                {
                        cout << "Total score: " << score << endl;
                        if (score >= 80 && score <= 100)
                        {
                                cout << "grade : A" << endl;
                        }
                        else if (score >= 70)
                        {
                                cout << "grade : B" << endl;
                        }
                        else if (score >= 60)
                        {
                                cout << "grade : C" << endl;
                        }
                        else if (score >= 50)
                        {
                                cout << "grade : D" << endl;
                        }
                        else if (score >= 0)
                        {
                                cout << "grade : F" << endl;
                        }
                        else
                        {
                                cout << "worng score" << endl;
                        }
                }
                else
                {
                        if (project > 20)
                        {
                                cout << "Project score Error !!!" << endl;
                        }
                        if (midterm > 30)
                        {
                                cout << "Midterm score Error !!!" << endl;
                        }
                        if (finals > 50)
                        {
                                cout << "Final score Error !!!" << endl;
                        }
                        cout << "Total score: 0" << endl;
                        cout << "grade :" << endl;
                }
        }
}