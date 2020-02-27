#include<iostream>
#include<string>
using namespace std;
struct stuInfo {
	string name;
	string city;
	int age;
	string pass;
	string major;
	string courses[3] = { "N/A","N/A","N/A" };
}stu1;

void loginOptions();
void printInfo();
void courseList();
void welcomeMenu();

void viewCourses() 
{
	for (int i = 0; i < 3; i++)
		cout << i+1 << ")" << stu1.courses[i] << endl;
	loginOptions();
}

void loginOptions()
{
	char choice;
	if (stu1.courses[0] == "N/A" && stu1.courses[1] == "N/A" && stu1.courses[2] == "N/A")
	{
		cout << "You are not taking any courses. Would you like to register for courses now? (y/n)" << endl;
		cin >> choice;
		if (choice == 'y')
			courseList();
		else if (choice == 'n') {}

		else cout << "Please enter 'y' or 'n'!" << endl;
	}
	cout << "---------------------Welcome " << stu1.name << " --------------------------\n";
	cout << "What would you like to do? \n";
	cout << "1) View your courses\n2) Register in a course\n3) View your info\n4)Go back to main menu\n";
	int x;
	cin >> x;
	switch (x)
	{
	case 1: viewCourses(); break;
	case 2: courseList(); break;
	case 3: printInfo(); break;
	case 4: welcomeMenu(); break;
	}
}
	

void loginMenu()
{
	string tempName, tempPass;
	int tryormenu;
	cout << "Enter your name: \n";
	cin >> tempName;
	if (tempName == stu1.name)
	{
		cout << "Enter your password: \n";
		cin >> tempPass;
		if (tempPass == stu1.pass) loginOptions();
		else if (tempPass != stu1.pass)
		{
			cout << "Wrong password. Press \"1\" to try again or \"2\" to go back to the main menu.\n";
			cin >> tryormenu;
			switch (tryormenu)
			{
			case 1: loginMenu();
			case 2: welcomeMenu();
			}
		}
	}
	else if (tempName != stu1.name)
	{
		cout << "Your name is not registered. Press \"1\" to try again or \"2\" to go back to the main menu.\n";
		cin >> tryormenu;
		switch (tryormenu) 
		{
		case 1: loginMenu();
		case 2: welcomeMenu();
		}
	}


}

void printInfo()
{
	cout << "Hello, " << stu1.name << "\n" << "You are " << stu1.age << " years old and you're from " << stu1.city << "\n";
	cout << "You are currently studying: " << stu1.major << "\n";
	cout << "You are enrolled in these classes: \n";
	for (int i = 0; i < 3; i++)
		cout << i+1 << ")"<< stu1.courses[i]<<endl;


}


void majorList()
{
	
	cout << "--------------Available courses-----------\n";
	cout << "1)Computer Science\n2)Medicine\n3)Psychology\n4)Civil Engineering\n5)Business\n";
		int x;
		cin >> x;
	switch(x)
	{
	case 1: stu1.major = "Computer Science";
		cout << "You have enrolled in Computer Science!\n";
		break;
	case 2: stu1.major = "Medicine";
		cout << "Medicine is a bad major, but it's your life after all.\n";
		break;
	case 3:	stu1.major = "Psychology";
		cout << "You have enrolled in Psychology!\n";
		break;
	case 4: stu1.major = "Civil Engineering";
		cout << "You have enrolled in Civil Engineering!\n";
	case 5: stu1.major = "Business";
		cout << "You have enrolled in Business!\n";
	}

}

void courseList()
{
	int choice,x;
	cout << "These are the available courses, you can choose up to 3 courses!\n";
	if (stu1.major == "Computer Science")
	{
		cout << "1)CS101.\n2)Algorithms.\n3)Cyber Security.\n4)Data Structure.\n";
		
		for (int i = 0; i <= 2; i++) 
		{	
			cin >> choice;
			if (choice == 1) 
			{
				cout << "You are now taking CS101!\n";
				stu1.courses[i] = "Computer Science";
			}
			else if (choice == 2)
			{
				cout << "You are now taking Algorithms!\n";
				stu1.courses[i] = "Algorithms";
			}
			else if (choice == 3)
			{
				cout << "You are now taking Cyber Security!\n";
				stu1.courses[i] = "Cyber Security";
			}
			else if (choice == 4)
			{
				cout << "You are now taking Data Structure!\n";
				stu1.courses[i] = "Data Structure";
			}
			else cout << "Enter a number.\n";
			
			if (i == 2) break;

			cout << "1) Register for another course\n2) Go back to main menu.\n";
			cin >> x;
			if (x == 1) continue;
			else if (x == 2) welcomeMenu();

		}


		
		
		
	}
	else if (stu1.major == "Medicine")
	{
		cout << "1)Biology101.\n2)Physics101.\n3)Chemistry101.\n4)Biochemistry.\n";
		for (int i = 0; i < 2; i++)
		{
			cin >> choice;
			if (choice == 1)
			{
				cout << "You are now taking Biology101!\n";
				stu1.courses[i] = "Biology101";
			}
			else if (choice == 2)
			{
				cout << "You are now taking Physics101!\n";
				stu1.courses[i] = "Physics101";
			}
			else if (choice == 3)
			{
				cout << "You are now taking Chemistry101!\n";
				stu1.courses[i] = "Chemistry101";
			}
			else if (choice == 4)
			{
				cout << "You are now taking Biochemistry!\n";
				stu1.courses[i] = "Biochemistry";
			}
			cout << "1) Register for another course\n2) Go back to main menu.\n";
			cin >> x;
			if (x == 1) continue;
			else if (x == 2) welcomeMenu();
		}
	}
	else if (stu1.major == "Psychology")
	{
		cout << "1)Sociology.\n2)Criminal Justice.\n3)Communications.\n4)Social Psychology.\n";
		for (int i = 0; i < 2; i++)
		{
			cin >> choice;
			if (choice == 1)
			{
				cout << "You are now taking Sociology!\n";
				stu1.courses[i] = "Sociology";
			}
			else if (choice == 2)
			{
				cout << "You are now taking Criminal Justice!\n";
				stu1.courses[i] = "Criminal Justice";
			}
			else if (choice == 3)
			{
				cout << "You are now taking Communications!\n";
				stu1.courses[i] = "Communications";
			}
			else if (choice == 4)
			{
				cout << "You are now taking Social Psychology!\n";
				stu1.courses[i] = "Social Psychology";
			}
			else cout << "Enter a proper number\n";
			cout << "1) Register for another course\n2) Go back to main menu.\n";
			cin >> x;
			if (x == 1) continue;
			else if (x == 2) welcomeMenu();
		}
		
	}
	else if (stu1.major == "Civil Engineering")
	{
		cout << "1)Introduction to Civil Engineering.\n2)Structural analysis.\n3)Materials engineering.\n4)Geotechnical engineering.\n";
		for (int i = 0; i < 2; i++)
		{
			cin >> choice;
			if (choice == 1)
			{
				cout << "You are now taking Biology101!\n";
				stu1.courses[i] = "Biology101";
			}
			else if (choice == 2)
			{
				cout << "You are now taking Physics101!\n";
				stu1.courses[i] = "Physics101";
			}
			else if (choice == 3)
			{
				cout << "You are now taking Chemistry101!\n";
				stu1.courses[i] = "Chemistry101";
			}
			else if (choice == 4)
			{
				cout << "You are now taking Biochemistry!\n";
				stu1.courses[i] = "Biochemistry";
			}
			else cout << "Enter a proper number.\n";

			cout << "1) Register for another course\n2) Go back to main menu.\n";
			cin >> x;
			if (x == 1) continue;
			else if (x == 2) welcomeMenu();
		}
	}
	else if (stu1.major == "Business")
	{
		cout << "1)Accounting.\n2)Marketing.\n3)Writing and composition.\n4)Economics.\n";
		for (int i = 0; i < 2; i++)
		{
			cin >> choice;
			if (choice == 1)
			{
				cout << "You are now taking Accounting!\n";
				stu1.courses[i] = "Accounting";
			}
			else if (choice == 2)
			{
				cout << "You are now taking Marketing!\n";
				stu1.courses[i] = "Marketing";
			}
			else if (choice == 3)
			{
				cout << "You are now taking Writing and composition!\n";
				stu1.courses[i] = "Writing and composition";
			}
			else if (choice == 4)
			{
				cout << "You are now taking Economics!\n";
				stu1.courses[i] = "Economics";
			}
			else cout << "Enter a proper number.\n";

			cout << "1) Register for another course\n2) Go back to main menu.\n";
			cin >> x;
			if (x == 1) continue;
			else if (x == 2) welcomeMenu();
		}
	}
}


void registerStudent() 
{
	string tempName;
	cout << "Enter your first name: "<<endl;
	cin >> tempName;
	if (tempName == stu1.name) //checks if the user is already registered 
	{ 
		cout << "You are already registered!\n" << endl;
		welcomeMenu();
	}
	else
		stu1.name = tempName; //if the user is not registered, give the entered name to stu1.name
	cout << "In which city do you live?" << endl;
	cin >> stu1.city;
	cout << "How old are you?" << endl;
	cin >> stu1.age;
	cout << "Enter a password." << endl;
	cin >> stu1.pass;
	cout << "What would you like to study?" << endl;
	majorList();
	cout << "You are now registered, thank you " << stu1.name << "!" << endl;
	welcomeMenu();
	

}

void welcomeMenu()
{
	cout << "				Welcome to Student Services!			" << endl;
	cout << "\nWhat do you want to do? (Enter the number of the option)\n" << endl;
	cout << "1) Register as a new student.\n2)Login as a current student\n";
	int x;
	cin >> x;

	switch (x)
	{
	case 1: registerStudent();
		break;

	case 2: loginMenu(); break;

	default: cout << "Please enter a correct number!\n\n";
		welcomeMenu();
		break;
		


	}

}


int main() {

	welcomeMenu();

	return 0;
}

