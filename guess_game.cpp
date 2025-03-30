//guessing number game  
 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   int random_num;
   int count=0;
   int usernum;
   
   cout << "\nWelcome to the guess game! \nI have put a random number between 1 to 20, and you need to guess it.\n" ;    
   srand(time(0));
   random_num= 1+ rand() % 100 ;
   cout << " enter number between 1 to 100 : ";
   
    while (usernum!=random_num)
   { 
     cin >> usernum;
     
     if ( cin.fail() )
     {
       cin.clear();
       cin.ignore( 1000 ,'\n');
       cout << " please enter a number : ";
     }
     else if ( cin.peek() != '\n' )
     {   
        cin.clear();
        cin.ignore( 1000 ,'\n');
        cout<<"please enter intger number only : ";
      } 
     
     else if (usernum==random_num)
     {
        cout<< "well done ! you entered the true number :) : "<<random_num << endl ;
        count++;
        cout<< " number of attempt : "<< count <<endl ;
        break;
     }
     
     else if (usernum> random_num)
     {
       cout << "the number you enter high , try again : " ;
       count++;
     }
     else if (usernum<random_num)
     {
       cout << "the number you enter low , try again : " ;
       count++;
     }
     
     else 
     {
        break;   
     }
     
     
   }
   
   return 0;
}
    
    