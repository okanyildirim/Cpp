#include <iostream>
using namespace std;
                                                                  // OKAN YILDIRIM  4074   2-I
struct history{
       int day;
       int month;
       int year;
       };
       
    enum months {
    January=1, //- 31 days
    February, //- 28 days 29 days in Leap Years
    March, //- 31 days
    April,// - 30 days
    May, //- 31 days
    June, //- 30 days
    July, // - 31 days
    August, //- 31 days
    September, // - 30 days
    October, //- 31 days
    November, //- 30 days
    December // - 31 days  
         
         };
int main (){
    char slash;
    
    while(1){
    
    history day1;
    history month1;
    history year1;
    slash='/';
    cout << "Enter day,month and year: ";
    cin >> day1.day >> slash >> month1.month >> slash >> year1.year ;
    
    if( month1.month > 12){                                                                   // month must be smaller than 12
               cout << "You enter month incorrectly.\n";}
               
                          
	switch(month1.month){
    	
    	case January : 
        if (day1.day>31) {                                                           // In this month, day must be smaller 31
        cout << "You enter day incorrectly.\n";           
                        }
        else {
        cout << day1.day << slash << month1.month << slash << year1.year << endl ; 
					  }
		break;
    	
		case February : if  (year1.year %4 == 0 ) {     // there is a special situation for February
        if (day1.day>29) {
        cout << "You enter day incorrectly.\n";
                          }	                     
        else {
        cout << day1.day << slash << month1.month << slash << year1.year << endl ;
           }           
                      }
        else if  (year1.year %4 != 0 ) { 
		if (day1.day>28) {
        cout << "You enter day incorrectly.\n";
                          }
        else {
        cout << day1.day << slash << month1.month << slash << year1.year << endl ;
           }                  
                            }
    	break;
    	case March :
	    if (day1.day>31) {                                                           // In this month, day must be smaller 31
            cout << "You enter day incorrectly.\n";           
                        }
        else {
        cout << day1.day << slash << month1.month << slash << year1.year << endl ;
					  }
		break;
    	
		case April :                                                                     // In this month, day must be smaller 30
    	if (day1.day>30) {
        cout << "You enter day incorrectly.\n";
                              
                        }
      	else {
        cout << day1.day << slash << month1.month << slash << year1.year << endl ; 
           }        
        break;
    	
		case May : 
		if (day1.day>31) {                                                           // In this month, day must be smaller 31
        cout << "You enter day incorrectly.\n";           
                        }
        else {
        cout << day1.day << slash << month1.month << slash << year1.year << endl ;
				 	  }
	    break;
    	case June : if (day1.day>30) {                                                    // In this month, day must be smaller 31
        cout << "You enter day incorrectly.\n";
                              
                        }
        else {
        cout << day1.day << slash << month1.month << slash << year1.year << endl ;
           }    
		break;    
    	
		case July : 
    	if (day1.day>31) {                                                           // In this month, day must be smaller 31
        cout << "You enter day incorrectly.\n";           
                        }
        else {
      
                    cout << day1.day << slash << month1.month << slash << year1.year << endl ;
					  }
					  break;
    	case August: 
    	if (day1.day>31) {                                                           // In this month, day must be smaller 31
            cout << "You enter day incorrectly.\n";           
                        }
        else {
      
                    cout << day1.day << slash << month1.month << slash << year1.year << endl ;
					  }
	    break;
    	case September :                                                             // In this month, day must be smaller 31
    	if (day1.day>30) {
                  cout << "You enter day incorrectly.\n";
                              
                        }
        else {
      
                     cout << day1.day << slash << month1.month << slash << year1.year << endl ;
           }     
		break;   
    	
		case October : 
    	if (day1.day>31) {                                                           // In this months, day must be smaller 31
       cout << "You enter day incorrectly.\n";           
                        }
        else {
        cout << day1.day << slash << month1.month << slash << year1.year << endl ;
					  }
	     break;
    	
		case November:
        if (day1.day>30) {                                                             // In this month, day must be smaller 31
        cout << "You enter day incorrectly.\n";
                              
                        }
        else {
      
                     cout << day1.day << slash << month1.month << slash << year1.year << endl ;
           }        
        break;
        
		case December :
        if (day1.day>31) {                                                           // In this months, day must be smaller 31
        cout << "You enter day incorrectly.\n";           
                        }
        else {
      
        cout << day1.day << slash << month1.month << slash << year1.year << endl ;
					  }
	    break;
    
    }
      }
    system ("Pause");
    return 0;
		}
