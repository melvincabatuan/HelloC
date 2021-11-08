#include <iostream>

using namespace std;

float computeVolume(float length, float width, float height){
	float volume = length * width * height;
	return volume;
}

float computeLength(float volume, float width, float height){
	return (volume/(width * height));
}

float computeWidth(float volume, float length, float height){
	return (volume/(length * height));
}

float computeHeight(float volume, float length, float width){
	return (volume/(length * width));
}

int main(){
	float length = 2;
	float width = 3;
	float height = 4;
	cout << computeVolume(length, width, height);
	return 0;
}
