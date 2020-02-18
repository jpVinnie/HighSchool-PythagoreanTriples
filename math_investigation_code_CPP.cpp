/*Math Investigation >> Pythagorean Triples in the Pascal Triangle
This code was created for the purpose of executing a math investigation being made by the author. It is entirely made in C++
and creates an interactable user-friendly Pascal Triangle to demonstrate the discovery in the investigation.

Author: Jan-Paul V. Ramos
Date: February 2020

Copyright 2020, Jan-Paul V. Ramos, All rights reserved.*/

#include <iostream>
using namespace std;

int main()
{
	// Explanation of investigation
    cout << " " << endl;
    cout << "This is a Pascal Triangle, a triangular array of the binomial coefficients." << endl; // Explanation
    cout << "The colored diagonal line highlights a diagonal that is known as the Triangular Number series," << endl; // Explanation
    cout << "which can be expressed in the formula n(n+1)/2, or the corresponding binomial coefficient." << endl; // Explanation
    cout << " " << endl;

    // Pascal Triangle
    int rows, integer = 1;

    cout << "Please enter the number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
		for(int space = 1; space <= rows-i; space++)
            cout << "  ";
        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                integer = 1;
            else
                integer = integer * (i-j + 1)/j;
            cout << integer << "   ";
        }
        cout << endl;
    }

    // Converting choices into Pythagorean Triple
    //int num;
    int row;
    int row_double;

    cout << "" << endl;
    cout << "Remember that we will start with the first row being 0";
    cout << "" << endl;
    cout << "Input the row (horizontal line) you wish to find the Pythagorean Triple from: ";
    cin >> row; // Geting user input for row
    row_double = 2 * row; // Declaring doubke amount of the row

    // {a,b,c} Pythagorean Triple
    int a = (2 * (row + 1)) -3;
    int b = row_double * (row - 1);
    int c = (row_double * (row - 1)) + 1;

    cout << "Your Pythagorean Triple is: " <<"{"<<a <<","<< b <<","<< c<<"}" << endl;
    cout << " " << endl;

    // Explaining wtf just happened part of the code
    cout << "Now how did we just get our Pythagorean Triple? This is what happened..." << endl;
    cout << "As explained earlier, notice that in the row you chose (the " << row << "row)" << endl;
    cout << "the second element is a number in the sum of n-integers sequence." << endl;    
    cout << " ";
    cout << "It is known that in this sequence you can find any Pythagorean Triple," << endl;
    cout << "evidenced by the fact that there exists a specific set of b's in which" << endl;
    cout << "said variable is a multiple from an n integer in the sum of n-integers sequence." << endl;
    cout << "Using this knowledge, I converted the known way of finding the Pythagorean Triples" << endl;
    cout << "into valid formulas to find these variables only using the row in the Pascal Triangle" << endl;
    cout << "in which we find the n integer from the said sequence." << endl;
    cout << " ";
    cout << "The mathematical proof can be found in the followink link: " << endl;
    cout << "https://github.com/jpVinnie/Pythagorean-Triples-in-the-Pascal-Triangle" << endl;

    // Answer to repeat finding or not
    string answer;

    cout << " " << endl;
    cout << "Would you like to get another Pythagorean Triple? Type \"Y\" or \"N\": ";
    cin >> answer;

    // Answer No
    if(answer == "N")
    {
      cout << "That\'s all!";
    }
    // Answer anything else
    else if(answer != "Y" && answer != "N")
    {
        
        cout << "Error Try Again: ";
        cin >> answer;

        while(answer != "Y" && answer != "N")
        {
            cout << "Error Try Again: ";
            cin >> answer;
        }
    }
    // Answer Yes
    while(answer == "Y")
    {
        int rows, integer = 1;

        cout << "Please enter the number of rows: ";
        cin >> rows;

        for(int i = 0; i < rows; i++)
        {
		    for(int space = 1; space <= rows-i; space++)
                cout <<"  ";
            for(int j = 0; j <= i; j++)
            {
                if (j == 0 || i == 0)
                    integer = 1;
                else
                    integer = integer * (i-j + 1)/j;
                cout << integer << "   ";
            }
            cout << endl;
        }

        int row;
        int row_double;

        cout << "" << endl;
        cout << "Remember that we will start with the first row being 0." << endl;
        cout << "Input the row (horizontal line) you wish to find the Pythagorean Triple from: ";
        cin >> row; 
        row_double = 2 * row; 

        // {a,b,c} Pythagorean Triple
        int a = (2 * (row + 1)) -3;
        int b = row_double * (row - 1);
        int c = (row_double * (row - 1)) + 1;

        cout << "Your Pythagorean Triple is: " <<"{"<<a <<","<< b <<","<< c<<"}";

        cout << "" << endl;
        cout << "" << endl;

        cout << "Would you like to find another Triple?: ";

        cin >> answer;
        
        if(answer == "N")
        {
            cout << "That\'s all!";
        }
        else if(answer != "Y" && answer != "N")
        {
            cout << "Error Try Again: ";
            cin >> answer;

            while(answer != "Y" && answer != "N")
            {
                cout << "Error Try Again: ";
                cin >> answer;
            }
        }
    }
    return 0;
}