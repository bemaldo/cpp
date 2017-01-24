#include <iostream>

using namespace std;


class Birthday{
    private:
        int day;
        int month;
        int year;
    public:
        Birthday():day(1),month(1),year(1){
            
        }
        Birthday(int m, int d, int y):day(d),month(m),year(y){
            
        }
        
        Birthday(const Birthday & b):day(b.day),month(b.month),year(b.year){
            
        }
        
        void setDay(int day){
            this->day = day;
        }
        void setMonth(int month){
            this->month = month;
        }
        void setYear(int year){
            this->year = year;
        }
        
        int getYear()const{
            return this->year;
        }
        int getMonth() const{
            return this->month;
        }
        int getDay() const{
            return this->day;
        }
        
        friend ostream & operator <<(ostream & out, const Birthday & b){
            out << "Birthday: " << b.month << "/" << b.day << "/" << b.year << endl;
            return out;
        }
        
        friend istream & operator >>(istream & in, Birthday & b){
            cout << "Enter Birthday in mm/dd/yyyy format." <<endl;
            cout << "Month: ";
            in >> b.month;
            cout << "Day: ";
            in >> b.day;
            cout << "Year: ";
            in >> b.year;
            
            return in;
        }
};

class Name{
    private:
        string first;
        string last;
    public:
        Name():first(""),last(""){}
        Name(string first, string last):first(first),last(last){}
        Name(const Name & n):first(n.first),last(n.last){}
        
        void setFirst(string first){this->first = first;}
        void setLast(string last){this->last = last;}
        
        string getFirst()const{return this->first;}
        string getLast()const{return this->last;}
        
        friend ostream & operator << (ostream & out, const Name & n){
            out << "First name: " << n.first <<endl;
            out << "Last name: " << n.last <<endl;
            return out;
        }
        
        friend istream & operator >> (istream & in, Name & n){
            cout << "Enter First name: ";
            in >> n.first;
            cout << "Enter Last name: ";
            in >> n.last;
            return in;
        }
};

class Address{
    private:
        string street;
        int unitNum;
        string city;
        string state;
        string zipcode;
    
    public:
        Address():street(""),unitNum(-1),city(""),state(""),zipcode(""){}
        Address(string str, int uN, string city, string sta, string zip):
            street(str),unitNum(uN), city(city), state(sta), zipcode(zip){}
        Address(const Address & a):street(a.street), unitNum(a.unitNum),
            city(a.city), state(a.state), zipcode(a.zipcode){}
            
        void setStreet(string street){this->street = street;}
        void setUnitNumber(int unitNum){this->unitNum = unitNum;}
        void setCity(string city){this->city = city;}
        void setState(string state){this->state = state;}
        void setZipcode(string zipcode){this->zipcode = zipcode;}
        
        string getStreet()const{return this->street;}
        int getUnitNumber()const{return this->unitNum;}
        string getCity()const{return this->city;}
        string getState()const{return this->state;}
        string getZipcode()const{return this->zipcode;}
        
        friend ostream & operator << (ostream & out, const Address & a){
            out << "Address:" << endl;
            out << a.street << " " << a.unitNum << endl;
            out << a.city << ", " << a.state << " " << a.zipcode <<endl;
            return out;
        }
        
        friend istream & operator >> (istream & in, Address & a){
            cout << "Enter address of occupancy." <<endl;
            cout << "Street: ";
            in >> a.street;
            cout << "Unit number: ";
            in >> a.unitNum;
            cout << "City: ";
            in >> a.city;
            cout << "State: ";
            in >> a.state;
            cout << "Zipcode: ";
            in >> a.zipcode;
            return in;
        }
};

class Renter{
    private:
        Name name;
        Birthday bday;
        int age;
        Address addr;
    public:
        Renter():age(-1),name(Name()),bday(Birthday()),addr(Address()){}
        Renter(Name n, Birthday b, int age, Address ad):name(n), bday(b),
            age(age), addr(ad){}
        Renter(const Renter & r):name(r.name), bday(r.bday), age(r.age), 
            addr(r.addr){}
        
        void setName(Name name){this->name = name;}
        void setBirthday(Birthday bday){this->bday = bday;}
        void setAge(int age){this->age = age;}
        void setAddress(Address addr){this->addr = addr;}
        
        Name getName()const{return this->name;}
        Birthday getBirthday()const{return this->bday;}
        int getAge()const{return this->age;}
        Address getAddress()const{return this->addr;}
        
        friend ostream & operator << (ostream & out, const Renter & r){
            out << "Renter:" <<endl;
            out << r.name;
            out << r.bday;
            out << "Age: " << r.age << endl;
            out << r.addr;
            return out;
        }
        
        friend istream & operator >> (istream & in, Renter & r){
            cout << "Enter Renter Information." << endl;
            in >> r.name;
            in >> r.bday;
            cout << "Age: ";
            in >> r.age;
            in >> r.addr;
            return in;
        }
};

int main()
{
   //cout << "Hello World" << endl;
   //Birthday b;
   //cin >> b;
   //cout << b;
   
   Renter r;
   
   cin >> r;
   cout << r;
   
   return 0;
}

