#include <iostream>
#include <string>
using namespace std;


int main (){

	string word = "common";
	string guessed = "______";
	int counter = 0;
	while (word.compare(guessed) != 0){
		char guess;
		cout << "Guess a letter: " << endl;
		cin >> guess;
		for (int i = 0; i < word.size(); i++){
			if (guess == word[i]){
				guessed[i] = guess;
			}
		}
		size_t found = word.find(guess);
		if (found!= string::npos) {
			cout << "The letter you guessed is in the word!" << endl;
			cout << guessed << endl;
		}else{
			cout << "The letter you guessed is not in the word" << endl;
			counter ++;
			cout << "_____________" << endl;
			cout << "|	    |" << endl;
			if (counter >= 1){
				cout << "|	    O" << endl;
			}else{
				cout << "|	     " << endl;
			}if (counter == 2){
				cout << "|	    |" << endl;
			}if (counter >= 3){
				cout << "|	   -|-" << endl;
			}else{
				cout << "|	     " << endl;
			}if (counter == 4){
				cout << "|	   /" << endl;
			}if (counter >= 5){
				cout << "|	   /\\" << endl;
			}

			else{
				cout << "|	     " << endl;
			}
			cout << "|	     " << endl;
			cout << "|	     " << endl;
			if (counter >= 5){
				cout << "YOU LOSE" << endl;
			}

		}

	}
	cout << "You Win!" << endl;
	return 0;
}






