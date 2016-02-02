bool isPalindrome (string Palindrome){
	char Front;
	char Back;
	int size = Palindrome.size();

	for (int i=0; i< size; i++){
		Front = Palindrome[i];
		Back = Palindrome[size];

		if (isalpha(Front)){ //checking if it is alphabetic
			if(isalpha(Back)){ //checking if it is alphabetic
				if (toupper[Front] != toupper[Back]){ //comparing both sides
					return false;
				else
					size --;
				}
				
			else
				size --;
			}
		}
	}

	return true;
}
