int compare(int userNumber, int computerNumber) {
	if (userNumber < computerNumber) {
		return -1;
	}
	else if (userNumber > computerNumber) {
		return 1;
	}
	else { 
		return 0; 
	}
}