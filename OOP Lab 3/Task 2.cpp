//#include <iostream>
//#include <map>
//#include <string>
//
//using namespace std;
//
//void displayMenu() 
//{
//    cout << "1. Add a contact" << endl;
//    cout << "2. Search for a contact" << endl;
//    cout << "3. Display all contacts" << endl;
//    cout << "4. Exit" << endl;
//}
//
//int main() 
//{
//    map<string, string> contacts;
//    char choice;
//    string name, details;
//
//    do 
//    {
//        displayMenu();
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        if (choice == '1' || choice == '2' || choice == '3' || choice == '4')
//        {
//            if (choice == '1')
//            {
//                cout << "Enter contact name: ";
//                cin.ignore();
//                getline(cin, name);
//                cout << "Enter contact details: ";
//                getline(cin, details);
//                contacts[name] = details;
//                cout << "Contact added." << endl;
//            }
//            else if (choice == '2')
//            {
//                cout << "Enter contact name to search: ";
//                cin.ignore();
//                getline(cin, name);
//                if (contacts.find(name) != contacts.end())
//                {
//                    cout << "Contact details: " << contacts[name] << endl;
//                }
//                else
//                {
//                    cout << "Contact not found." << endl;
//                }
//            }
//            else if (choice == '3')
//            {
//                cout << "All contacts:" << endl;
//                for (auto const& pair : contacts)
//                {
//                    cout << pair.first << ": " << pair.second << endl;
//                }
//            }
//            else if (choice == '4')
//            {
//                cout << "Exiting program." << endl;
//            }
//        }
//        else
//        {
//            cout << endl;
//            cout << "Invalid choice. Please try again." << endl;
//        }   
//        cout << endl;
//    } while (choice != '4');
//
//    return 0;
//}
