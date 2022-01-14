#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(612, 352), "Bongo Cat!");
    
    //while window is open
    if (sf::Joystick::isConnected) {
        std::cout << "Joystick connected.\n";
    }
    //Texture for base (bongo cat)
    sf::Texture tBase;
    if (!tBase.loadFromFile("../img/base.png")) {
        std::cout << "Error with base.png.\n";
    }
    //Sprite for base (bongo cat)
    sf::Sprite sBase;
    sBase.setTexture(tBase);
    //Texture for idle left hand
    sf::Texture tIdle_L;
    if (!tIdle_L.loadFromFile("../img/idle_l.png")) {
        std::cout << "Error with idle_l.png.\n";
    }
    //Sprite for idle left hand
    sf::Sprite sIdle_L;
    sIdle_L.setTexture(tIdle_L);
    //Texture for idle right hand
    sf::Texture tIdle_R;
    if (!tIdle_R.loadFromFile("../img/idle_r.png")) {
        std::cout << "Error with idle_r.png.\n";
    }
    //Sprite for idle right hand
    sf::Sprite sIdle_R;
    sIdle_R.setTexture(tIdle_R);
    //Texture for hat
    sf::Texture tHat;
    if (!tHat.loadFromFile("../img/hat.png")) {
        std::cout << "Error with hat.png.\n";
    }
    //Sprite for hat
    sf::Sprite sHat;
    sHat.setTexture(tHat);
    //Texture for board
    sf::Texture tBoard;
    if (!tBoard.loadFromFile("../img/board.png")) {
        std::cout << "Error with board.png.\n";
    }
    //Sprite for board
    sf::Sprite sBoard;
    sBoard.setTexture(tBoard);
    //Texture for buttons
    sf::Texture tButtons;
    if (!tButtons.loadFromFile("../img/buttons.png")) {
        std::cout << "Error with buttons.png.\n";
    }
    //Sprite for buttons
    sf::Sprite sButtons;
    sButtons.setTexture(tButtons);
    //Texture for glasses
    sf::Texture tGlasses;
    if (!tGlasses.loadFromFile("../img/glasses.png")) {
        std::cout << "Error wtih glasses.png";
    }
    //Sprite for glasses
    sf::Sprite sGlasses;
    sGlasses.setTexture(tGlasses);
    //Texture for blush
    sf::Texture tBlush;
    if (!tBlush.loadFromFile("../img/blush.png")) {
        std::cout << "Error with blush.png.\n";
    }
    //Sprite for blush
    sf::Sprite sBlush;
    sBlush.setTexture(tBlush);
    //Texture for b0
    sf::Texture tb0;
    if (!tb0.loadFromFile("../img/0.png")) {
        std::cout << "Error with b0.png.\n";
    }
    //Sprite for b0
    sf::Sprite sb0;
    sb0.setTexture(tb0);
    //Texture for b1
    sf::Texture tb1;
    if (!tb1.loadFromFile("../img/1.png")) {
        std::cout << "Error with b1.png.\n";
    }
    //Sprite for b1
    sf::Sprite sb1;
    sb1.setTexture(tb1);
    //Texture for b2
    sf::Texture tb2;
    if (!tb2.loadFromFile("../img/2.png")) {
        std::cout << "Error with b2.png.\n";
    }
    //Sprite for b2
    sf::Sprite sb2;
    sb2.setTexture(tb2);
    //Texture for b3
    sf::Texture tb3;
    if (!tb3.loadFromFile("../img/3.png")) {
        std::cout << "Error with b3.png.\n";
    }
    //Sprite for b3
    sf::Sprite sb3;
    sb3.setTexture(tb3);
    //Texture for b5
    sf::Texture tb5;
    if (!tb5.loadFromFile("../img/5.png")) {
        std::cout << "Erorr with b5.png.\n";
    }
    //Sprite for b5
    sf::Sprite sb5;
    sb5.setTexture(tb5);
    //Texture for bz
    sf::Texture tbz;
    if (!tbz.loadFromFile("../img/Z.png")) {
        std::cout << "Erorr with Z.png.\n";
    }
    //Sprite for bz
    sf::Sprite sbz;
    sbz.setTexture(tbz);
    //Texture for jump
    sf::Texture tJump;
    if (!tJump.loadFromFile("../img/jump.png")) {
        std::cout << "Error with jump.png.\n";
    }
    //Sprite for jump
    sf::Sprite sJump;
    sJump.setTexture(tJump);
    //Texture for down
    sf::Texture tDown;
    if (!tDown.loadFromFile("../img/down.png")) {
        std::cout << "Error wtih down.png.\n";
    }
    //Sprite for down
    sf::Sprite sDown;
    sDown.setTexture(tDown);
    //Texture for right
    sf::Texture tRight;
    if (!tRight.loadFromFile("../img/right.png")) {
        std::cout << "Error with right.png.\n";
    }
    //Sprite for right
    sf::Sprite sRight;
    sRight.setTexture(tRight);
    //Texture for left
    sf::Texture tLeft;
    if (!tLeft.loadFromFile("../img/left.png")) {
        std::cout << "Error with left.png.\n";
    }
    //Sprite for left
    sf::Sprite sLeft;
    sLeft.setTexture(tLeft);


    while (window.isOpen()) {
        window.clear();
        int x = sf::Joystick::getAxisPosition(0, sf::Joystick::PovX);
        int y = sf::Joystick::getAxisPosition(0, sf::Joystick::PovY);
        int z = sf::Joystick::getAxisPosition(0, sf::Joystick::Z);
        sf::Event event;

        //Draw base (bongo cat)
        window.draw(sBase);
        //Draw blush
        window.draw(sBlush);
        //Draw glasses
        window.draw(sGlasses);
        //Draw idle left hand
        window.draw(sIdle_L);
        //Draw idle right hand
        window.draw(sIdle_R);
        //Draw hat
        window.draw(sHat);
        //Draw board
        window.draw(sBoard);
        //Draw buttons
        window.draw(sButtons);




        //check all events since last outside loop.
        while (window.pollEvent(event)) {
            //close request
            if (event.type == sf::Event::Closed) {
                window.close();
            }

        }
        if (sf::Joystick::isButtonPressed(0, 1)) {
            std::cout << "Button 1 is pressed.\n";
            window.clear();
            //Draw base (bongo cat)
            window.draw(sBase);
            //Draw blush
            window.draw(sBlush);
            //Draw glasses
            window.draw(sGlasses);
            //Draw hat
            window.draw(sHat);
            //Draw board
            window.draw(sBoard);
            //Draw buttons
            window.draw(sButtons);
            //Draw the left hand (on b1)
            window.draw(sb1);
            //Draw idle right hand
            if (x == -100) {
                std::cout << "Left is pressed.\n";
                window.draw(sLeft);
            }
            else if (x == 100) {
                std::cout << "Right is pressed.\n";
                window.draw(sRight);
            }
            else if (y == -100) {
                std::cout << "Down is pressed.\n";
                window.draw(sDown);
            }
            else if (y == 100) {
                std::cout << "Up is pressed.\n";
                window.draw(sJump);
            }
            else {
                window.draw(sIdle_R);
            }
        }
        else if (sf::Joystick::isButtonPressed(0, 2)) {
            std::cout << "Button 2 is pressed.\n";
            window.clear();
            //Draw base (bongo cat)
            window.draw(sBase);
            //Draw blush
            window.draw(sBlush);
            //Draw glasses
            window.draw(sGlasses);
            //Draw hat
            window.draw(sHat);
            //Draw board
            window.draw(sBoard);
            //Draw buttons
            window.draw(sButtons);
            //Draw the left hand (on b2)
            window.draw(sb2);
            //Draw idle right hand
            if (x == -100) {
                std::cout << "Left is pressed.\n";
                window.draw(sLeft);
            }
            else if (x == 100) {
                std::cout << "Right is pressed.\n";
                window.draw(sRight);
            }
            else if (y == -100) {
                std::cout << "Down is pressed.\n";
                window.draw(sDown);
            }
            else if (y == 100) {
                std::cout << "Up is pressed.\n";
                window.draw(sJump);
            }
            else {
                window.draw(sIdle_R);
            }
        }
        else if (sf::Joystick::isButtonPressed(0, 3)) {
            std::cout << "Button 3 is pressed.\n";
            window.clear();
            //Draw base (bongo cat)
            window.draw(sBase);
            //Draw blush
            window.draw(sBlush);
            //Draw glasses
            window.draw(sGlasses);
            //Draw hat
            window.draw(sHat);
            //Draw board
            window.draw(sBoard);
            //Draw buttons
            window.draw(sButtons);
            //Draw the left hand (on b3)
            window.draw(sb3);
            //Draw idle right hand
            if (x == -100) {
                std::cout << "Left is pressed.\n";
                window.draw(sLeft);
            }
            else if (x == 100) {
                std::cout << "Right is pressed.\n";
                window.draw(sRight);
            }
            else if (y == -100) {
                std::cout << "Down is pressed.\n";
                window.draw(sDown);
            }
            else if (y == 100) {
                std::cout << "Up is pressed.\n";
                window.draw(sJump);
            }
            else {
                window.draw(sIdle_R);
            }
        }
        else if (sf::Joystick::isButtonPressed(0, 5)) {
            std::cout << "Button 5 is pressed.\n";
            window.clear();
            //Draw base (bongo cat)
            window.draw(sBase);
            //Draw blush
            window.draw(sBlush);
            //Draw glasses
            window.draw(sGlasses);
            //Draw hat
            window.draw(sHat);
            //Draw board
            window.draw(sBoard);
            //Draw buttons
            window.draw(sButtons);
            //Draw the left hand (on b5)
            window.draw(sb5);
            //Draw idle right hand
            if (x == -100) {
                std::cout << "Left is pressed.\n";
                window.draw(sLeft);
            }
            else if (x == 100) {
                std::cout << "Right is pressed.\n";
                window.draw(sRight);
            }
            else if (y == -100) {
                std::cout << "Down is pressed.\n";
                window.draw(sDown);
            }
            else if (y == 100) {
                std::cout << "Up is pressed.\n";
                window.draw(sJump);
            }
            else {
                window.draw(sIdle_R);
            }
        }
        else if (sf::Joystick::isButtonPressed(0, 0)) {
            std::cout << "Button 0 is pressed.\n";
            window.clear();
            //Draw base (bongo cat)
            window.draw(sBase);
            //Draw blush
            window.draw(sBlush);
            //Draw glasses
            window.draw(sGlasses);
            //Draw hat
            window.draw(sHat);
            //Draw board
            window.draw(sBoard);
            //Draw buttons
            window.draw(sButtons);
            //Draw the left hand (on b0)
            window.draw(sb0);
            //Draw idle right hand
            if (x == -100) {
                std::cout << "Left is pressed.\n";
                window.draw(sLeft);
            }
            else if (x == 100) {
                std::cout << "Right is pressed.\n";
                window.draw(sRight);
            }
            else if (y == -100) {
                std::cout << "Down is pressed.\n";
                window.draw(sDown);
            }
            else if (y == 100) {
                std::cout << "Up is pressed.\n";
                window.draw(sJump);
            }
            else {
                window.draw(sIdle_R);
            }
        }
        else if (z == -99) {
            std::cout << "Button Z is pressed.\n";
            window.clear();
            //Draw base (bongo cat)
            window.draw(sBase);
            //Draw blush
            window.draw(sBlush);
            //Draw glasses
            window.draw(sGlasses);
            //Draw hat
            window.draw(sHat);
            //Draw board
            window.draw(sBoard);
            //Draw buttons
            window.draw(sButtons);
            //Draw the left hand (on bz)
            window.draw(sbz);
            //Draw the right hand
            if (x == -100) {
                std::cout << "Left is pressed.\n";
                window.draw(sLeft);
            }
            else if (x == 100) {
                std::cout << "Right is pressed.\n";
                window.draw(sRight);
            }
            else if (y == -100) {
                std::cout << "Down is pressed.\n";
                window.draw(sDown);
            }
            else if (y == 100) {
                std::cout << "Up is pressed.\n";
                window.draw(sJump);
            }
            else {
                window.draw(sIdle_R);
            }
        }
        else if (z == 99) {
            std::cout << "Button R is pressed.\n";
        }

        //For directional buttons
        if (x == -100) {
            std::cout << "Left is pressed.\n";
            window.clear();
            //Draw base (bongo cat)
            window.draw(sBase);
            //Draw blush
            window.draw(sBlush);
            //Draw glasses
            window.draw(sGlasses);
            //Draw hat
            window.draw(sHat);
            //Draw board
            window.draw(sBoard);
            //Draw buttons
            window.draw(sButtons);
            window.draw(sLeft);
            if (sf::Joystick::isButtonPressed(0, 1)) {
                std::cout << "Button 1 is pressed.\n";
                window.draw(sb1);
            }
            else if (sf::Joystick::isButtonPressed(0, 2)) {
                std::cout << "Button 2 is pressed.\n";
                //Draw the left hand (on b2)
                window.draw(sb2);
            }
            else if (sf::Joystick::isButtonPressed(0, 3)) {
                std::cout << "Button 3 is pressed.\n";
                //Draw the left hand (on b3)
                window.draw(sb3);
            }
            else if (sf::Joystick::isButtonPressed(0, 5)) {
                std::cout << "Button 5 is pressed.\n";
                //Draw the left hand (on b5)
                window.draw(sb5);
            }
            else if (sf::Joystick::isButtonPressed(0, 0)) {
                std::cout << "Button 0 is pressed.\n";
                //Draw the left hand (on b0)
                window.draw(sb0);
            }
            else if (z == -99) {
                //Draw the left hand (on bz)
                window.draw(sbz);
            }
            else {
                window.draw(sIdle_L);
            }
        }
        else if (x == 100) {
            std::cout << "Right is pressed.\n";
            window.clear();
            //Draw base (bongo cat)
            window.draw(sBase);
            //Draw blush
            window.draw(sBlush);
            //Draw glasses
            window.draw(sGlasses);
            //Draw hat
            window.draw(sHat);
            //Draw board
            window.draw(sBoard);
            //Draw buttons
            window.draw(sButtons);
            //Draw right hand on right
            window.draw(sRight);
            if (sf::Joystick::isButtonPressed(0, 1)) {
                std::cout << "Button 1 is pressed.\n";
                window.draw(sb1);
            }
            else if (sf::Joystick::isButtonPressed(0, 2)) {
                std::cout << "Button 2 is pressed.\n";
                //Draw the left hand (on b2)
                window.draw(sb2);
            }
            else if (sf::Joystick::isButtonPressed(0, 3)) {
                std::cout << "Button 3 is pressed.\n";
                //Draw the left hand (on b3)
                window.draw(sb3);
            }
            else if (sf::Joystick::isButtonPressed(0, 5)) {
                std::cout << "Button 5 is pressed.\n";
                //Draw the left hand (on b5)
                window.draw(sb5);
            }
            else if (sf::Joystick::isButtonPressed(0, 0)) {
                std::cout << "Button 0 is pressed.\n";
                //Draw the left hand (on b0)
                window.draw(sb0);
            }
            else if (z == -99) {
                //Draw the left hand (on bz)
                window.draw(sbz);
            }
            else {
                window.draw(sIdle_L);
            }
        }
        else if (y == -100) {
            std::cout << "Down is pressed.\n";
            window.clear();
            //Draw base (bongo cat)
            window.draw(sBase);
            //Draw blush
            window.draw(sBlush);
            //Draw glasses
            window.draw(sGlasses);
            //Draw hat
            window.draw(sHat);
            //Draw board
            window.draw(sBoard);
            //Draw buttons
            window.draw(sButtons);
            window.draw(sDown);
            if (sf::Joystick::isButtonPressed(0, 1)) {
                std::cout << "Button 1 is pressed.\n";
                window.draw(sb1);
            }
            else if (sf::Joystick::isButtonPressed(0, 2)) {
                std::cout << "Button 2 is pressed.\n";
                //Draw the left hand (on b2)
                window.draw(sb2);
            }
            else if (sf::Joystick::isButtonPressed(0, 3)) {
                std::cout << "Button 3 is pressed.\n";
                //Draw the left hand (on b3)
                window.draw(sb3);
            }
            else if (sf::Joystick::isButtonPressed(0, 5)) {
                std::cout << "Button 5 is pressed.\n";
                //Draw the left hand (on b5)
                window.draw(sb5);
            }
            else if (sf::Joystick::isButtonPressed(0, 0)) {
                std::cout << "Button 0 is pressed.\n";
                //Draw the left hand (on b0)
                window.draw(sb0);
            }
            else if (z == -99) {
                //Draw the left hand (on bz)
                window.draw(sbz);
            }
            else {
                window.draw(sIdle_L);
            }
        }
        else if (y == 100) {
            std::cout << "Up is pressed.\n";
            window.clear();
            //Draw base (bongo cat)
            window.draw(sBase);
            //Draw blush
            window.draw(sBlush);
            //Draw glasses
            window.draw(sGlasses);
            //Draw hat
            window.draw(sHat);
            //Draw board
            window.draw(sBoard);
            //Draw buttons
            window.draw(sButtons);
            window.draw(sJump);
            if (sf::Joystick::isButtonPressed(0, 1)) {
                std::cout << "Button 1 is pressed.\n";
                window.draw(sb1);
            }
            else if (sf::Joystick::isButtonPressed(0, 2)) {
                std::cout << "Button 2 is pressed.\n";
                //Draw the left hand (on b2)
                window.draw(sb2);
            }
            else if (sf::Joystick::isButtonPressed(0, 3)) {
                std::cout << "Button 3 is pressed.\n";
                //Draw the left hand (on b3)
                window.draw(sb3);
            }
            else if (sf::Joystick::isButtonPressed(0, 5)) {
                std::cout << "Button 5 is pressed.\n";
                //Draw the left hand (on b5)
                window.draw(sb5);
            }
            else if (sf::Joystick::isButtonPressed(0, 0)) {
                std::cout << "Button 0 is pressed.\n";
                //Draw the left hand (on b0)
                window.draw(sb0);
            }
            else if (z == -99) {
                //Draw the left hand (on bz)
                window.draw(sbz);
            }
            else {
                window.draw(sIdle_L);
            }
        }
        window.display();
    }
    return 0;
}