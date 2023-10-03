#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int guess,num,attempt=0;
	srand(time(0)); //Random number generator
	num=rand()%100+1; //Random number between 1 to 100
	
    do
	{
		cout<<"Guess the Number: ";
	    cin>>guess;
	    attempt++;
		if(guess>num)
		{
			cout<<"Your guessing is Too Highh!!!"<<endl;
		}
		else if(guess<num)
		{
			cout<<"Your guessing is Too Low!!!"<<endl;	
		}
		else
		{
		    cout<<"Yehh!!! you guessed Correct Number !"<<endl;	
			break;	
		}
	}
    while(guess!=num);
	return 0;
}
