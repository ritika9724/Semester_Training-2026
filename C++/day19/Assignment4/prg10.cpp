// We want to calculate the total marks of each student of a class in Physics,Chemistry and
// Mathematics and the average marks of the class. The number of students in the class are
// entered by the user. Create a class named Marks with data members for roll number, name
// and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry
// and Mathematics, which are used to define marks in individual subject of each student. Roll
// number of each student will be generated automatically.

#include<iostream>
using namespace std;

class marks{
    public:
    static int count;
    int roll_no;
    string name;

    void setMarks(string n){
        roll_no = ++count;
        name = n;
    }

    void displayMarks(){
        cout<<"Enter Roll_no : "<<roll_no<<endl;
        cout<<"Enter Name : "<<name<<endl;
    }
};
int marks::count = 0;

class physics : public marks{
    public:
    int physics_marks;

    void setPhysics(int phy_marks){
        physics_marks = phy_marks;
    }

    void displayPhysics(){
        cout<<"Physics_Marks : "<<physics_marks<<endl;
    }
};

class chemistry : public marks{
    public:
    int chemistry_marks;

    void setChemistry(int ch_marks){
        chemistry_marks = ch_marks;
    }

    void displayChemistry(){
        cout<<"Chemistry_Marks : "<<chemistry_marks<<endl;
    }
};

class mathematics : public marks{
    public:
    int mathematics_marks;

    void setMathematics(int maths_marks){
        mathematics_marks = maths_marks;
    }

    void displayMathematics(){
        cout<<"Mathematics_Marks : "<<mathematics_marks<<endl;
    }
};

// int main(){
//     marks s;
//     physics p;
//     chemistry c;
//     mathematics m;

//     s.setMarks("Ritika");
//     p.setPhysics(96);
//     c.setChemistry(90);
//     m.setMathematics(95);

//     s.displayMarks();
//     p.displayPhysics();
//     c.displayChemistry();
//     m.displayMathematics();

//     return 0;
// }




int main(){

    int n;
    cout << "Enter Number of Students : ";
    cin >> n;

    for(int i=0; i<n; i++){

        string name;
        int phy, chem, maths;

        cout << "\nEnter Student Name : ";
        cin >> name;

        physics p;
        chemistry c;
        mathematics m;

        p.setMarks(name);

        cout << "Enter Physics Marks : ";
        cin >> phy;
        p.setPhysics(phy);

        cout << "Enter Chemistry Marks : ";
        cin >> chem;
        c.setChemistry(chem);

        cout << "Enter Mathematics Marks : ";
        cin >> maths;
        m.setMathematics(maths);

        int total = phy + chem + maths;
        float average = total / 3.0;

        cout<<endl;

        cout << "\n------ Student Details ------" << endl;
        p.displayMarks();
        p.displayPhysics();
        c.displayChemistry();
        m.displayMathematics();

        cout << "Total Marks : " << total << endl;
        cout << "Average Marks : " << average << endl;
    }

    return 0;
}