/***********************************************************************
 * Implementation File:	Bullet.h
 * Author:		Daniel R. Thomson
 * Summary:		This is a projectile.
 ************************************************************************/

#include "bullet.h"

 /*********************************************
  * BULLET :: Default Constructor
  *********************************************/
Bullet::Bullet() : FlyingObject()
{
	setLifespan(40);
}

/*********************************************
 * BULLET :: Non-Default Constructor
 *********************************************/
Bullet::Bullet(const Point & pos) : FlyingObject()
{
	setLifespan(40);
}

/*********************************************
 * BULLET :: Destructor
 *********************************************/
Bullet::~Bullet()
{}

/*********************************************
 * BULLET :: fire
 * The Trig functions (sin, cos) are used in
 * determining the x and y components of
 * the angle, Point and Velocity passed by ship
 *********************************************/
void Bullet::fire(Point pos, const float & angle, const Velocity & speed)
{
	setPoint(pos);
	float dx = BULLET_SPEED * (-sin(M_PI / 180.0 * angle));
	float dy = BULLET_SPEED * (cos(M_PI / 180.0 * angle));

	motion.setDx(dx + speed.getDx());
	motion.setDy(dy + speed.getDy());
}
