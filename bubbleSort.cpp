#include <iostream>
using namespace std;
int main() 
{
  int s;
  cout <<"Enter array size :"<< endl;
  cin >> s ;
  int bubble[s];
  int n;
  int i;
  int count = 0;
  int mmc = 0;
  bool swap =  true;
  cout << "Enter number :";
      for ( i = 0;i < s;i++)
      {
         cin >> n;
         bubble[i] = n;
      } 
      for (int j = 0;j<s && swap ;j++)
      {
         swap = false;
         for ( i = 0;i<s;i++)
         {
            if (bubble[i] > bubble[i+1] )
            {
               bubble[i] = bubble[i] * bubble[i+1];
               bubble[i+1] = bubble[i] / bubble[i+1];
               bubble[i] = bubble[i] / bubble[i+1];
               swap = true;
            }
             count = count + 1;
        }
      }
      cout << "Sorted array is ";
      for (i = 0;i < s;i++)
      {
         cout << bubble[i] << "\t" ;
      }
  
}
