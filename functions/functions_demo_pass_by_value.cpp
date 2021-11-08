#include <iostream>

void formula1(){
	// dfxgasdgsdfg
	// sub menu
	// switch(){
	
	   // case 1: // Input
	    //          computeVolume(l,w,h);
	
    //}
}

float computeVolume(float length, float width, float height){
	float volume = length * width * height;
	return volume;
}

float computeLength(float volume, float width, float height){
	return (volume / (width * height));
}

float computeWidth(float volume, float length, float height){
	return (volume / (length * height));
}

float computeHeight(float volume, float length, float width){
	return (volume / (length * width));
}


int main(){
	float length = 10;
	float width = 20;
	float height = 30;
	float volume = computeVolume(length,width,height);
	std::cout << "volume is " << volume << std::endl;
	std::cout << "the length is " << computeLength(volume, width, height) << std::endl;
	return 0;
}
