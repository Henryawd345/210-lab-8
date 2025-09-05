#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Restaurant {
    string name;
    string address;
    int seats;
    double rating;
    float price;
};

Restaurant Questionrestaurants(){
    Restaurant answer;

    cout<<"What is your restaurant name?"<<endl;
    getline(cin, answer.name);

    cout<<"What is your restaurant address?"<<endl;
    getline(cin, answer.address);

    cout<<"How many seats are there in your restaurant?"<<endl;
    cin >> answer.seats;

    cout<<"What is your restaurant rating?"<<endl;
    cin >> answer.rating;

    cout<<"What are the usual price range for 2 person in your restaurant?"<<endl;
    cin >> answer.price;
    cin.ignore();

    return answer;
}

void printstruct(Restaurant receiver){
    cout<<"The restaurant name is "<<receiver.name<<"it is at "<<receiver.address<<". "<<"This restaurant have "<<receiver.seats<<", This restaurant has a rating of "<<receiver.rating<<". "<<"The price range of this restaurant is about $"<<receiver.price<<"."<<endl;
}


int main()
{
    Restaurant answer1, answer2, answer3, answer4;
    answer1 = Questionrestaurants();
    cout<<"First Restaurant form finished. \n"<<endl;

    answer2 = Questionrestaurants();
    cout<<"Second Restaurant form finished. \n"<<endl;

    answer3 = Questionrestaurants();
    cout<<"Third Restaurant form finished. \n"<<endl;

    answer4 = Questionrestaurants();
    cout<<"Fourth Restaurant form finished. \n"<<endl;

    printstruct(answer1);
    printstruct(answer2);
    printstruct(answer3);
    printstruct(answer4);

    return 0;
}
