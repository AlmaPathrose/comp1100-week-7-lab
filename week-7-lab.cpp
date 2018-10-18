#include <iostream>
// Library needed to get a random seed
#include <time.h>
using namespace std;

int main() 
{
    int bet,cash=500,a;
    char replay;
    system("cls");
    // Gets a random seed for our rand() function
    // ONLY RUN ONCE
    srand( time(NULL) );
   cout << "   WELCOME TO BINARY ROULETTE" << endl<< endl;
   cout<< "************************************" << endl <<endl;
   cout <<"Your current Balance is $" << cash << endl<<endl;
  while(cash>0)

   {
       cout <<"Do you want to play roulette(y/n)?" << endl<< endl;
       cin >> replay;

       if(replay=='y')
        {
            cout << "Choose either the number 1 or 0" << endl<<endl;
            cin >> a;
              if(a==1 || a==0)
              {
                  cout << "Enter bet amount:";
                  cin >> bet;
                    if(bet>cash)
                    {
                        cout << " Low balance\n\n" << endl <<"cashing out\n\n" << endl;
                         break; 
                    }
                    if(bet<=0)
                    {
                        cout <<"You can't play with bet amount $"<<bet<<"\n\nCashing out\n\n"<<endl;
                        break;
                    }
                     // Picks either 0 or 1 randomly with equal probablilty	
                     // CAN BE RUN AS MANY TIMES AS NEEDED
                 int random = rand() % 2;
                 std::cout << random << endl;
                   if(random==a)
                    {
                     cash=cash + (bet*2);
                     cout <<"**********You Won this game**********\n\n" << endl;
                    } 
                   else
                   {
                      cash=cash-bet;
                      cout << "**********You loose this game**********\n\n"<< endl;
                   }   
                  cout <<"Balance is $\n\n"<< cash <<endl;    
              }
              else
              {
                  cout <<"Cashing out\n\n" <<endl;
                   break;
              }             
        }
       else
          break;
   }
  cout <<"GAME OVER";
 
    return 0;
}