#include <iostream>
using namespace std;

class Book{
  public:
	string *title;
	string *author;
	double *price;
	
	Book(string t, string a, double p) {
      	title= new string(t);
      	author= new string(a);
      	price = new double(p);
	  }
	
   Book(){
   	title= new string("Untitled");
    author= new string("unknown");
    price = new double(0.0);
   }	
   
    Book(string t, double pr, string at) {
   	title= new string(t);
    author= new string(at);
    price = new double(pr);
   }
   
   Book(const Book &book ){
   	title = book.title;
   	author = book.author;
   	price= book.price;
   } 
    void display(){
   	 cout << "Title : "<< *title <<"  Address :"<< title <<endl;
   	 cout << "Author : "<< *author <<"  Address :"<< author <<endl;
   	 cout << "Price : "<< *price <<"  Address :"<< price <<endl;
   }
};

int main() {
	Book b1;
	b1.display();
	
	Book b2("JUST", "IDK",1000);
	b2.display();
	
	return 0;
}