#include<iostream>
#include<conio.h>
#include<cstring>
#include<fstream>
using namespace std;
 ofstream ofile;
 int gst,gst1,totalamount,quantity;
 
class menu{
    public:
    int choice,pchoice1,quantity;
    int  food(){
    cout<<"1) Pizzas\n";
	cout<<"2) Burgers\n";
	cout<<"3) Sandwich\n";
	cout<<"4) Rolls\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;
	return choice;
    }

};
class pizzasize:public menu{
    public:
    int pchoice1,quantity,choice;
    int size(){
        cout<<"\n1) Small Rs.250\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.900\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice1;
			return pchoice1;
    }
};

		class quantity1:public pizzasize{
		    public:
		 void   quantity12(int pchoice1){
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 250*quantity;
			totalamount=choice;
			cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"small";
			 
			 break;
			

			case 2: choice = 500*quantity;
			totalamount=choice;
			cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"regular";
			 break;
		
			case 3: choice = 900*quantity;
			totalamount=choice;
			cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"big";
			 
			 break;
			}
	        cout<<"\ncost of food:"<<totalamount<<endl;
	         gst=choice*0.18;
	        cout<<"GST amount is:"<<gst<<endl;
	         gst1=choice+gst;
	        cout<<"your total bill:"<<gst1<<endl;
			cout<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From CHAT PAT. FAST FOOD\n";
			 
		    }


			      
    
};
class burgermenu:public menu{
    public:
	int pchoice1,choice,quantity;
        void types(){
        
        cout<<"\n1 "<<"veg burger"<<" Rs.180"<<"\n";
		cout<<"2 "<<"potato corn burger"<<" Rs.150"<<"\n";
		cout<<"3 "<<"pizza burger"<<" Rs.160"<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice1;
		try{
            if(pchoice1>3) throw (0);
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 180*quantity;
			totalamount=choice;
			break;

			case 2: choice = 150*quantity;
			totalamount=choice;
			break;

			case 3: choice = 160*quantity;
			totalamount=choice;
			break;
    }
		}
		}
		catch (int x){
		    cout<<"enter the correct choice";
		}
		switch (pchoice1)
			{
			
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"veg burger";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<"potato corn burger";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"pizza burger";
			 break;


			}
		cout<<"\ncost of food:"<<totalamount<<endl;
	         gst=choice*0.18;
	        cout<<"GST amount is:"<<gst<<endl;
	         gst1=choice+gst;
	        cout<<"your total bill:"<<gst1<<endl;
			cout<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From CHAT PAT. FAST FOOD\n";
		}
	
};
class Sandwich:public menu{
    public:
    //int pchoice1;
    void flavor(){
        	cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>pchoice1;
        
        cout<<"\n1  "<<"peanut Sandwich"<<" Rs.240"<<"\n";
		cout<<"2  "<<"jelly Sandwich"<<" Rs.160"<<"\n";
		cout<<"3  "<<"torta Sandwich"<<" Rs.100"<<"\n";
		}
		void selection(){
		    try{
		        if(pchoice1>3) throw (0);
		        cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
		        	if(pchoice1>=1 && pchoice1<=3)
		{
			
			switch(pchoice1)
			{
			case 1: choice = 240*quantity;
				totalamount=choice;
			cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"peanut Sandwich";
			 break;
		

			case 2: choice = 160*quantity;
				totalamount=choice;
				cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"jelly Sandwich";
			break;

			case 3: choice = 100*quantity;
				totalamount=choice;
				cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"torta Sandwich";
			break;

			}	cout<<"\ncost of food:"<<totalamount<<endl;
	         gst=choice*0.18;
	        cout<<"GST amount is:"<<gst<<endl;
	         gst1=choice+gst;
	        cout<<"your total bill:"<<gst1<<endl;
			cout<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From CHAT PAT. Pizza\n";
		}
		}
		catch (int a){
		    cout<<"PleAse enter correct choice";
		}
		}

};
class rolls:public menu{
    public:
    rolls(){
    cout<<"\n1 "<<"veg roll"<<" Rs.150"<<"\n";
		cout<<"2 "<<"paneer roll"<<" Rs.100"<<"\n";
		cout<<"3 "<<"butter roll"<<" Rs.120"<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		try{
		    
		if(pchoice1>3) throw (0);
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nHow Much Rolls Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 150*quantity;
			totalamount=choice;
			break;

			case 2: choice = 100*quantity;
			totalamount=choice;
			break;

			case 3: choice = 120*quantity;
			totalamount=choice;
			break;

			}
			
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"veg roll";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<"paneer roll";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<"butter roll";
			 break;


			}
			cout<<"\ncost of food:"<<totalamount<<endl;
	         gst=choice*0.18;
	        cout<<"GST amount is:"<<gst<<endl;
	         gst1=choice+gst;
	        cout<<"your total bill:"<<gst1<<endl;
			
				cout<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From CHAT PAT. fast food\n";
 ofstream MyFile("menu.txt");
  
 }
		}
 catch(int a){
     cout<<"enetr the correct choice";
 }
}
};
int main(){
    int gst,gst1;
    char name[20];int pchoice1;
    cout<<"\t\t\t----------CHAT PAT Fast Food-----------\n\n";
	cout<<"Please Enter Your Name: ";
	cin>>name;
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t--------Menu--------\n\n";
    menu m;
    int choice=m.food();
try{
if(choice>4) throw (0);
		if( choice==1){
		    pizzasize ps;
	int	pchoice1=ps.size();
	ofile <<"pizza choice:"<<pchoice1<< endl;
		try{
		    if(pchoice1>3) throw (0);
		
		    if(pchoice1>=1 && pchoice1<=3){
		    quantity1 q1;
		    q1.quantity12(pchoice1);
		    }
		    
		}
		
			catch(int a){
	cout<<"PleAse enter correct choice";
	}
}
else if(choice==2){
    burgermenu bm;
	bm.types();
	}

	else if(choice==3)
	 {
		Sandwich s2;
		s2.flavor();
		s2.selection();
	 }

else if(choice==4){
    rolls r;
}
}
	catch(int a){
	cout<<"PleAse enter correct choice";
	}

   ofile.open ("text.txt");
   ofile <<"Name:"<<name  << endl;
   ofile <<"choice:"<<choice<< endl;
  ofile <<"QUANTITY:"<<quantity<< endl;
  ofile <<"\ncost of food:"<<totalamount<<endl;
  int g=totalamount*.18;
			 ofile<<"\nGST amount is:"<<g<<endl;
			 ofile<<"your total bill:"<<totalamount+g<<endl;
			 
			 
   
}
