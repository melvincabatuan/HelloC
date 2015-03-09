class Location {

public:
   Location(int xVal, int yVal); // Constructor
   int getX();
   int getY();
   void translate(int dx, int dy);

private:
   int x, y;
};
