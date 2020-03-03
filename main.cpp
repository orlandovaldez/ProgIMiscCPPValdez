//Misc Dr_T Programming I Topics 3-2-2020

#include <iostream>
#include <algorithm>
#include <vector>//understand C++ if vector is to be undertanded
#include <fstream>
#include <string>
using namespace std;

//function defintions
void populateVector(vector<int> &vect)
{
  int n = 0;
  vect.push_back(255);
  cout << "\nType a number: ";
  cin >> n;
  vect.push_back(n);//add to the list the number that the user typed
  //print the vector to the screen
  cout << "\nVector new Output: \n" << endl;
  sort(vect.begin(),vect.end());
  reverse(vect.begin(),vect.end());
  for(int v : vect)
  {
    cout << v << endl;
  }
  
}

struct Point
{
  int x;
  int y;
};

int main() 
{
  //The array vs. vector
  int numbers[7] = {1, 55, 12 , 57, 1000};

  numbers[5] = 0;
  numbers[6] = 1005;
  //print current values in array
  //foreach or for in C++
  for(int n : numbers)
  {
    cout << n << endl;
  }
  sort(numbers, numbers + 7 ); //ascending 
  reverse(numbers,numbers + 7);//reverse descending
  cout << endl;
  for(int n : numbers)      //reprint the list printn 
  {
    cout << n << endl;
  }
  //vectors in C++
  vector<int> v = {1, 55, 12, 57, 1000};
  v.push_back(0);//place a value to the end of the vector list
  v.push_back(1005);
  cout << "\nVector Output\n\n";
  //use for(for each) to print current values in the vector
  for(int a : v)
  {
    cout << a << endl;
  }
  sort(v.begin(),v.end()); //sort the vector ascending
  reverse(v.begin(),v.end()); //reverse descending
  cout << endl;
  for(int a :v)         //reprint
  {
    cout << a << endl;
  }
  //passing a vector to a function by refereance

  populateVector(v);//put new values in the vector

  //writing to (output to) a text file in C++
  ofstream outFile("vector.txt"); // "path"
  if(!outFile.good())
  {
    cout << "Error in file creation" << endl;
    return 1;
  }
  //put data into the file
  outFile << "Vector contents\n";
  for(int o :v)
  {
    outFile << o << endl;
  }
  outFile.close(); //close file when done writing. 

  //read from a file and output it to the screen
  ifstream inFile("output.csv");
  string wordsFromFile = "";
  if(!inFile.good())
  {
    cout << "\nProblem with file";
    return 1;
  }
  //read the data from the file with loop
  while(!inFile.eof())
  {
    inFile >> wordsFromFile;
    cout <<wordsFromFile << endl;
  }
  
  //an array of Structures
  Point arr[10]; // what were use to seeing when declaring arrays

  //access and assign data to points
  arr[0].x = 1; //assign 1 to x of the first point
  arr[0].y = 3; //assign 3 to y of the first point
  
  arr[1].x = 12;
  arr[1].y = 55;

//put automatic data into the other points
for(int i =2; i < 10; i++)
{
  arr[i].x = i;
  arr[i].y = (i * 5);
}
//print all the elements of the point array on screen
for(int j = 0; j < 10; j++)
{
  cout << "\nPoint(" << j << ") = (" << arr[j].x << "," << arr[j].y << ")" << endl;
}

//Future research Vector with structs as elements/data.


  return 0;
}
