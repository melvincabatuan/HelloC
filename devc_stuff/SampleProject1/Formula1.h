
float computeVolume(float length, float width, float height){
	return (length * width * height);
}

float computeLength(float volume, float width, float height){
	return (volume/(width * height));
}

float computeWidth(float volume, float length, float height){
	return (volume/(length * height));
}

float computeHeight(float volume, float length, float width){
	return (volume/(width * length));
}

void volumeFormula(){
	float volume; 
	float length; 
	float width;
	float height;
	int choice;
	do{
	
	cin >> choice;
	switch(choice){
		case 1: 
			cout << "Input the length width height: ";
			cin >> length >> width >> height;
			cout <<"\nThe volume is " << computeVolume(length, width, height);
			break;
		case 2:
			cout << "Input the volume width height: ";
			cin >> volume >> width >> height;
			cout <<"\nThe length is " << computeLength(volume, width, height);
			break;
		case 3:
			cout << "Input the volume width length: ";
			cin >> volume >> length >> height;
			cout <<"\nThe width is " << computeWidth(volume, length, height);
			break;
		case 4:
			cout << "Im quitting!";
			break;	
	}
	} while (choice != 4);
}
