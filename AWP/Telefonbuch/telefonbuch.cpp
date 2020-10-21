#include <iostream>
#include <string>

using namespace::std;

int menue_header();
int menue();
void init();
void show_book();
bool add_to_book();
bool search_book();
int del_from_book();
int pissoff();
void initbook();

struct T_entry {
    int i_ID;
    string s_surname;
    string s_number;
};

int i_choice;
T_entry phonebook [100];
int i_phonebooksize = sizeof(phonebook)/sizeof(phonebook[0]);

int main() {
    initbook();
    do {
    menue();
    }
    while(i_choice != 5);
}

void initbook(){
    for (int i = 0; i <= i_phonebooksize; i++) {
        phonebook[i].i_ID = i;
    }
}

int menue_header() {
    string lines = "--------------------------------------";
    cout << lines << endl << "Telefonbuch" << endl << lines << endl;
    cout << "1.     Telefonbuch anzeigen" << endl;
    cout << "2.     Neuen Eintrag anlegen" << endl;
    cout << "3.     Suche Einträge anhand des Namens" << endl;
    cout << "4.     Lösche Einträge anhand der ID" << endl;
    cout << "5.     Beenden" << endl;
    return 0;
}

int menue() {
    do {
    menue_header();
    cin >> i_choice;
    cout << endl;
    
switch(i_choice) {

   case 1  :
      show_book();
      break; //optional
   case 2  :
      add_to_book();
      break; //optional
    case 3 :
        search_book();
        break;
    case 4 :
        del_from_book();
        break;
    case 5 :
            break;  
}
return 0;
    }
    while(i_choice != 5);
}

void show_book() {
    for (int i = 0; i <= i_phonebooksize; i++) {
        if (phonebook[i].s_number != "") {
        cout << "ID: " << phonebook[i].i_ID << "    Surname: " << phonebook[i].s_surname << "    Number: " << phonebook[i].s_number << endl;
    }
    }
    }
    

bool add_to_book(){
    for (int i = 0; i <= i_phonebooksize; i++) {
        if (phonebook[i].s_number == "") {
            cout << "The ID is: " << phonebook[i].i_ID << endl;
            cout << "Gimme the name" << endl;
            string s_newname;
            cin >> s_newname;
            cout << endl;
            phonebook[i].s_surname = s_newname;
            cout << "Gimme the numba" << endl;
            string s_newnumber;
            cin >> s_newnumber;
            cout << endl;
            phonebook[i].s_number = s_newnumber;
            cout << "New Entry added" << endl;
            break;
        }
    }
    
    return 0;
    };

bool search_book(){
    cout << "Who u looking 4?" << endl;
    string s_lookupname;
    cin >> s_lookupname;
    for (int i = 0; i <= i_phonebooksize; i++) {
        if (phonebook[i].s_surname == s_lookupname) {
            cout << "ID: " << phonebook[i].i_ID << "    Surname: " << phonebook[i].s_surname << "    Number: " << phonebook[i].s_number << endl;
        break;
        }
        else {cout << "Hmm, seems 2 b not in the book..." << endl;
        return 1;}
    }
    return 0;};
    
int del_from_book(){return 0;};
int pissoff(){return 0;};