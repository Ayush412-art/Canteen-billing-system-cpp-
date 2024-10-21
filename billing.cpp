#include<iostream>
#include<ctime>
using namespace std;
class canteen{
public :
char customer_name[50];
char item[20][10];
int qty[20];
float rate_of_item[20];
};
void Printing_bills(char item[50] , int qty, float rate){
  cout<<item<<"\t";
  cout<<"\t\t"<<qty<<"\t";
  cout<<"\t\t"<<qty*rate<<endl;


}

void Billing_design(char name[40] ){
time_t now = time(0);
char* currentDate = ctime(&now);
cout<<"\n\n";
cout<<"\t\t\tHeritage canteen   "<<endl;
cout<<"-----------------------------------------------------------------"<<endl;
cout<<"Date: "<<currentDate<<endl;
cout<<"Invoice To: "<<name<<endl;
cout<<endl;
cout<<"---------------------------------------------------"<<endl;
cout<<"Items:\t\t\t";
cout<<"Qty:\t\t\t";
cout<<"Price:\t\t\t"<<endl;
cout<<"---------------------------------------------------"<<endl;
}
float Calculate_bill(float total){
  cout<<"\n";
  cout<<"======================================================================"<<endl;
  cout<<"\t\t\t Total Amount: "<<total;
  
}

int main(){
    int n;
    float total = 0;
  canteen c1;

  cout<<"Enter the customer name : "<<endl;
  cin.ignore();
  cin.getline( c1.customer_name , 50);
  cout<<"Enter the order as per the customer: "<<endl;
  cin>>n;
  for(int i = 0 ; i < n ; i++){
    cout<<"Enter the "<<i+1<<" item : "<<endl;
    cin>>c1.item[i];
    cout<<"Enter the quantity"<<endl;
    cin>>c1.qty[i];
    cout<<"Enter the rate"<<endl;
    cin>>c1.rate_of_item[i];
    total += c1.qty[i] * c1.rate_of_item[i];
  }
  Billing_design(c1.customer_name);
  for(int j = 0  ; j < n ; j++){
    Printing_bills(c1.item[j], c1.qty[j] , c1.rate_of_item[j]);
  }
  Calculate_bill(total);
    
  
}