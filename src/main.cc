/**
* CS V15 Data Structures and Algorithms
* CRN: ????
* Assignment: Binary Search
*
* Statement of code ownership: I hereby state that I have written all of this
* code and I have not copied this code from any other person or source.
*
* @author Matthew Sandstrom
*/
#include <iostream>
#include "binarysearch.h"
#include "slowbinsearch.h"

using edu::vcccd::vc::csv15::binarysearch;
using edu::vcccd::vc::csv15::slowbinsearch;
using std::cout;
using std::endl;
int main(int argc, char *argv[]) {
	int array[]{ 5, 8, 4, 2, 6, 9, 2, 3 };
	int64_t index = binarysearch(8, array, 9);

	cout << "The value is " << index << " was found for recursive binary search" << endl;
	
	int64_t index2 = slowbinsearch(8, array, 9);
	cout << "The value is " << index2 << " was found for iterative binary search" << endl;
}