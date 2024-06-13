// C++ Program to Illustrate STL Algorithms Tips

#include <bits/stdc++.h>
using namespace std;

int main()
{

	// Creating vector and initializing objects
	// by passing custom integer numbers
	vector<int> v = { 1, 4, 2, 5, 6, 3, 9, 0, 10, 3, 15, 17, 3 };

	// Operation 1
	// Finding the minimum element in the array,

	// Note: It returns the pointer/iterator
	auto min = min_element(v.begin(), v.end());

	// Print and display elements on console
	cout << "Min element: " << *min << endl;

	// Operation 2
	// // Finding the maximum element in the array
	auto max = max_element(v.begin(), v.end());
	cout << "Max Element: " << *max << endl;

	// Operation 3
	// Sum of all elements, the third parameter tells us
	// initial sum ki value kya hai.
	auto sum = accumulate(v.begin(), v.end(), 0);
	cout << "The sum of all elements: " << sum << endl;

	// Operation 4
	// Count the frequency of an element in the array/vector
	auto cnt = count(v.begin(), v.end(), 3);
	cout << "Frequency Of 3 is: " << cnt << endl;

	// Operation 5
	// Finds an element and returns its pointer
	auto elem = find(v.begin(), v.end(), 3);

	if (elem != v.end())
		cout << "the element is at posn: " << *elem << endl;
	else
		cout << "Element not found" << endl;

	// Operation 6
	// Reversing a string or array/vector
	// using reverse method
	reverse(v.begin(), v.end());

	cout << "Reversed Vector: ";

	for (auto val : v) {
		cout << val << " ";
	}

	// New line for better readability
	cout << endl;

	// Operation 7
	// Sort array/vector using sort() method
	sort(v.begin(), v.end());
	cout << "Sorted Vector: ";
	for (auto val : v) {
		cout << val << " ";
	}
}


// Output
// Min element: 0
// Max Element: 17
// The sum of all elements: 78
// Frequency Of 3 is: 3
// the element is at posn: 3
// Reversed Vector: 3 17 15 3 10 0 9 3 6 5 2 4 1
// Sorted Vector: 0 1 2 3 3 3 4 5 6 9 10 15 17