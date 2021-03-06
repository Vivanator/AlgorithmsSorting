#include "Functions.h"

int main()
{
	std::vector<int> unsortedList;
	int comparisons = 0;
	int assignments = 0;

	bool finished = false;

	while (!finished) {
		std::string fileName;
		int choice = 0;
		comparisons = 0;
		assignments = 0;
		finished = true;
		std::cout << "Enter the name of the file you would like to sort:" << std::endl;
		getline(std::cin, fileName);

		readList(unsortedList, "data/data/" + fileName);

		std::cout << "Enter which sort you would like to run on the list (enter 1-3):" << std::endl;
		std::cout << "1. Bubble Sort" << std::endl;
		std::cout << "2. Merge Sort" << std::endl;
		std::cout << "3. Iteration Sort" << std::endl;
		std::cin >> choice;

		if (choice == 1) {
			bubbleSort(unsortedList);
		}
		else if (choice == 2) {
			mergeSort(unsortedList, 0, unsortedList.size()-1, comparisons, assignments);
		}
		else if (choice == 3) {
			indexSort(unsortedList);
		}

		int choice2 = 0;
		std::cout << "Would you like to sort again? Type 1 if so." << std::endl;
		std::cin >> choice2;

		if (choice2 == 1) {
			finished = false;
		}

		std::cin.ignore();

	}
	readList(unsortedList, "data/data/one-million-randoms.txt");
	//mergeSort(unsortedList, 0, unsortedList.size()-1, comparisons, assignments);
	//std::cout << "Merge Sort required " << assignments << " assignments and " << comparisons << " comparisons." << std::endl;
	bubbleSort(unsortedList);
	//mergeSort(unsortedList, 0, unsortedList.size()-1);
	

    return 0;
}


