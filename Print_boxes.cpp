/***********************************************************
 * Print_boxes.cpp -- program to print out formated boxes *
 * Not an especially earth-shattering program. *
 * *
 * Author: Cesar Gutierrez *
 * *
 * Purpose: Practice C++ programming *
 * *
 * Usage: *
 * Run the program and type the size of the boxes matrix *
 * Recommended starting with low numbers ie. 3x3 *
 ***********************************************************/

#include <iostream>

using namespace std;

/*******************************************
* plus_row  -- creates a header row fro the box *
* *
* Parameters *
* max_col -- Number of colums of boxes *
* *
* Returns *
* none*
*******************************************/

void plus_row(int *max_col) {
	for (int col = 0; col < *max_col; ++col) {
		cout << "+";
		int dashes = 0;
		while (dashes <= 5) {
			cout << "-";
			++dashes;
		}
	}
	cout << "+";
}

/*******************************************
* white_row  -- creates the boxes body row*
* *
* Parameters *
* max_col -- Number of boxes' colums*
* *
* Returns *
* none*
*******************************************/

void white_row(int *max_col) {
	for (int col = 0; col < *max_col; ++col) {
		cout << "|";
		int whites = 0;
		while (whites <= 5) {
			cout << " ";
			++whites;
		}
	}
	cout << "|";
}

int main() {

	int lim_rows, lim_cols; // Defines the size of the print (rows and columns)
	cout << "Introduce the number of rows to print: ";
	cin >> lim_rows;
	cout << "Introduce the number of columns to print: ";
	cin >> lim_cols;

	int big_rows = 1;			// Counts number of repeated boxes
	plus_row(&lim_cols);		// Prints the firts line on +-- of the program

	// Limit of repeated boxes
	while (big_rows <= lim_rows) {		

		cout << "\n";
		// Loop to create each box line by line
		for (int i = 0; i < 3; ++i) {
			white_row(&lim_cols);	// Body of the boxes
			cout << "\n";
		}
		plus_row(&lim_cols);
		++big_rows;
	}	
}