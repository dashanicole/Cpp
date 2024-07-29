#include "iostream"
#include "iomanip"
#include "conio.h"
#include "cstring"

using namespace std;

string names[100] ,ID[100] ,identity ,name ,passWord = "123", newpass;
int i , j, temp = 0, index;	
	

void addName(){
	cout << "\n\t\t\t\t\t\t\t   Add ID: ";
	getline(cin, identity);
	cout << "\t\t\t\t\t\t\t   Add Name: ";
	getline(cin, name);
	getch();

	if(i < 100){
		ID[i] = identity;
		names[i] = name;
		i++;
		cout << "\n\n\t\t\t\t\t\t\tSuccessfully added!!";
	}else{
		cout << "\n\t\t\t\t\t\t\tThe record is Full!!";
	}
}

void deleteName(){
	getline(cin, identity);
	cin.ignore();
	
	index = -1;
	for(j = 0; j < i; j++){
		if(ID[j] == identity){
			index = j;
			break;
		}
	}if(index == -1){
		cout << "\n\t\t\t\t\t\t\tName is not found in the Record";
	}
	for(j = index; j < i - 1; j++){
		ID[j] = ID[j + 1];
	}
	i--;

}

void searchName(){
	getline(cin, identity);
	
	temp = 0;
	for(j = 0; j < i; j++){
		if(identity == ID[j]){
			temp = 1;
			break;
		}
	} 
	if (temp == 0){
		cout << "\n\n\t\t\t\t\t\t     Name is not found in the record\n";
	}else {
		cout << "\n\n\t\t\t\t\t\t     Name is found in the record!!\n";
	}
}

void modifyName(){
	cout << "\n\t\t\t\t\t\t     Enter ID: ";
	getline(cin, identity);
	
	for(j = 0; j < i; j++){
		cout << "\n\t\t\t\t\t\t      Enter Modified Name: ";
		getline(cin, name);
		getch();
		names[j] = name;
		break;
	}
}

void displayName(){
	for(j = 0; j < i; j++){
		cout << "\t\t\t\t\t\t\t      " << j+1 <<". " << ID[j] << "\n";
		cout << "\t\t\t\t\t\t\t         " << names[j] << "\n";
	}
}

void updatePassWord(){
	getline(cin, newpass);
	
	passWord = newpass;
}
void header(){
	    cout << "\n\t\t\t\t\t\t\tUniversity of Cebu";
        cout << "\n\t\t\t\t\t\t   College of Computer Studies";
        cout << "\n\t\t\t\t\t\t  Management Information System";
        cout << "\n\n";
	}
void security(){
		cout << "==================================================COMPROG SECURITY v5.0=================================================\n\n\n\n\n";
}
int main() {
x:	
	string  userName, userInput, password;
	char ps;
	int chosen;
	system("cls");
	security();
	cout <<"\n\t\t\t\t\t\t      Username: ";
	cin >>userInput;
	cout <<"\n\t\t\t\t\t\t      Password: ";
	
	while((ps = _getch()) ){
	if(ps == 8 && password.size()>0){
		password.erase(password.length() - 1);
		cout<<"\b \b";
	}else{
		password += ps;
		cout<<"*";
		}
	}if(userInput == userName && password == passWord){
		system("cls");
		security();
		cout << "\n\n\n\t\t\t\t\t\t     Access Granted!\n";
		getch();
y: 	    
		system("cls");
		header();
        cout << "\n\tOption to Perform ";
        cout << "\n\t\tPress [1] - Add Record  ";
        cout << "\n\t\tPress [2] - Delete Record ";
        cout << "\n\t\tPress [3] - Search Record ";
        cout << "\n\t\tPress [4] - Modify Record ";
        cout << "\n\t\tPress [5] - Display All Record  ";
        cout << "\n\t\tPress [6] - Update Password ";
        cout << "\n\t\tPress [7] - Exit ";

        cout << "\n\n\tSelect Option to Perform: ";
        cin >> chosen;
		cin.ignore();

        system("cls");  

        switch (chosen) {
            case 1:
               	header();
                cout << "\n\t\t\t\t\t\t\t   Add Record";
				addName();
				getch();
				goto y;
                break;
            case 2:
               	header();
                cout << "\n\t\t\t\t\t\t\tDelete Record: ";
				deleteName();
				cout << "\n\t\t\t\t\t\t\tName is deleted successfully";
				getch();
				goto y;
                break;
            case 3:
                header();
                cout << "\n\t\t\t\t\t\t\t     Search Record: ";
				searchName();
				getch();
				goto y;
                break;
            case 4:
               	header();
                cout << "\t\t\t\t\t\t     Modify Record";
				modifyName();
				getch();
				goto y;
                break;
            case 5:
               	header();
                cout << "\t\t\t\t\t\t\tDisplay All Record\n";
				displayName();
				getch();
				goto y;
                break;
            case 6:
                header();
                cout << "\t\t\t\t\t\t      Update Password: ";
				updatePassWord();
				cout << "\t\t\t\t\t\t      Successfully Updated!";
				getch();
				goto y;
                break;
            case 7:
				header();
                cout << "\n\n\t\t\t\t\t\t     Exiting the program. Goodbye!";
			 getch();
			 goto x;
                break;
            default:
				header();
                cout << "\n\n\t\t\t\t\t\t\tInvalid option selected.";	 	 	 	 
			 getch();
			 goto y;
        }
	}else{ 
			system("cls");
			security(); 
			cout<<"\n\n\n\t\t\t\t\t     Sorry, Invalid Username or Password.\n";
			cout<<"\t\t\t\t\t     Please try again!!\n\n\n";
			getch();
			//goto x;
		}
 return 0;
}

