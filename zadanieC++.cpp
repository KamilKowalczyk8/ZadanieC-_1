#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <math.h>
#include <regex>


using namespace std;

int main(int argc, char** argv) {


string input;
 regex regularne("[a-z]+@[a-z]+\.pl"); 
	ofstream plik1;
   ifstream plik;  
   
   plik.open("1.txt"); 
   plik1.open("w.txt");  
   
   if(plik.good())  //sprawdzenie czy plik istnieje
            while(!plik.eof())  //petla wykonuje sie az program dojedzie do konca pliku
       
        {
        	
              plik>>input;
             cout<<input;
              cout<<endl;
             if(!cin) break;
                if(input=="koniec") //koniec pêtli
                        break;
                if(regex_match(input,regularne))
				{
                        cout<<"Prawid³owe"<<endl;
                               plik1<<input;
                }
                else
				{
                        cout<<"To nie jest mail"<<endl;
                       
              	}
        
			}
			  
                   plik.close(); 
				   plik1.close(); //zamkniecie pliku tekstowego
cout<<endl;   
 return 0;
}
