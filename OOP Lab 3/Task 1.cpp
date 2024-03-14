//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void displayMenu()
//{
//    cout << "1. Add a student grade" << endl;
//    cout << "2. Display all student grades" << endl;
//    cout << "3. Exit" << endl;
//}
//
//int main() 
//{
//    vector<char> studentGrades;
//    char choice;
//    char grade;
//
//    do 
//    {
//        displayMenu();
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        if (choice == '1' || choice == '2' || choice == '3')
//        {
//            switch (choice)
//            {
//            case '1':
//                cout << endl;
//                cout << "Enter student grade: ";
//                cin >> grade;
//                studentGrades.push_back(grade);
//                cout << endl;
//                cout << "Student grade added.";
//                cout << endl;
//                break;
//            case '2':
//                cout << endl;
//                cout << "Student grades: " << endl;
//                for (int i = 0; i < studentGrades.size(); ++i)
//                {
//                    cout << "Student " << (i + 1) << ": " << studentGrades[i] << endl;
//                }
//                cout << endl;
//                break;
//            case '3':
//                cout << "Exiting program.";
//                cout << endl;
//                break;
//            }
//        }
//        else
//        {
//            cout << endl;
//            cout << "Invalid Choice!!" << endl;
//            cout << endl;
//        }
//        cout << endl;
//    } while (choice != 3);
//    return 0;
//}