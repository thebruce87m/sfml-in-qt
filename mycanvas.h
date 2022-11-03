#ifndef MYCANVAS_H
#define MYCANVAS_H

#include "qsfmlcanvas.h"

#define DEGREES_PER_SECOND (180)

class MyCanvas : public QSFMLCanvas
{
public :

    MyCanvas(QWidget* Parent, const QPoint& Position, const QSize& Size) :
    QSFMLCanvas(Parent, Position, Size)
    {

    }

private :

    void OnInit()
    {
        // Load the image
        myTexture.loadFromFile("peace.png");

        // Setup the sprite
        mySprite.setTexture(myTexture);
        mySprite.setOrigin(myTexture.getSize().x / 2.0, myTexture.getSize().y / 2.0);
        mySprite.setPosition(myTexture.getSize().x / 2.0, myTexture.getSize().y / 2.0);
    }

    void OnUpdate()
    {
        // Clear screen
        clear(sf::Color(128, 0, 0));

        sf::Time time = myClock.getElapsedTime();
        myClock.restart();

        auto rotation = time.asSeconds() * DEGREES_PER_SECOND;

        // Rotate the sprite
        mySprite.rotate(rotation);

        // Draw it
        draw(mySprite);
    }

    sf::Sprite mySprite;
    sf::Texture myTexture;
    sf::Clock myClock;
};

#endif // MYCANVAS_H
