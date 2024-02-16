#include<iostream>
using namespace std;
class Employee
{
    private:
            int id;
            string name;
            double salary;
    protected:
            static int count;
    public:
        Employee()
        {
            id=130;
            name="Vedant";
            salary=5000;
            
        }
        Employee(int id,string name,double salary)
        {
            this->id=id;
            this->name=name;
            this->salary=salary;
             
        }
        virtual void assign()
        {
            cout<<"Enter id:"<<endl;
            cin>>id;
            cout<<"Enter name"<<endl;
            cin>>name;
            cout<<"Enter salary:"<<endl;
            cin>>salary;

        }
        virtual void display()
        {
            cout<<"The name is:"<<name<<endl;
            cout<<"  and id:"<<id<<endl;
            cout<<"Salary:"<<salary<<endl;
          
        }
};
int Employee::count=0;
class Manager: public Employee
{
    private:
            string project;
            int team_mem;
    public:
        Manager():Employee()
        {
           project="Bank management system";
           team_mem=5;
           count++;
          
        }
        Manager(int id,string name,double salary,string project,int team_mem):Employee(id,name,salary)
        {
            this->project=project;
            this->team_mem=team_mem;
            count++;
         
        }
        void assign()
        {
            Employee::assign();
            cout<<"Enter project name:"<<endl;
            cin>>project;
            cout<<"Enter team members"<<endl;
            cin>>team_mem;
        

        }
        void display()
        {
            Employee::display();
            cout<<"The project name is:"<<project<<endl;
            cout<<"  and team members are:"<<team_mem<<endl;
            cout<<"The Count is:"<<count<<endl;
        }
};
int main()
{

    Manager m;
    m.display();
      Manager n;
    n.display();
      Manager o;
    o.display();
    return 0;
}