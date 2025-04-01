/*
University Amerike
Author: Sebastian Arias
Practice: 19
Date: 30/03/25
Description: Create a program that requests data from a video game and then displays it.
*/

#include <iostream>
#include <string>
using namespace std;

struct VideoGame {
private:
    string title;
    string rating;
    float price;

public:
    void setTitle(const string& t) {
        title = t;
    }
    void setRating(const string& r) {
        rating = r;
    }
    void setPrice(float p) {
        if (p >= 0) {
            price = p;
        } else {
            cout << "The price cannot be negative. It will be set to 0 by default." << "\n";
            price = 0;
        }
    }

    string getTitle() const {
        return title;
    }
    string getRating() const {
        return rating;
    }
    float getPrice() const {
        return price;
    }
};

int main() {
    VideoGame game;
    string title, rating;
    float price;

    cout << "Enter the video game title: ";
    getline(cin, title);
    game.setTitle(title);

    cout << "Enter the rating: ";
    getline(cin, rating);
    game.setRating(rating);

    cout << "Enter the price: ";
    cin >> price;
    game.setPrice(price);

    cout << "\nVideo Game Details:" << "\n";
    cout << "Title: " << game.getTitle() << "\n";
    cout << "Rating: " << game.getRating() << "\n";
    cout << "Price: $" << game.getPrice() << "\n";

    return 0;
}
