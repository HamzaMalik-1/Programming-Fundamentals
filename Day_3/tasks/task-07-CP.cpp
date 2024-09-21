#include<iostream>
using namespace std ;
main() 
{
	string movieName ;
	float adultTicketPrice , childTicketPrice , adultTicket , childTicket , donationPercentage , totalAmount , donationAmount , remainingAmount ;

	cout << "Enter the movie name : " ;
	cin >> movieName ;

	cout << "Enter the adult ticket price : $" ;
	cin >> adultTicketPrice ;

	cout << "Enter the child ticket price : $" ;
	cin >> childTicketPrice ;

	cout << "Enter the number adult tickets sold : " ;
	cin >> adultTicket ;

	cout << "Enter the number child tickets sold : " ;
	cin >> childTicket ;

	cout << "Enter the percentage of amount to be donated to charity : " ;
	cin >> donationPercentage ;

	totalAmount = ( adultTicketPrice * adultTicket ) + ( childTicketPrice * childTicket ) ;
	donationAmount = totalAmount * (  donationPercentage / 100 ) ;
	remainingAmount = totalAmount - donationAmount ;

	cout << "Movie : " << movieName << endl ;
	cout << "Total amount generated from ticket sales : $" << totalAmount << endl ;
	cout << "Donation to charity ( " << donationPercentage << "% ) : " << donationAmount << endl ;
	cout << "Remaining amount after donation : $" << remainingAmount ;
	
}