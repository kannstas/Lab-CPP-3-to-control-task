#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <algorithm>
using namespace std;
class Human
{
public:
    Human (){}
    Human(string n, string s) : name(n), surname(s)
    {
    }
    virtual void Showinfo()
    {
        cout << "\n Name: " << name;
        cout << "\n Surname: " << surname;
    }
private:
    string name;
    string surname;
};
class Phonecard
{
private:
    string number;
    string type;
    string data;
public:
    Phonecard(string n)
    {
        number = n;
        type = "No info ";
        data = "No data ";
    }
    Phonecard(string n, string t)
    {
        number = n;
        type = t;
        data = " No data ";
    }
    Phonecard(string n, string t,string d)
    {
        number = n;
        type = t;
        data = d;
    }
    string getNumber()
    {
        return number;
    }
    void setNumber(string n)
    {
        number = n;
    }
    string getType()
    {
        return type;
    }
    void setType(string t)
    {
        type = t;
    }
    void Showinfo()
    {
        cout << "\nData: " << data << " Type:" << type << " Number: " << number;
    }
    string Stringinfo()
    {
        string res;
        res = "\nData: " + data + " Type:" + type + " Number: " + number + "\n";
        return res;
    }
    friend bool operator== (const Phonecard& p1, const Phonecard& p2)
    {
        return (p1.number == p2.number) ? true : false;
    }
    friend bool operator!= (const Phonecard& p1, const Phonecard& p2)
    {
        return !(p1 == p2);
    }
};
class Colleague : public Human
{
public:
    Colleague(string name,string surname, Phonecard* ph) : Human(name, surname)
    {
        setPhonec(ph);
    }
    ~Colleague()
    {
        cout << "Deleted";
    }
    void Showinfo()
    {
        Human::Showinfo();
        cout << "\nType: " << type;
    }
    void setPhonec(Phonecard* phon)
    {
        p = phon;
    }
    Phonecard getPhonec()
    {
        return *p;
    }
private:
    const string type = "Colleague";
    Phonecard *p;
};

class Friend : public Human
{
private:
    const string type = "Friend";
    Phonecard *p;
public:
    Friend(string name, string surname, Phonecard* ph) : Human(name, surname)
    {
        setPhonec(ph);
    }
    ~Friend()
    {
        cout << "Deleted";
    }
    void Showinfo()
    {
        Human::Showinfo();
        cout << "\nType: " << type;
    }
    void setPhonec(Phonecard* phon)
    {
        p = phon;
    }
    Phonecard getPhonec()
    {
        return *p;
    }

};
class Phonebook
{
private:
    list <Phonecard> masph;
    list <Phonecard>::iterator iter;
    string name;
public:
    Phonebook(string n){
        name = n;
    }
    int getSize()
    {
        return masph.size();
    }
    void addPhone(Phonecard card)
    {
        masph.push_back(card);
    }
    void delPhone(Phonecard card)
    {
        masph.remove(card);
    }
    void BookOut()
    {
        iter = masph.begin();
        while (iter != masph.end())
            (*iter++).Showinfo();
    }
    string BookString()
    {
        string result;
        iter = masph.begin();
        while (iter != masph.end())
            result += (*iter++).Stringinfo();
        return result;
    }
};
class Interface
{
public:
    Interface(string n)
    {
        name = n;
    }
    void InterStart()
    {
        Phonebook phbk("book");
        Phonecard p1("19022" , "Boss", " Mr Peterson");
        Phonecard p2("12022", "Wife", "Sara");
        phbk.addPhone(p1);
        phbk.addPhone(p2);
        std::cout << "Phone book app\n";
        while (true) {
            cout << "\nMenu:\n" << "Print 'a' to add new contact, 's' to show contacts,'f' to save to file, 'q' to quit";
            string inp;
            getline(cin, inp);
            if (inp == "q") {
                break;
            }
            else if (inp == "a")
            {
                string name, surname, number;
                cout << "Print 'f' to add new friend, 'e' to add employee contact";
                getline(cin, inp);
                if (inp == "f")
                {
                    cout << "\nEnter name (friend): \t";
                    getline(cin, name);
                    cout << "\nEnter surname (friend): \t";
                    getline(cin, surname);
                    cout << "\nEnter number (friend): \t";
                    getline(cin, number);
                    Phonecard *p = new Phonecard(number,"friend",name + " " + surname);
                    Friend* f = new Friend(name, surname,p);
                    phbk.addPhone(*p);
                }
                else if (inp == "e")
                {
                    cout << "\nEnter name (employee): \t";
                    getline(cin, name);
                    cout << "\nEnter surname (employee): \t";
                    getline(cin, surname);
                    cout << "\nEnter number (employee): \t";
                    getline(cin, number);
                    Phonecard* p = new Phonecard(number, "Employee", name + " " + surname);
                    Colleague* e = new Colleague(name, surname, p);
                    phbk.addPhone(*p);
                }
            }
            else if (inp == "s")
            {
                phbk.BookOut();
            }
            else if (inp == "f")
            {
                ofstream fout("phonebook.txt", ios::app);
                fout << "Phonebook repository:\n" << phbk.BookString();
                fout << endl;
                fout.close();
                cout << "Phonebook copied to the file";
            }
            else
            {
                cout << "Unknown symbol, try again";
            }
        }
    }
private:
    string name;
};



int main()
{
    Interface i1("Main interface");
    i1.InterStart();
}
