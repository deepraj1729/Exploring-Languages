#include<iostream>
#include<string>

using namespace std;

class Me
{
    protected:
        string name = "Deepraj Baidya";
        string clg = "NIT Agartala";
    public:
        Me(){cout<<"\n\nMe constructor called ";}
        string hobby = "Coding";
        string music = "Mendes & Beiber";
        string actor = "Bryan Cranston";
        void display_me()
        {
            cout<<"\n\nName = "<<name<<endl;
            cout<<"college = "<<clg<<endl;
            cout<<"Hobby = "<<hobby<<endl;
            cout<<"Favourite Music artists are:  "<<music<<endl;
            cout<<"Favourite actor:  "<<actor<<endl;
        }
};

class Education
{
    protected:
        string Elementary = "BSS";
        string Hschool = "RKM";
};

class Resume:protected Me,protected Education
{
    private:
        string contact = "8415020683";
        string email = "bdeeprajrkm1@gail.com";
        string insta = "www.instagram.com/Deepraj1729/";
    protected:
        string projects = "Face recognition, emotion detection, e-learning full stack web application.";
        string experience = "Karmaalab pvt ltd";
        string skills = "C++, Java, Python";
    public:
        Resume(){ cout<<"\n\nResume constructor called";}
        string address = "Milan chakra,Agartala,West Tripura, India";
        string country = "India";
        void display_resume()
        {
            display_me();
            cout<<"\nContact details:----------------------------"<<endl;
            cout<<"Mobile: "<<contact<<endl;
            cout<<"Email: "<<email<<endl;
            cout<<"Instagram: "<<insta<<endl;
            cout<<"\nEducation details:----------------------------"<<endl;
            cout<<"Elementary Education: "<<Elementary<<endl;
            cout<<"HS Education: "<<Hschool<<endl;
            cout<<"skills: "<<skills<<endl;
            cout<<"projects: "<<projects<<endl;
            cout<<"\nLocation details:----------------------------"<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"country: "<<country<<endl;
        }
};

class Job_application:protected Resume
{
    private:
        string job_status = "No Income";
        string job_preferences = "Data Science,Machine Learning,Full Stack";
    protected:
        string office_location = "Gurgaon";
        string referral = "via linkedin";
    public:
        
        string application = "Searching for a software engineering job in data science or machine learning or full stack";
        void display_application()
        {
           display_resume();
           cout<<"\nJob form:- ---------------------------------------"<<endl;
           cout<<"Job status: "<<job_status<<endl;
           cout<<"Job preferences: "<<job_preferences<<endl;
           cout<<"Office location: "<<office_location<<endl;
           cout<<"Referral: "<<referral<<endl;
           cout<<"My application: "<<application<<endl<<endl;
        }
};

int main()
{
    Job_application form1;
    form1.display_application();
}