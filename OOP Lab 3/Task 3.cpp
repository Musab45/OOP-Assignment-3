//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//class Student 
// {
// public:
//    int id;
//    string name;
//    char grade;
//    Student(int i, string n, char g) : id(i), name(n), grade(g) {}
//};
//
//class StudentManager
//{
//private:
//    vector<Student*> records;
//public:
//    void addStudent(int id, string name, char grade) 
//    {
//        Student* newStudent = new Student(id, name, grade);
//        records.push_back(newStudent);
//    }
//
//    void updateGrade(int id, float newGrade) 
//    {
//        bool found = false;
//        for (Student* student : records) 
//        {
//            if (student->id == id) 
//            {
//                student->grade = newGrade;
//                found = true;
//                break;
//            }
//        }
//        if (!found) 
//        {
//            cout << "Student ID not found." << endl;
//        }
//    }
//
//    void displayRecords() 
//    {
//        if (records.empty()) 
//        {
//            cout << "No student records found." << endl;
//            return;
//        }
//        for (const Student* student : records) 
//        {
//            cout << "ID: " << student->id << ", Name: " << student->name << ", Grade: " << student->grade << endl;
//        }
//    }
//
//    ~StudentManager() 
//    {
//        for (Student* student : records) 
//        {
//            delete student;
//        }
//    }
//};
//
//int main() {
//    StudentManager sm;
//    char choice;
//
//    do 
//    {
//        cout << "Student Record Management System" << endl;
//        cout << "1. Add Student Record" << endl;
//        cout << "2. Update Student Grade" << endl;
//        cout << "3. Display All Student Records" << endl;
//        cout << "4. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//        if (choice == '1' || choice == '2' || choice == '3' || choice == '4')
//        {
//            switch (choice)
//            {
//            case '1':
//            {
//                int id;
//                string name;
//                char grade;
//                cout << "Enter student ID: ";
//                cin >> id;
//                cout << "Enter student name: ";
//                cin.ignore();
//                getline(cin, name);
//                cout << "Enter student grade: ";
//                cin >> grade;
//                sm.addStudent(id, name, grade);
//                cout << "Student record added successfully." << endl;
//                break;
//            }
//            case '2':
//            {
//                int id;
//                char newGrade;
//                cout << "Enter student ID: ";
//                cin >> id;
//                cout << "Enter new grade: ";
//                cin >> newGrade;
//                sm.updateGrade(id, newGrade);
//                break;
//            }
//            case '3':
//                sm.displayRecords();
//                break;
//            case '4':
//                cout << "Exiting program." << endl;
//                break;
//            }
//        }
//        else
//        {
//			cout << "Wrong Choice! Try Again!" << endl;
//        }
//        cout << endl;
//    } while (choice != '4');
//
//    return 0;
//}
