#include<iostream>
#include<string>
#include<vector>

int swingShot (char attackButton, int bodyparnum){
    int damageDone;
    if (attackButton == 's'){
  damageDone = 3 * bodyparnum;
    }
    return damageDone;
}

 


int main() {
    std::string heroName;
    char attackBtnForSwing;
    double hp = 100;
    int bodypartnumber = 0;
    
  std::cout << "Enter your hero name";
  std::cin >> heroName;

  std::cout << '\n' << "\n" << "Welcome to our first battle." << "\n" << "The Flame Mother" << hp;

  std::cout << "\n" << "Attack with your first attack!" << "\n" << "Your hp will always be shown on the right" << "\n";
  std::cout << "Your first attack will be a regular swing with your gun, swing not shot." << "\n" << hp;
  std::cout << "Type s on your keyboard" << "\n" << "\n";

  std::cin >> attackBtnForSwing; 

  std::cout << "Great!" << "\n" << "You have now chosen your attack!" << "\n" << hp;
  std::cout <<"Now choose the area of the body, 1. Legs, 2. Arms, 3. Lower Chest, 4, Upper Chest, 5. Head." << "\n" << "\n" << hp;
  
  std::cout << "Each point will have a different effect on the damage output and actually landing the hit" << "\n" << "\n" << hp;

  std::cout << "Choose the part of the body by picking the number of the body part!" << "\n" << "\n" << hp;

    std::cin >> bodypartnumber;
  std::cout << swingShot(attackBtnForSwing, bodypartnumber);

  return 0; 


}