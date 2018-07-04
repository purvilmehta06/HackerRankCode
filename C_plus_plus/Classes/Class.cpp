#include <iostream>
#include <sstream>
#include<string.h>
using namespace std;
class student
{
    public:
    int a,s;
    char fn[300],ln[300];
    public:
    void set_age(int);
    void set_standard(int);
    void set_first_name(char[]);
    void set_last_name(char[]);
    int get_age();
    int get_standard();
    void get_first_name();
    void get_last_name();
    void to_string();
};
void student :: set_age(int age)
{
a=age;    
}
int student :: get_age()
{
return a;
}
void student :: set_standard(int standard)
{
s=standard;    
}
int student :: get_standard()
{
return s;
}
void student :: set_first_name(char first_name[])
{
strcpy(fn,first_name);    
}
void student :: get_first_name()
{
cout<<fn;
}
void student :: set_last_name(char last_name[])
{
strcpy(ln,last_name);    
}
void student :: get_last_name()
{
    cout<<ln;
//return ln;
}
void student :: to_string()
{
    cout<<a<<","<<fn<<","<<ln<<","<<s;
}
int main() {
    int age, standard;
    char first_name[300], last_name[300];
    
    cin >> age >> first_name >> last_name >> standard;
    
    student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    st.get_last_name();
    cout<< ", ";
    st.get_first_name();
    cout<< "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();
    
    return 0;
}
