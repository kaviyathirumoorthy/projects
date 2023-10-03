

//to store and calculate the details of employees
#include <iostream>

using namespace std;
class Employee
{
    public:
    string Name;
    int Emp_no;
    string Emp_Bloodgroup;
    string Emp_address;
    long Emp_mobilenumber;
    string Emp_deprt;
    int workingtime;
       
//member function
    void Getdetails();
    void Printdetails();
    void calculate_totalsalary_Get_workreviewinstar();
};
void Employee::Getdetails()
{
        
        cout<<"\nEnter Employee Name:";
        cin >> Name;
        cout<<"\nEnter Employee no:";
        cin >> Emp_no;
        cout<<"\nEnter Employee Bloodgroup:";
        cin >> Emp_Bloodgroup;
        cout<<"\nEnter Employee address:";
        cin>>Emp_address;
        cout<<"\nEnter Employee mobile number:";
        cin >> Emp_mobilenumber;
        cout<<"\nEnter Employee Deprt:";
        cin >> Emp_deprt;
        cout<<"\nEnter Employee workingtime:";
        cin>>workingtime;
}



void Employee::Printdetails()
{
        cout<<"\n Employee Name "<<"is "<<Name;
        cout<<"\n Employee no "<<"is "<<Emp_no;
        cout<<"\n Employee Bloodgroup "<<"is "<<Emp_Bloodgroup;
        cout<<"\n Employee Mobilenumber "<<"is "<<Emp_mobilenumber;
        cout<<"\n Employee Deprt "<<"is "<<Emp_deprt;
        cout<<"\n Employee workingtime "<<"is "<<workingtime;
        
    
}
void Employee::calculate_totalsalary_Get_workreviewinstar()
{       
        
        int totalsalary;
        cout<<"\nsalary for one hour is 300\n";
        totalsalary=(workingtime*300);
        cout<<"totalsalary of the employee "<<"is "<<totalsalary;
        cout<<"\nThe rating of employee based on working hour : ";
            if (workingtime<=42&&workingtime>37)
            cout<<"5";
            else if(workingtime<=37&&workingtime>32)
            cout<<"4";
            else if(workingtime<=32&&workingtime>20)
            cout<<"3";
            else if(workingtime<=20&&workingtime>10)
            cout<<"2";
            else if(workingtime<=10)
            cout<<"1";
}
int main()
{   
    int val;
    cout<<"Enter number of details to be filled\n";
    cin>>val;
    Employee details[val];
    for(int i=0;i<val;i++)
    {       
    details[i].Getdetails();
    }
    for(int i=0;i<val;i++)
    {
    details[i].Printdetails();
    details[i].calculate_totalsalary_Get_workreviewinstar();
    }
}
