#pragma once
#include <iostream>
#include <vector>
#include "BaseTask.h"
using namespace std;

class TaskManager
{
public:
	void addTask(string name, string description, int levelOfImportant)
	{
		list.push_back(Task(name, description, levelOfImportant));
	}
	void getData()
	{
		if (list.size() == 0)
		{
			throw 4;
		}
		getDataList();
		int action;
		cout << "Enter number of task (started by 0): ";
		cin >> action;
		system("cls");
		list[action].getData();
	}
	void deleteTask()
	{
		if (list.size() == 0)
		{
			throw 4;
		}
		int action;
		getDataList();
		cout << "Enter number of task (started by 0): ";
		cin >> action;
		list.erase(list.begin() + action);
	}
	void editTask()
	{
		if (list.size() == 0)
		{
			throw 4;
		}
		int action, editAction;
		getDataList();
		cout << "Enter number of task (started by 0): ";
		cin >> action;
		system("cls");
		list[action].getData();
		cout << "\n1 - edit name \n2 - edit description \n3 - edit level of important \nenter action: ";
		cin >> editAction;
		switch (editAction)
		{
		case 1:
		{
			cout << "Enter new name: ";
			string temp;
			cin >> temp;
			if (sizeof(temp) != sizeof(list[action].getName()))
			{
				throw 1;
			}
			list[action].resetName(temp);
			break;
		}
		case 2:
		{
			cout << "Enter new description: ";
			string temp;
			cin >> temp;
			if (sizeof(temp) != sizeof(list[action].getDescription()))
			{
				throw 2;
			}
			list[action].resetDescription(temp);
			break;
		}
		case 3:
		{
			cout << "Enter new level of important: ";
			int temp;
			cin >> temp;
			if (sizeof(temp) != sizeof(list[action].getLevelOfImportant()))
			{
				throw 3;
			}
			list[editAction].resetLevelOfImportant(temp);
			break;
		}
		default:
			break;
		}
	}
	void getDataList()
	{
		for (size_t i = 0; i < list.size(); i++)
		{
			cout << i << ". " << list[i].getName() << endl;
		}
	}
private:
	vector<Task> list;
};