#include <iostream>
using namespace std; 

int main()
{
    string name; 
    string rollnum; 
    int count = 0; 
    cout<<"Enter your name: "; 
    cin>>name; 

    cout<<"Enter your roll num"; 
    cin>>rollnum; 

    cout<<endl<<endl<<"Enter your Programming Marks!\n"; 

    float a1, a2, a3, m, p, f; 
    float pf_finalscore; 
    cout<<"Assignment 1: "; 
    cin>>a1; 

    cout<<"Assignment 2: "; 
    cin>>a2; 

    cout<<"Assignment 3: "; 
    cin>>a3; 

    cout<<"Midterm: "; 
    cin>>m; 

    cout<<"Project: "; 
    cin>>p; 

    cout<<"Final Exam: "; 
    cin>>f;

    pf_finalscore = a1 + a2 + a3 + m + p + f; 

    float PF_GPA = 0.00;
    string PF_GRADE = "U"; 

    if (pf_finalscore>=60)
    {
        count++; 

        if (pf_finalscore>=90)
        {
            PF_GRADE = "A+";
            PF_GPA=4.00; 
        }

        else if(pf_finalscore >= 80)
        {
            PF_GRADE = "A";
            PF_GPA = 3.67; 
        }

        else if(pf_finalscore >= 70)
        {
            PF_GRADE = "B";
            PF_GPA = 3.33; 
        }

        else if(pf_finalscore >= 60)
        {
            PF_GRADE = "C";
            PF_GPA = 3.00; 
        }
    } 


    cout<<endl<<endl<<"Enter your Pak Marks!\n"; 

    float r; 
    float ps_finalscore; 

    cout<<"Research: "; 
    cin>>r; 

    cout<<"Final Exam: "; 
    cin>>f;

    ps_finalscore = r+f; 

    float PS_GPA = 0.00;
    string PS_GRADE = "U"; 
    
    if (ps_finalscore>=60)
    {
        count++; 

        if (ps_finalscore>=90)
        {
            PS_GRADE = "A+";
            PS_GPA=4.00; 
        }

        else if(ps_finalscore >= 80)
        {
            PS_GRADE = "A";
            PS_GPA = 3.67; 
        }

        else if(ps_finalscore >= 70)
        {
            PS_GRADE = "B";
            PS_GPA = 3.33; 
        }

        else if(ps_finalscore >= 60)
        {
            PS_GRADE = "C";
            PS_GPA = 3.00; 
        }
    } 

    cout<<endl<<endl<<"Enter your Calculus Marks!\n"; 

    float c1,c2; 
    float cl_finalscore; 
    cout<<"Course 1: "; 
    cin>>c1; 

    cout<<"Course 2: "; 
    cin>>c2; 

    cout<<"Project: "; 
    cin>>p; 

    cout<<"Final Exam: "; 
    cin>>f;

    cl_finalscore = c1 + c2 + p + f; 

    float CL_GPA = 0.00;
    string CL_GRADE = "U"; 

    if (cl_finalscore>=60)
    {
        count++; 

        if (cl_finalscore>=90)
        {
            CL_GRADE = "A+";
            CL_GPA=4.00; 
        }

        else if(cl_finalscore >= 80)
        {
            CL_GRADE = "A";
            CL_GPA = 3.67; 
        }

        else if(cl_finalscore >= 70)
        {
            CL_GRADE = "B";
            CL_GPA = 3.33; 
        }

        else if(cl_finalscore >= 60)
        {
            CL_GRADE = "C";
            CL_GPA = 3.00; 
        }
    } 


    if (count == 3)
    {
        cout<<"Congrats You Passed!"<<endl;

        cout<<"PF Grade: "<<PF_GRADE<<endl; 
        cout<<"PS Grade: "<<PS_GRADE<<endl; 
        cout<<"CL Grade: "<<CL_GRADE<<endl; 

        int calculus = 3; 
        int pakstd = 3; 
        int prog = 4; 

        int total = 3+3+4; 
        float total_credits = (4*PF_GPA) + (3*PS_GPA) + (3*CL_GPA); 
        float final_gpa = total_credits / total; 

        cout<<"Your Semester GPA is: "<<final_gpa; 
    }

    else

    {
        cout<<"Im Sorry, Better Luck Next Time"<<endl;
        cout<<"You passed in "<<count<<" subject(s)"<<endl;
    }

    return 0; 
}