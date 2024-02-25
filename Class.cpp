#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.

Read statement for specification.
*/
struct Student{
    int age, standard;
    string first_name, last_name;
};
int main() {
    Student st;
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout<<st.age<<endl<<st.last_name<<", "<<st.first_name<<endl<<st.standard<<endl;
    cout<<endl<<st.age<<","<<st.first_name<<","<<st.last_name<<","<<st.standard<<endl;
    
    return 0;
}
