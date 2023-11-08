// Joshua Fashe
// Prof. Gooch - COSC-1436
// Created on 11/7/2023
// Zodiac Assignment 16
// 
// 

using namespace std;
#include <iostream>

int main() {
  int month;
  int day;

  cout << "What month were ya born boi: ";
  cin >> month;
  
  cout << "And what day: ";
  cin >> day;

  switch(month) {
    case 1: // Aquarius	January 20 to February 17
      if (day >= 20) {
        cout << "You're an Aquaman Aquarius";
        } else {
        cout << "You're a Capricorn";
      } break;
    case 2: // Pisces	February 18 to March 19
      if (day >= 18) {
        cout << "You're a Pisces";
        } else {
        cout << "You're an Aquarius";
      } break;
    case 3: // Aries	March 20 to	April 19
      if (day >= 20) {
        cout << "You're an Aries";
        } else {
        cout << "You're a Pisces";
      } break;
    case 4: // Taurus	April 20 to	May 20
      if (day >= 20) {
        cout << "You're a Taurus";
        } else {
        cout << "You're an Aries";
      } break;
    case 5: // Gemini	May 21 to	June 20
      if (day >= 21) {
        cout << "You're a Gemini";
        } else {
        cout << "You're a Taurus";
      } break;
    case 6: // Cancer	June 21 to	July 22
      if (day >= 21) {
        cout << "You're a Cancer";
        } else {
        cout << "You're a Gemini";
      } break;
    case 7: // Leo	July 23 to	August 22
      if (day >= 23) {
        cout << "You're a Leo";
        } else {
        cout << "You're a Cancer";
      } break;
    case 8: // Virgo	August 23 to	September 22
      if (day >= 23) {
        cout << "You're a Virgo";
        } else {
        cout << "You're a Leo";
      } break;
    case 9: // Libra	September 23 to October 22
      if (day >= 23) {
        cout << "You're a Libra";
        } else {
        cout << "You're a Virgo";
      } break;
    case 10: // Scorpio	October 23 to	November 21
      if (day >= 23) {
        cout << "You're a Scorpion";
        } else {
        cout << "You're a Libra";
      } break;
    case 11: // Sagittarius	November 22nd to	December 21
      if (day >= 22) {
        cout << "You're a Sagittarius";
        } else {
        cout << "You're a Scorpio";
      } break;
    case 12: // Capricorn	December 22-	January 19
      if (day >= 22) {
        cout << "You're a Capricorn";
        } else {
        cout << "You're a Saggittarious";
      } break;
    default:
      cout << "Invalid entry. Please try again";
      break;
  }

}