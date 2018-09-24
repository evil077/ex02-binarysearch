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
	template <class binsearch>
	int64_t binarysearch(const binsearch& value, binsearch array[], size_t x) {
/*		if (array == NULL) return -1;
		if (size == 0) {
			return -1;
		}
		int guess = size / 2;
		if (array[guess] == value) {
			return guess;
		}
		else if (array[guess] > value) {
			return binarysearch(value, array, guess);
		}
		else if (array[guess] < value) {
			return binarysearch(value, array + guess + 1, guess);
		}
		return -1;*/

		int left = 0;
		int right = x - 1;
		while (left <= right) {
			int guess = (left + right) / 2;

			if (array[guess] == value) {
				return guess;
			}
			else if (array[guess] > value) {
				right = guess - 1;
			}
			else if (array[guess] < value) {
				left = guess + 1;
			}
		}
		return -1;
	}
}}}}