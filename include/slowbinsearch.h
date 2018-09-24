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
#include <cstdint>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

	//finding value, array and size of the array (x)
	int slowbinsearch(int value, int array[], int x) {
		int left = 0; 
		int right = x-1;
		while (left <= right) {
			int guess = (left + right) / 2;

			if (array[guess] == value) {
				return guess;
			} else if (array[guess] > value) {
				right = guess - 1;
			} else if (array[guess] < value) {
				left = guess + 1;
			}
		}
		return -1;
	}
}}}}
