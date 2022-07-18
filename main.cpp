#include <iostream>

using namespace std;

int age;

int main()
{
    cout << "This program is to verify user's age."
            "\nProgram verifies if someone is over 18."
            "\nProgram verifies if someone is over 35"
            "\nwhich isa minimum age for candidate for president in Poland" << endl;

    cout<<"How old are you?"<<endl;
    cin>>age;

    if(age<18)
    {
        cout<<"You are not an adult and you can not be a president";
    }
    else if ((age>=18)&&(age<35))
    {
        cout<<"You are an adult and you can not be a president";
    }
    else
    {
        cout<<"You are an adult and you can be a president";
    }

    cout << "\nPress any key to exit";
    getchar();
    getchar();
    return 0;
}
