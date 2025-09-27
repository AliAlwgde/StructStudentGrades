#include <iostream>

using namespace std;

// struct declaration with the types of variables being used
struct students{
    string name;
    int age;
    float grade;
};

void maxGrade(int number, students arr[]){
    float grade=arr[0].grade;
    string name=arr[0].name;
    for(int i=0; i<number; i++){
        if(grade<arr[i].grade){
            grade=arr[i].grade;
            name=arr[i].name;
        }
    }
    cout<<"The highest grade was "<<grade<<" for the student "<<name<<endl;
}

void minGrade(int number, students arr
]){
    float grade=arr[0].grade;
    string name=arr[0].name;
    for(int i=0; i<number; i++){
        if(grade>arr[i].grade){
            grade=arr[i].grade;
            name=arr[i].name;
        }
    }
    cout<<"The lowest grade was "<<grade<<" for the student "<<name<<endl;
}

void gradeAvg(int number, students arr[]){
    float avg=0;
    for(int i=0; i<number; i++){
        avg+=arr[i].grade;
    }
    avg=avg/number;
    cout<<"The average grade was "<<avg<<endl;
}

// function takes 1 parameter, which is the number of times the user wants the loop to run.
void userInput(int number, students arr[]){
    // data types are declared
    int x=0;
    // loop which runs only the number of times the user inputs
    for(int i=0;i<number; i++){
        cout<<"Please input student name: "<<endl;
        cin>>arr[i].name;
        cout<<"\nPlease input student age: "<<endl;
        cin>>arr[i].age;
        cout<<"\nPlease input student grade: "<<endl;
        cin>>arr[i].grade;
    }
    maxGrade(number, arr);
    minGrade(number, arr);
    gradeAvg(number, arr);
    cout<<"Process complete. Which student would you like to print out information for?"<<endl;
    cin>>x;
    while(1){
        if (x >= 0 && x < number) {
            cout << "Student name: " << arr[x].name
             << "\nStudent age: " << arr[x].age
             << "\nStudent grade: " << arr[x].grade << endl;
             break;
            }
    else{
        cout<<"Invalid input! Try again: "<<endl;
        cin>>x;
        }
    }
}

int main(){
    int n=0;
    cout<<"How many students would you like to input grades for? "<<endl;
    cin>>n;
    students arr[n];
    userInput(n, arr);
    return 0;
