#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Student{
    int roll_no;
    string name;
    int age;
}; //structure definition:allows you to group multiple variables of different data types under a single name.
void displayMenu(){
cout<<"\n ====STUDENT DETAILS====\n";
cout<<"1.Add Student\n";
cout<<"2.Display Students\n";
cout<<"3.Search by roll number\n";
cout<<"4.Exit\n";
cout<<"Enter your choice: ";
}

int main(){
    vector <Student> students;
    int choice;
    while(true){
        displayMenu();
        cin>>choice;
    
        if(choice == 1){
            Student s;
            cout<<"enter roll number:";
            cin>>s.roll_no;
            cin.ignore();
            cout<<"enter name:";
            getline(cin,s.name);
            cout<<"enter age:";
            cin>>s.age;

            students.push_back(s);
            cout<<"Student added successfully!\n";
        }else if (choice ==2){
            for(const auto& s: students){
                cout<<"Roll No:"<<s.roll_no<<", Name:"<<s.name<<", Age:"<<s.age<<"\n";
            }
        }
        else if(choice == 3){
            int searchRoll;
            bool found =  false;
            cout<<"enter the roll no:";
            cin>>searchRoll;

            for(const auto& s: students){
                if(s.roll_no == searchRoll){
                    found = true;
                    break;
                }
            }
            if(!found){
                cout<<"Student not found!\n";
            }
        }
        else if(choice == 4){
            cout<<"exiting the game!";
            break;
        }else{
            cout<<"Invalid choice! please try again.\n";
        }
        }
        return 0;


        }

    