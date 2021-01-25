#include <iostream>
using namespace std;

struct Worker
{
	char surname[30];
	char name[30];
	char position[30];
	int year;
};

void print(const int& n, Worker  human[3]);
void  alph_sort(const int& n, Worker  human[]);
void experience(const int& n, Worker  human[3]);
void MenuCrud();
void Add(Worker  human[3], const int& n);
void Search(const int& n, Worker  human[3]);
void Update(const int& n, Worker  human[3]);
void Delete(const int& n, Worker  human[3]);


int main()
{
	const int n = 3;
	Worker human[n];

	print(n, human);
	alph_sort(n, human);
	experience(n, human);

	MenuCrud();
	int choice;
	cout << "Enter choice";
	cin >> choice;
	switch (choice)
	{
	case 1: Add(human, n); break;
	case 2: Search(n, human); break;
	case 3: Update(n, human); break;
	case 4: Delete(n, human); break;
	}

	return 0;
}
void print(const int& n, Worker  human[3])
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << "." << "Enter a surname: " << endl;
		cin >> human[i].surname;
		while (true)
		{
			if (isdigit(*human[i].surname)) {
				cin.clear();
				cin.ignore(200, '\n');
				cout << "You have entered wrong input" << endl << "Enter a Surname";
				cin >> human[i].surname;
			}
			else
			{
				break;
			}
		}
		cout << i + 1 << "Enter a name: " << endl;
		cin >> human[i].name;
		while (true)
		{
			if (isdigit(*human[i].name)) {
				cin.clear();
				cin.ignore(200, '\n');
				cout << "You have entered wrong input" << endl << "Enter a Name";
				cin >> human[i].name;
			}
			else
			{
				break;
			}
		}
		cout << i + 1 << "Enter a position: " << endl;
		cin >> human[i].position;
		while (true)
		{
			if (isdigit(*human[i].position)) {
				cin.clear();
				cin.ignore(200, '\n');
				cout << "You have entered wrong input" << endl << "Enter a position";
				cin >> human[i].position;
			}
			else
			{
				break;
			}
		}
		cout << i + 1 << "Enter year: " << endl;
		cin >> human[i].year;
	}

	for (int i = 0; i < n; i++)
	{
		cout << human[i].surname << " " << human[i].name << endl;
	}
}
void alph_sort(const int& n, Worker  human[])
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (strcmp(human[i].surname, human[j].surname) > 0)
			{
				swap(human[i], human[j]);
			}
		}
	}

}
void experience(const int& n, Worker  human[3])
{
	int experience;
	const int currentYear = 2020;
	int counter = 0;
	cout << endl << "Enter a experience: ";
	cin >> experience;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (experience < currentYear - human[i].year)
		{
			cout << human[i].surname << " ";
			counter++;
		}
		else
			if (i == n - 1 && counter > 0)
				cout << "No employees with extensive experience.";
	}
}

void MenuCrud()
{
	cout << endl;
	cout << "1 - Add a person" << endl;
	cout << "2 - Search a person" << endl;
	cout << "3 - Update the information" << endl;
	cout << "4 - Delete a person" << endl;
}
void Add(Worker  human[3], const int& n)
{
	int num;
	cout << endl;
	cout << "How many people you'd like to add?";
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cout << "Enter a surname";
		cin >> human[i].surname;
		while (true)
		{
			if (isdigit(*human[i].surname))
			{
				cin.clear();
				cin.ignore(200, '\n');
				cout << "You have entered wrong input" << endl << "Enter a surname";
				cin >> human[i].surname;
			}
			else
			{
				break;
			}
		}
		cout << "Enter a name";
		cin >> human[i].name;
		while (1)
		{
			if (isdigit(*human[i].name))
			{
				cin.clear();
				cin.ignore(200, '\n');
				cout << "You have entered wrong input" << endl << "Enter a name";
				cin >> human[i].name;
			}
			else
			{
				break;
			}
		}
		cout << "Enter a position";
		cin >> human[i].position;
		while (1)
		{
			if (isdigit(*human[i].position))
			{
				cin.clear();
				cin.ignore(200, '\n');
				cout << "You have entered wrong input" << endl << "Enter a position";
				cin >> human[i].position;
			}
			else
			{
				break;
			}
		}
		cout << i + 1 << "." << "Enter year";
		cin >> human[i].year;
	}
	for (int i = 0; i < n + 1; i++)
	{
		cout << "Surname " << human[i].surname << endl;
		cout << "Name " << human[i].name << endl;
		cout << "Position " << human[i].position << endl;
		cout << "Year " << human[i].year << endl;
	}
}
void Search(const int& n, Worker  human[3])
{
	char p[10];
	cout << endl;
	cout << "Enter a surname";
	cin >> p;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (p == human[i].surname) {
			cout << human[i].surname << endl;
			cout << human[i].name << endl;
			cout << human[i].position << endl;
			cout << human[i].year << endl;
			count++;
		}
		if (count == 0)
		{
			cout << "There id no such person!";
		}
	}
}
void Update(const int& n, Worker  human[3])
{
	int m;
	cout << endl;
	cout << "Which person do you want to update?" << endl;
	cout << "Enter a number";
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		human[i].surname;
		human[i].name;
		human[i].position;
		human[i].year;
		if (i + 1 == m)
		{
			cout << "What exactly do you want to change?";
			cout << "1 - Surname";
			cout << "2 - Name";
			cout << "3 - Position";
			cout << "4 - Year";
			int choice;
			cout << "Enter a choice";
			cin >> choice;
			switch (choice)
			{
			case 1:
			{
				cout << i + 1 << "." << "Enter a surname";
				cin >> human[i].surname;
				while (true)
				{
					if (isdigit(*human[i].surname))
					{
						cin.clear();
						cin.ignore(200, '\n');
						cout << "You have entered wrong input" << endl << "Enter a surname";
						cin >> human[i].surname;
					}
					else
					{
						break;
					}
				}
			} break;
			case 2:
			{
				cout << i + 1 << "." << "Enter a name";
				cin >> human[i].name;
				while (1)
				{
					if (isdigit(*human[i].name))
					{
						cin.clear();
						cin.ignore(200, '\n');
						cout << "You have entered wrong input" << endl << "Enter a name";
						cin >> human[i].name;
					}
					else
					{
						break;
					}
				}
			} break;
			case 3:
			{
				cout << i + 1 << "." << "Enter a position";
				cin >> human[i].position;
				while (1)
				{
					if (isdigit(*human[i].position))
					{
						cin.clear();
						cin.ignore(200, '\n');
						cout << "You have entered wrong input" << endl << "Enter a position";
						cin >> human[i].position;
					}
					else
					{
						break;
					}
				}
			}break;
			case 4:
			{
				cout << i + 1 << "." << "Enter year";
				cin >> human[i].year;
			}break;
			}
		}
		cout << "surname " << human[i].surname << endl;
		cout << "name " << human[i].name << endl;
		cout << "position " << human[i].position << endl;
		cout << "year " << human[i].year << endl;
		cout << endl;
	}
}
void Delete(const int& n, Worker  human[3])
{
	char m[10];
	cout << endl;
	cout << "Enter a surname of a person you want to delete?";
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		cout << "surname " << human[i].surname << endl;
		cout << "name " << human[i].name << endl;
		cout << "position " << human[i].position << endl;
		cout << "year" << human[i].year << endl;

	}
}