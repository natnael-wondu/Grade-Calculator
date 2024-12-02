#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(){
	string courseGrade ;
	double numberOfCourse, gradePoint, courseValue, creditHour;
	double totalCredits, totalGradePoints, overallGrade;
	bool invalidGrade;
	bool calculateAgain = true;
	
	while (calculateAgain){ //to prompt the user to calculate again
		cout << "enter number of courses you take ";
		cin >> numberOfCourse;
		cout << "\n enter your grade and its credit hour (like: \"A+ 5\") for:";
		
		for (int i=1; i <= numberOfCourse; i++ ){
			
			do{//to get a valid grade of each course
			    invalidGrade = false;			
				cout << "\n    course " << i << ": ";
				cin.ignore();
				gradePoint = 0; // to reset the value for the 
				courseValue = 0;

				cin >> courseGrade ;
				cin >> creditHour;

				if (courseGrade  == "A+"|| courseGrade  == "a+"){
					gradePoint = 4;
				}
				else if (courseGrade  == "A"|| courseGrade  == "a"){
					gradePoint = 4;
				}
				else if (courseGrade  == "A-"|| courseGrade  == "a-"){
					gradePoint = 3.75;
				}
				else if (courseGrade  == "B+"|| courseGrade  == "b+"){
					gradePoint = 3.5;
				}
				else if (courseGrade  == "B"|| courseGrade  == "b"){
					gradePoint = 3;
				}
				else if (courseGrade  == "B-"|| courseGrade  == "b-"){
					gradePoint = 2.75;
				}
				else if (courseGrade  == "C+"|| courseGrade  == "c+"){
					gradePoint = 2.5;
				}
				else if (courseGrade  == "C"|| courseGrade  == "c"){
					gradePoint = 2;
				}
				else if (courseGrade  == "C-"|| courseGrade  == "c-"){
					gradePoint = 1.75;
				}
				else if (courseGrade  == "D"|| courseGrade  == "d"){
					gradePoint = 1;
				}else if (courseGrade  == "F"|| courseGrade  == "f"){
					gradePoint = 0;
				}
				else{
					invalidGrade = true;
					cout << "the grade you entered is invalid!";
				}	

			} while (invalidGrade);

			courseValue = gradePoint * creditHour;
			totalGradePoints += courseValue;
			totalCredits += creditHour;	
		} 
	overallGrade = totalGradePoints / totalCredits;

	cout << "    _____________";
	cout << "\n    your GPA: " << overallGrade << endl;

	char reCalculate;
	cout << "Calculate again? (Y/N) ";
	cin >> reCalculate;
	if (reCalculate != 'Y' && reCalculate != 'y')
		calculateAgain = false;
	}
	
	return 0;
}