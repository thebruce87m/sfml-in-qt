#ifndef MYCANVAS_H
#define MYCANVAS_H

#include "qsfmlcanvas.h"

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
    }

    void OnUpdate()
    {
        // Clear screen
        clear(sf::Color(128, 0, 0));

        // Rotate the sprite
        mySprite.rotate(1);

        // Draw it
        draw(mySprite);
    }

    sf::Sprite mySprite;
    sf::Texture myTexture;
};

#endif // MYCANVAS_H
