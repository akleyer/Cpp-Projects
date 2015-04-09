
#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int index = 0, sum = 0, counter = 0;
    double grades[5], numGrades = 5, average = 0, weighted_average = 0, final = 0,
	limit = 0,  class_average = 0;
    double classavg[20];
    string firstname, lastname;
    const float w1 = .10, w2 = .25, w3 = .30;
    char letter;
    

    cout << "Please enter the number of students: ";
    cin >> limit;
    

    while(counter < limit)
    {
        average = 0; weighted_average = 0,
        

        cout << "Enter the first and last name of the student separated by a space." << endl;
        cin >> firstname >> lastname;
        cout << "Enter the student's first grade\n";
        

        for (index = 0; index < numGrades ; index++)
        {
            cin >> grades[index];
            if (index < numGrades-1)
                cout << "Please input the next number.\n";
        } //end for loop
        
        for (index = 0; index < numGrades ; index++)
        {
            average = average + grades[index];
        } //end for loop
        average = average / numGrades;

        weighted_average = (grades[0] * w1) + (grades[1] * w3) + (grades[2] * w1) + (grades[3] * w2) + (grades[4] * w2);

        if (weighted_average > average){
        final = weighted_average;
            classavg[counter] = weighted_average;
        }
        else {
            final = average;
            classavg[counter] = average;
        }

        if (final >= 90)
            letter = 'A';
        else if (final >= 80)
            letter = 'B';
        else if (final >= 70)
            letter = 'C';
        else if (final >= 60)
            letter = 'D';
        else letter = 'F';
       
        cout << "The student's name is " << firstname << " " << lastname << endl;
        cout << "The original five grades were."<<endl;
        cout << "Grade 1 = " << grades[0] << endl;
        cout << "Grade 2 = " << grades[1] << endl;
        cout << "Grade 3 = " << grades[2] << endl;
        cout << "Grade 4 = " << grades[3] << endl;
        cout << "Grade 5 = " << grades[4] << endl;
        cout << endl << "The average of the five grades are: " << average << endl;
        cout << "The weighted average of the five grades are: " << weighted_average << endl;
        cout << "The letter grade is: " << letter << endl;
        
        switch(letter)
        {
            case'A':
                cout << "Great job!\n";
                break;
            case'B':
                cout << "Not too bad!\n";
                break;
            case'C':
                cout << "Could have done better!\n";
                break;
            case'D':
                cout << "Need to work harder!\n";
                break;
            case'F':
                cout << "Need to take the class again!\n" << endl;
                break;
        } //end switch

        counter++;
        cout << endl;

    } //end While loop 
    
    sum = 0;
    for(index = 0; index < limit ; index++)
        sum = sum + classavg[index];
    class_average = sum/limit;
	cout << "The class average is: " << class_average << endl;
  
    system("pause");
    return 0;
}
