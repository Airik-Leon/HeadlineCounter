#include <iostream> 
#include <string>
using namespace std; 

int main() {
double sum = 0;
string headline;
char again;  
do{
  cout << "Enter your Headline all on one line as it appears (even if in decks): "<<endl;
    getline(cin, headline);
  for (int i = 0; i < headline.length(); i++) {
    if (headline[i] == 'f'
      || headline[i] == 'i'
      || headline[i] == 'j'
      || headline[i] == 'l'
      || headline[i] == 't'
      || headline[i] == 'I'
      || headline[i] == '1'
      || headline[i] == ':'
      || headline[i] == ';'
      || headline[i] == '\''
      || headline[i] == '('
      || headline[i] == ')'
      || headline[i] == '!'
      || headline[i] == '.'
      || headline[i] == ',')
    {
      sum = sum + .5;
    }
     else if(headline[i] == 'w'
       || headline[i] == 'm'
       || headline[i] == 'A'
       || headline[i] == 'B'
       || headline[i] == 'C'
       || headline[i] == 'D'
       || headline[i] == 'E'
       || headline[i] == 'F'
       || headline[i] == 'G'
       || headline[i] == 'H'
       || headline[i] == 'J'
       || headline[i] == 'K'
       || headline[i] == 'L'
       || headline[i] == 'N'
       || headline[i] == 'O'
       || headline[i] == 'P'
       || headline[i] == 'Q'
       || headline[i] == 'R'
       || headline[i] == 'S'
       || headline[i] == 'T'
       || headline[i] == 'U'
       || headline[i] == 'V'
       || headline[i] == 'X'
       || headline[i] == 'Y'
       || headline[i] == 'Z'
       || headline[i] == '-'
       || headline[i] == '$'
       || headline[i] == '%'
       || headline[i] == '&')
             {
               sum = sum + 1.5; 
             }
    else if( headline[i] == (int) ' ')
    sum = sum + 1; 
     else
         sum = sum + 1; 
    } 
  cout<<"The count for this Headline is: "<<sum<<endl; 
  cout<<"Another headline? Enter Y/N "; 
  cin>>again; 
  if(again == 'y' || again == 'Y')
  cout<<"Okay, keep working hard. "<<endl; 
  else 
  exit(0); 
  cin.ignore();
  sum = 0; 
 } while(1);
  }