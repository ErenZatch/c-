#include<iostream>
using namespace std;

class publication{
	public:
		string title;
		float price;
	
		void getdata(){
			cout<<"enter the title->";
			cin>>title;
			cout<<"enter the price->";
			cin>>price;
		}
		void displaydata(){
			cout<<"the title is:"<<title<<endl;
			cout<<"the price is:"<<price<<endl;
		}
};

class book:public publication{
	private:
		float page_count;
	public:
		void getdata1(){
		cout<<"enter information for the book:"<<endl;
		getdata();
		cout<<"enter page count of the book->";
		cin>>page_count;
		try{
			if(title==" " or price==0 or page_count==0){
				throw(title);
				throw(price);
				throw(page_count);
			}
			
		}
		catch(...){
			title="0";
			price=0;
			page_count=0;
		}
	}
	void display(){
		displaydata();
        
			cout<<"the page count is:"<<page_count<<endl;
		
	}
		
		
	
	
};

void function(){
	
	siuuuuuuu;
}

int main(){
	book b;
	b.getdata1();
	b.display();
	
}