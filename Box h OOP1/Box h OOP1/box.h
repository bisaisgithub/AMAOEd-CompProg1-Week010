class Box {
public:
	
	int width, lenght, height;
	
	Box(int lenght, int width, int height);
	int getVolume();
};

Box::Box(int lenght, int width,  int height) {
	this->lenght = lenght;
	this->width = width;
	this->height = height;
	
	
}

int Box::getVolume() {
	return this->lenght * this->width * this->height;
}


