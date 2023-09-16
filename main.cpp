#include <iostream>
using namespace std;

class AbstractEmpl{
    virtual void askpromo()=0;
};

class Empl:AbstractEmpl{
private:
    
    string Company;
    int Age;
protected:
    string Name;
public:
    void setName (string name){Name = name;}

    string getName (){ return Name;}

    void setCompany(string company){Company = company;}

    string getCompany(){return Company;}

    void setAge(int age) {if (age>=18)Age = age; else cout<<"to young";}

    int getAge(){return Age;}

    void introduce(){
        cout<<"Name - "<< Name << endl;
        cout<<"Company - "<< Company << endl;
        cout<<"Age - "<< Age << endl;
    }

    Empl(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;

    }
    void askpromo(){
        if (Age > 30)
        cout << Name <<" got promoted"<<endl;
        else
        cout << Name <<" sry no promotion"<<endl;
    }
    virtual void work() {
        cout<< Name << " is checking email."<< endl;
    }
};

class Developer:public Empl{
public:
    string programinglang;

    Developer (string name, string company, int age, string language)
        :Empl(name, company, age)
    {
        programinglang = language;
    }
    void fixbug() {
        cout << Name<<" working at "<< getCompany() << " fixed bug using " << programinglang << endl;
    }
    void work() {
        cout<< Name << " is writing "<< programinglang << " code."<< endl;
    }

};
class Teacher:public Empl{
public:
    string Subject;
    void preparelesson(){
        cout << Name << " is preparing " << Subject << " lesson."<<endl;
    }
    Teacher (string name, string company, int age , string subject)
        :Empl(name, company, age)
        {
            Subject = subject;
        }
        void work() {
        cout<< Name << " is teaching "<< Subject << " code."<< endl;
    }

};

int main(){

    Empl empl1= Empl("John","mo",25);
   
    // empl1.introduce();
    Empl empl2 = Empl ("Mika", "ASD", 34);
    // empl2.introduce();

    empl1.askpromo();
    empl2.askpromo();
    // empl1.setAge (7);
    // cout<< empl1.getAge();
    Developer d= Developer ("Mikel","ALIB",34,"Java");
    d.fixbug();
    d.askpromo();
    d.introduce();
    Teacher t = Teacher ("Mirel","Happy School",45, "Math");
    t.preparelesson();
    t.askpromo();

    Empl* e1 = &d;
    Empl* e2 = &t;

    e1->work();
    e2->work();
    empl1.work();
    
}