#ifndef POINT_H_
#define POINT_H_

namespace NPoint
{
    class Point
    {
        private:
            int xPosition;
            int yPosition;
        public:
            // 1.1 input
            void accpetInput(); 
            void displayOutput();   
            Point();   
            Point(int xpoistion, int yposition);
            Point (const Point& other);
             ~Point();
            void SetXPosition(int xposition);
            void SetYPosition(int yposition);
            int GetXPosition();
            int GetYPosition();
           
    }; // end of class Point
}
#endif
/// decl of class