#include<iostream>
#include<string>
using namespace std;
class Student{
	public:
	int age;
	string first_name;
	string last_name;
	int standard;
	void set_age(int x)
	{
		age=x;
	} void set_standard(int y)
	{
		standard =y;
	}
	void set_first_name(string a)
	{
		first_name=a;
	}
	void set_last_name(string b)
	{
		last_name=b;
	}
	void get_age()
	{
		cout<<age;
	}
	void get_last_name()
	{
		cout<<last_name;
	}
	void get_first_name()
	{
		cout<<first_name;
	}
	void get_standard()
	{
		cout<<standard;
	}
	void to_string()
	{
		cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
	}
	
};
int main()
{
	int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
     st.get_age() ;cout<<"\n";
     st.get_last_name();cout << ", " ; st.get_first_name();cout << "\n";
     st.get_standard(); cout<< "\n";
    cout << "\n";
     st.to_string();
    
    return 0;
}

