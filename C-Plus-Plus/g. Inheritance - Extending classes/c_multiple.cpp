#include<iostream>
#include<string>

using namespace std;

class H_S_Education
{
    protected:
        string highSchool = "RKM";
        string cgpa = "10";
        string show_highSchool() { return highSchool; }
};

class Under_Grad
{
    protected:
        string cgpa = "8.5";
        string clg_name = "NIT Agartala";
        string show_clg(){ return clg_name; }
};

class Job_profile:protected H_S_Education,protected Under_Grad
{
    protected:
        string job_preference = "Data Science";
        string job_location = "Silicon valley";
    public:
        void Job_Details()
        {
            cout<<"\n#################   Job Details   ################"<<endl;
            cout<<"High school: "<<highSchool<<endl;
            cout<<"CGPA: "<<H_S_Education::cgpa<<endl;
            cout<<"##################################################"<<endl;
            cout<<"Under Grad college: "<<clg_name<<endl;
            cout<<"CGPA: "<<Under_Grad::cgpa<<endl;
            cout<<"##################################################"<<endl;
            cout<<"Job preference: "<<job_preference<<endl;
            cout<<"Preferred Job location: "<<job_location<<endl;
            cout<<"##################################################"<<endl<<endl;
        }

};

int main()
{
    Job_profile Simon;
    Simon.Job_Details();
}