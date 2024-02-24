#include <iostream>
#include <string>
#include <sstream>
#include "BaseTaskManager.h"
using namespace std;

int main()
{
	TaskManager	list;
	char		key;
	int			code;
	while (true)
	{
		system("cls");
		cout << "______________________________		TO-DO-LIST		______________________________" << endl;
		list.getDataList();
		cout << "1 - Add task. 2 - Edit task. 3 - View task. 4 - Delete task. 5 - exit.\n";
		cout << "Enter action: ";
		short action;
		cin >> action;
		switch (action)
		{
		case 1:
		{
			system("cls");
			cout << "______________________________		ADDING-TASK		______________________________" << endl;
			string	name, description;
			int		levelOfImportant;
			cout << "Enter name: ";
			cin >> name;
			cout << "Enter description (dont enter on next line): ";
			cin >> description;
			cout << "Enter level of important: ";
			cin >> levelOfImportant;
			try
			{
				list.addTask(name, description, levelOfImportant);
			}
			catch (int error)
			{
				cout << "Error: unfaithful type of data." << endl;
				int action;
				cout << "\nEnter any symbol to back: ";
				cin >> action;
			}
			break;
		}
		case 2:
		{
			system("cls");
			"______________________________		EDITING-TASK		______________________________";
			try
			{
				list.editTask();
				break;
			}
			catch (int error)
			{
				cout << "Error: size of array eqials 0." << endl;
			}
			int action;
			cout << "\nEnter any symbol to back: ";
			cin >> action;
			break;
		}
		case 3:
		{
			system("cls");
			"______________________________		VIEWING-TASK		______________________________";
			try
			{
				list.getData();
			}
			catch (int error)
			{
				cout << "Error: size of array eqials 0." << endl;
			}
			int action;
			cout << "\nEnter any symbol to back: ";
			cin >> action;
			break;
		}
		case 4:
		{
			system("cls");
			"______________________________		DELETING-TASK		______________________________";
			try
			{
				list.deleteTask();
			}
			catch (int error)
			{
				cout << "Error: size of array eqials 0." << endl;
			}
			int action;
			cout << "\nEnter any symbol to back: ";
			cin >> action;
			break;
		}
		case 5:
		{
			exit(1);
		}
		default:
			break;
		}
	}
}