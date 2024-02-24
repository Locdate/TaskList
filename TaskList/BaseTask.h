#pragma once
#include <string>
using namespace std;

class Task
{
public:
	Task(string _name, string _description, int _levelOfImportant) : name(_name), description(_description), levelOfImportant(_levelOfImportant)
	{
		if (sizeof(name) != sizeof(_name) || sizeof(description) != sizeof(_description) || sizeof(levelOfImportant) != sizeof(_levelOfImportant))
		{
			throw 5;
		}
	}
	void getData()
	{
		cout << "Name of task: \n" << name << endl << endl << "Description of task: \n" << description << endl << endl << "Level of important: \n" << levelOfImportant << endl;
	}
	void resetName(string _name)
	{
		name.clear();
		name = _name;
	}
	void resetDescription(string _description)
	{
		description = _description;
	}
	void resetLevelOfImportant(int _levelOfImportant)
	{
		levelOfImportant = _levelOfImportant;
	}
	string getName()
	{
		return name;
	}
	string getDescription()
	{
		return description;
	}
	int getLevelOfImportant()
	{
		return levelOfImportant;
	}
private:
	string	name, description;
	int		levelOfImportant;
};
