#include <iostream>

using namespace std;

struct studentType{
	string studentFName;
	string studentLName;
	int testscore;
	char grade;
};
void readData(studentType student[20]);
void gradecheck(studentType student[20]);
void print(studentType student[20]);
void highest(studentType student[20]);

int main(){
	studentType student[20];
	readData(student);
	gradecheck(student);
	print(student);
	highest(student);
}

void readData(studentType student[20]){
	cout << "Insert student's data" << endl << "first name last name score" << endl;
	for (int i = 0; i < 20; i++){
		
		cin >> student[i].studentFName >> student[i].studentLName >> student[i].testscore;
		cout << endl;
	}
}

void gradecheck(studentType student[20]){
	for (int i = 0; i < 20; i++){
		if (student[i].testscore <= 100 && student[i].testscore >= 81){
			student[i].grade = 'A';
		}else if(student[i].testscore <= 80 && student[i].testscore >= 66){
			student[i].grade = 'B';
		}else if(student[i].testscore <= 65 && student[i].testscore >= 51){
			student[i].grade = 'C';
		}else if(student[i].testscore <= 50 && student[i].testscore >= 46){
			student[i].grade = 'D';
		}else if(student[i].testscore <= 45 && student[i].testscore >= 0){
			student[i].grade = 'E';
		}
	}
}

void print(studentType student[20]){
	cout << endl << "Name\t\t\t TestScore\t Grade" << endl;
	for (int i = 0; i < 20; i++){
		cout << student[i].studentLName << ", " << student[i].studentFName 
		<< "\t\t" << student[i].testscore << "\t\t" << student[i].grade << endl;
	}
}

void highest(studentType student[20]){
	int highscore = 0;
	for (int i = 0; i < 20; i++){
		if (student[i].testscore > highscore){
			highscore = student[i].testscore;
		}
	}
	for (int i = 0; i < 20; i++){
		if(student[i].testscore == highscore){
		cout << endl << "Highest score: " << student[i].studentLName 
		<< ", " << student[i].studentFName << " = " << student[i].testscore;
		}	
	}
}
