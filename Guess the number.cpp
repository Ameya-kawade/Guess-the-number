//GUESS THE NUMBER BETWEEN 1 TO 100.
#include<iostream> 
  
 #include<cstdlib> 
  
 #include<ctime> 
  
 using namespace std; 
  
 int main() 
  
 srand(time (0)); 
  
 int num- (rand()%100)+1; 
  
 int guess; 
  
 int nguessess=0; 
  
 cout<<"Guess the number "<<endl; 
  
 do{ 
  
 cin>>guess; 
  
 if(guess <num){ 
 cout<<"Please enter a higher number "<<endl; 
 } 
 if(guess>num){ 
  
 cout<<" Please enter a lower number "<<endl; 
 } 
 if(guess==num){ 
  
 cout<<"Congratulations you have guessed the number "<<endl; 
 } 
 nguessess++; 
 } 
  
 while (guess!=num); 
  
 cout<<"you have guessed the number in : "<<nguessess<<endl; 
  
 return 0; 
 }


