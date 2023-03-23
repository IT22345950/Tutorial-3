#include <iostream>
#include<iomanip>

using namespace std;

int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  int r;
 cout <<setw(5)<<"No"<<setw(15)<<"Name"<<setw(10)<<"Marks" << endl;
 for (int r = 0; r < 5; r++) {
 cout <<setw(5)<<setiosflags(ios::fixed) <<r+1
 <<setw(15)<<setiosflags(ios::fixed)<<names[r]
 <<setw(10)<<setiosflags(ios::fixed)<<setprecision(2)<<marks[r]<< endl;
 }

}

#include <iostream>
using namespace std;
int volume(int height, int width, int length);

int main() {
 int box1Height, box1Width, box1Length;
 int box2Height, box2Width, box2Length;
 int totalVolume, totalSurface;

 cout << "Enter Box 1 Height : ";
 cin >> box1Height;
 cout << "Enter Box 1 Width : ";
 cin >> box1Width;
 cout << "Enter Box 1 Length : ";
 cin >> box1Length;
 cout<<endl;

 cout << "Enter Box 2 Height : ";
 cin >> box2Height;
 cout << "Enter Box 2 Width : ";
 cin >> box2Width;
 cout << "Enter Box 2 Length : ";
 cin >> box2Length;

 totalVolume = volume(box1Height, box1Width, box1Length)
 + volume(box2Height, box2Width, box2Length);

 cout<<"Volume of Box is "<<totalVolume<< endl;

 return 0;
}
// Implement the Volume() function here
int volume(int height, int width, int length){
  return height*width*length;
}


#include <iostream>
using namespace std;

struct Box{
int Width,Height,Length;
}Box1,Box2;

int volume(int Height, int Width, int Length);
// 1. Define a structure called Box
// have the integer data types Height, Width, Length
// Do not change the main function
int main() {
 // 2. Create a variable called box1 of the Box structure type
 // int box1Height, box1Width, box1Length;
 // 3. Create a variable called box2 of the Box structure type

 // int box2Height, box2Width, box2Length;
 int totalVolume;

 // 4. Input the height, width, lenght of box1 and box2
 cout << "Enter Box 1 Height : ";
 cin >> Box1.Height;
 cout << "Enter Box 1 Width : ";
 cin >> Box1.Width;
 cout << "Enter Box 1 Length : ";
 cin >> Box1.Length;

 cout << "Enter Box 2 Height : ";
 cin >> Box2.Height;
 cout << "Enter Box 2 Width : ";
 cin >> Box2.Width;
 cout << "Enter Box 2 Length : ";
 cin >> Box2.Length;

 // 5. Replace the coding below to pass the Box type structure
 totalVolume = volume(Box1.Height,Box1.Width,Box1.Length) 
 + volume(Box2.Height,Box2.Width,Box2.Length);


 cout << "Volume of Box is " << totalVolume << endl;

 return 0;
}
// Implement the functions here
int volume(int Height,int Width, int Length){
  int total;
  total=Height*Width*Length;
  return total; 
}

#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int len, int wth);
// Do not change the main() function

int main() {
 int length = 10, width = 5;
  
 input(&len,& wth);
 print(len, wth);
 return 0;
}
// Do not change the print() function
void print(int len, int wth) {
 cout << "Length : " << len 
 << ", Width : " << wth << endl;
}
// Implement the Input Function here
void print(int len, int wth){
  cout<<"Enter Lenth :";
}