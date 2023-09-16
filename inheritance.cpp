#include <iostream>
using namespace std;

class AbstractEmpl{
    virtual void askpromo()=0;
};

class Empl:AbstractEmpl{
private:
string Name;
    string Company;
    int Age;
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
    
}