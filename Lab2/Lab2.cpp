#include <iostream>
#include <vector>
#include <string>
using namespace std;

void GradeConverter(){
    int grade;
    cout << "Please input the grade:" << endl;
    cin >> grade;

// if statement for each grade bracket
    if (grade >= 0 && grade <= 59)
    {
        cout << 'F'<< endl;
    }
    else if (grade <= 69)
    {
        cout << 'D' << endl;
    }
    else if (grade <= 79)
    {
        cout << 'C' << endl;
    }
    else if (grade <= 89)
    {
        cout << 'B' << endl;
    } 
    else if (grade <= 100)
    {
        cout << 'A' << endl;
    }
    else if(grade < 0 || grade > 100)  // error catching invalid input
    {
        cout << "Invalid input. Input range 0 - 100.\n";
    }
            
    
}

class Box
{
public:
    int length, width, height; //create 
    
    void AddBox();
};

void Box::AddBox(){
    vector<int> box_1, box_2, NewBox;

// Get Dimension From User Input
    cout << "Inputting dimension of box 1:" << endl;
    cout << "Length:" << endl;
    cin >> length;
    box_1.push_back(length);
    cout << "Width:" << endl;
    cin >> width;
    box_1.push_back(width);
    cout << "Height:" << endl;
    cin >> height;
    box_1.push_back(height);

    cout << "Inputting dimension of box 2:" << endl;
    cout << "Length:" << endl;
    cin >> length;
    box_2.push_back(length);
    cout << "Width:" << endl;
    cin >> width;
    box_2.push_back(width);
    cout << "Height:" << endl;
    cin >> height;
    box_2.push_back(height);

// Add Box Dimensions
    for (int i = 0; i <= 1; i++){ // for loop to determin the L and W of the new box
            if (box_1.at(i) > box_2.at(i))
            {
                NewBox.push_back(box_1.at(i));
            }else{
                NewBox.push_back(box_2.at(i));
            }
        }
    int newHeight = box_1.at(2) + box_2.at(2); // addition of the H of the new box
    NewBox.push_back(newHeight);

// Output New Dimension
    cout << "The new dimension is: " << endl;
    cout << "Length\tWidth\tHeight" << endl;
    for (int i = 0; i < 3; i++) // cout LWH by interating through the vector
    {
        std::cout << NewBox.at(i) << "\t\n";
    }
}

bool Palindrome(){
    string str;
    cout << "Please enter your text:\n";
    cin >> str;
    for (int i = 0; i < str.length() / 2 ; i++) //iterate i till half way through the string
    {
        if (str[i] != str[str.length()- i - 1]) // compare each element of the string to its positional counter part
        {
            return false;
        }
        return true;
    }
}


int main(){
    GradeConverter();

    Box NewBox;
    NewBox.AddBox();

    cout << Palindrome();
    return 0;
}