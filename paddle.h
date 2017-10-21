#ifndef PADDLE_H
#define PADDLE_H


#pragma once

#include <QImage>
#include <QRect>

class Paddle {

  public:
    Paddle();
    ~Paddle();

  public:
    void resetState();
    void move();
    void setDx(int);
    QRect getRect();
    QImage & getImage();

  private:
    QImage image;
    QRect rect;
    int dx;
    static const int INITIAL_X = 200;
    static const int INITIAL_Y = 360;

    static const int LEFT_EDGE = 0;
    static const int RIGHT_EDGE = 300;
};

#endif // PADDLE_H
