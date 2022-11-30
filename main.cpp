#include<iostream>
using namespace std;

class LabCourse
{
protected:
int attendance;
int quiz;
int labReport;
int continousAssessment;
int FinalLabTest;
int labProjectProposal;
int labProject;
int labViva;
public:
virtual void createMarkDistribuition()=0;
void displayMarkDristribution();
};

class CSE_134: public LabCourse
{
public:
    void createMarkDistribuition(int attendance, int quiz, int labReport, int continousAssessment, int FinalLabTest)
    {

        attendance = 10;
        quiz = 30;
        labReport = 10;
        continousAssessment = 30;
        FinalLabTest = 20;
    }

    void displayMarkDristribution()
    {
        cout<<"Attendance - "<<attendance<<endl;
        cout<<"Quiz - "<<quiz<<endl;
        cout<<"Lab Report - "<<labReport<<endl;
        cout<<"Continous Assessment - "<<continousAssessment<<endl;
        cout<<"Final Lab Test - "<<FinalLabTest<<endl;
    }
};

class CSE_136: public LabCourse
{
public:
    void createMarkDistribuition(int attendance, int labViva, int labReport, int labProjectProposal, int labProject)
    {
        attendance = 10;
        labViva = 30;
        labReport = 20;
        labProject = 30;
        labProjectProposal = 10;
    }

    void displayMarkDristribution()
    {
        cout<<"Attendance - "<<attendance<<endl;
        cout<<"lab Viva - "<<labViva<<endl;
        cout<<"Lab Report - "<<labReport<<endl;
        cout<<"Lab Project - "<<labProject<<endl;
        cout<<"Lab Project Proposal - "<<labProjectProposal<<endl;
    }

};

int main()
{
    CSE_134 displayMark1;
    displayMark1.displayMarkDristribution();
    CSE_136 displayMark2;
    displayMark2.displayMarkDristribution();
}
