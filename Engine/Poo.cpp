#include "Poo.h"
#include "Graphics.h"
#include <assert.h>

void Poo::Init( float in_x,float in_y,float in_vx,float in_vy )
{
	assert( initialized == false );
	x = in_x;
	y = in_y;
	vx = in_vx;
	vy = in_vy;
	initialized = true;
}

void Poo::Update(float dt)
{
	assert( initialized == true );
	x += vx * dt*60;
	y += vy * dt*60;

	const float right = x + width;
	if( x < 0 )
	{
		x = 0;
		vx = -vx;
	}
	else if( right >= Graphics::ScreenWidth )
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}

	const float bottom = y + height;
	if( y < 0 )
	{
		y = 0;
		vy = -vy;
	}
	else if( bottom >= Graphics::ScreenHeight )
	{
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}
}

bool Poo::TestCollision( const Dude& dude ) const
{
	assert( initialized == true );
	const float duderight = dude.GetX() + dude.GetWidth();
	const float dudebottom = dude.GetY() + dude.GetHeight();
	const float pooright = x + width;
	const float poobottom = y + height;

	return
		duderight >= x &&
		dude.GetX() <= pooright &&
		dudebottom >= y &&
		dude.GetY() <= poobottom;
}

void Poo::Draw( Graphics& gfx ) const
{
	
	assert( initialized == true );
	int in_x = (int)x;
	int in_y = (int)y;
	gfx.PutPixel( 14 + in_x,0 + in_y,138,77,0 );
	gfx.PutPixel( 7 + in_x,1 + in_y,138,77,0 );
	gfx.PutPixel( 13 + in_x,1 + in_y,138,77,0 );
	gfx.PutPixel( 20 + in_x,1 + in_y,138,77,0 );
	gfx.PutPixel( 6 + in_x,2 + in_y,138,77,0 );
	gfx.PutPixel( 13 + in_x,2 + in_y,138,77,0 );
	gfx.PutPixel( 20 + in_x,2 + in_y,138,77,0 );
	gfx.PutPixel( 6 + in_x,3 + in_y,138,77,0 );
	gfx.PutPixel( 6 + in_x,4 + in_y,138,77,0 );
	gfx.PutPixel( 14 + in_x,4 + in_y,138,77,0 );
	gfx.PutPixel( 21 + in_x,4 + in_y,138,77,0 );
	gfx.PutPixel( 7 + in_x,5 + in_y,138,77,0 );
	gfx.PutPixel( 13 + in_x,5 + in_y,138,77,0 );
	gfx.PutPixel( 21 + in_x,5 + in_y,138,77,0 );
	gfx.PutPixel( 7 + in_x,6 + in_y,138,77,0 );
	gfx.PutPixel( 20 + in_x,6 + in_y,138,77,0 );
	gfx.PutPixel( 6 + in_x,7 + in_y,138,77,0 );
	gfx.PutPixel( 14 + in_x,7 + in_y,51,28,0 );
	gfx.PutPixel( 15 + in_x,7 + in_y,51,28,0 );
	gfx.PutPixel( 20 + in_x,7 + in_y,138,77,0 );
	gfx.PutPixel( 12 + in_x,8 + in_y,51,28,0 );
	gfx.PutPixel( 13 + in_x,8 + in_y,51,28,0 );
	gfx.PutPixel( 14 + in_x,8 + in_y,51,28,0 );
	gfx.PutPixel( 7 + in_x,9 + in_y,138,77,0 );
	gfx.PutPixel( 11 + in_x,9 + in_y,51,28,0 );
	gfx.PutPixel( 12 + in_x,9 + in_y,102,57,0 );
	gfx.PutPixel( 13 + in_x,9 + in_y,138,77,0 );
	gfx.PutPixel( 14 + in_x,9 + in_y,138,77,0 );
	gfx.PutPixel( 15 + in_x,9 + in_y,51,28,0 );
	gfx.PutPixel( 21 + in_x,9 + in_y,138,77,0 );
	gfx.PutPixel( 10 + in_x,10 + in_y,51,28,0 );
	gfx.PutPixel( 11 + in_x,10 + in_y,51,28,0 );
	gfx.PutPixel( 12 + in_x,10 + in_y,102,57,0 );
	gfx.PutPixel( 13 + in_x,10 + in_y,138,77,0 );
	gfx.PutPixel( 14 + in_x,10 + in_y,138,77,0 );
	gfx.PutPixel( 15 + in_x,10 + in_y,51,28,0 );
	gfx.PutPixel( 20 + in_x,10 + in_y,138,77,0 );
	gfx.PutPixel( 9 + in_x,11 + in_y,51,28,0 );
	gfx.PutPixel( 10 + in_x,11 + in_y,138,77,0 );
	gfx.PutPixel( 11 + in_x,11 + in_y,138,77,0 );
	gfx.PutPixel( 12 + in_x,11 + in_y,51,28,0 );
	gfx.PutPixel( 13 + in_x,11 + in_y,51,28,0 );
	gfx.PutPixel( 14 + in_x,11 + in_y,51,28,0 );
	gfx.PutPixel( 15 + in_x,11 + in_y,51,28,0 );
	gfx.PutPixel( 16 + in_x,11 + in_y,51,28,0 );
	gfx.PutPixel( 9 + in_x,12 + in_y,51,28,0 );
	gfx.PutPixel( 10 + in_x,12 + in_y,138,77,0 );
	gfx.PutPixel( 11 + in_x,12 + in_y,138,77,0 );
	gfx.PutPixel( 12 + in_x,12 + in_y,111,62,0 );
	gfx.PutPixel( 13 + in_x,12 + in_y,102,57,0 );
	gfx.PutPixel( 14 + in_x,12 + in_y,102,57,0 );
	gfx.PutPixel( 15 + in_x,12 + in_y,102,57,0 );
	gfx.PutPixel( 16 + in_x,12 + in_y,51,28,0 );
	gfx.PutPixel( 9 + in_x,13 + in_y,51,28,0 );
	gfx.PutPixel( 10 + in_x,13 + in_y,109,61,0 );
	gfx.PutPixel( 11 + in_x,13 + in_y,138,77,0 );
	gfx.PutPixel( 12 + in_x,13 + in_y,138,77,0 );
	gfx.PutPixel( 13 + in_x,13 + in_y,138,77,0 );
	gfx.PutPixel( 14 + in_x,13 + in_y,138,77,0 );
	gfx.PutPixel( 15 + in_x,13 + in_y,138,77,0 );
	gfx.PutPixel( 16 + in_x,13 + in_y,51,28,0 );
	gfx.PutPixel( 5 + in_x,14 + in_y,51,28,0 );
	gfx.PutPixel( 7 + in_x,14 + in_y,51,28,0 );
	gfx.PutPixel( 8 + in_x,14 + in_y,51,28,0 );
	gfx.PutPixel( 9 + in_x,14 + in_y,51,28,0 );
	gfx.PutPixel( 10 + in_x,14 + in_y,51,28,0 );
	gfx.PutPixel( 11 + in_x,14 + in_y,138,77,0 );
	gfx.PutPixel( 12 + in_x,14 + in_y,138,77,0 );
	gfx.PutPixel( 13 + in_x,14 + in_y,138,77,0 );
	gfx.PutPixel( 14 + in_x,14 + in_y,138,77,0 );
	gfx.PutPixel( 15 + in_x,14 + in_y,138,77,0 );
	gfx.PutPixel( 16 + in_x,14 + in_y,51,28,0 );
	gfx.PutPixel( 4 + in_x,15 + in_y,51,28,0 );
	gfx.PutPixel( 5 + in_x,15 + in_y,138,77,0 );
	gfx.PutPixel( 6 + in_x,15 + in_y,51,28,0 );
	gfx.PutPixel( 7 + in_x,15 + in_y,116,65,0 );
	gfx.PutPixel( 8 + in_x,15 + in_y,138,77,0 );
	gfx.PutPixel( 9 + in_x,15 + in_y,138,77,0 );
	gfx.PutPixel( 10 + in_x,15 + in_y,138,77,0 );
	gfx.PutPixel( 11 + in_x,15 + in_y,51,28,0 );
	gfx.PutPixel( 12 + in_x,15 + in_y,51,28,0 );
	gfx.PutPixel( 13 + in_x,15 + in_y,51,28,0 );
	gfx.PutPixel( 14 + in_x,15 + in_y,51,28,0 );
	gfx.PutPixel( 15 + in_x,15 + in_y,51,28,0 );
	gfx.PutPixel( 16 + in_x,15 + in_y,51,28,0 );
	gfx.PutPixel( 17 + in_x,15 + in_y,51,28,0 );
	gfx.PutPixel( 18 + in_x,15 + in_y,51,28,0 );
	gfx.PutPixel( 1 + in_x,16 + in_y,51,28,0 );
	gfx.PutPixel( 2 + in_x,16 + in_y,51,28,0 );
	gfx.PutPixel( 3 + in_x,16 + in_y,51,28,0 );
	gfx.PutPixel( 4 + in_x,16 + in_y,51,28,0 );
	gfx.PutPixel( 5 + in_x,16 + in_y,138,77,0 );
	gfx.PutPixel( 6 + in_x,16 + in_y,51,28,0 );
	gfx.PutPixel( 7 + in_x,16 + in_y,116,65,0 );
	gfx.PutPixel( 8 + in_x,16 + in_y,138,77,0 );
	gfx.PutPixel( 9 + in_x,16 + in_y,138,77,0 );
	gfx.PutPixel( 10 + in_x,16 + in_y,138,77,0 );
	gfx.PutPixel( 11 + in_x,16 + in_y,138,77,0 );
	gfx.PutPixel( 12 + in_x,16 + in_y,138,77,0 );
	gfx.PutPixel( 13 + in_x,16 + in_y,109,61,0 );
	gfx.PutPixel( 14 + in_x,16 + in_y,51,28,0 );
	gfx.PutPixel( 15 + in_x,16 + in_y,138,77,0 );
	gfx.PutPixel( 16 + in_x,16 + in_y,138,77,0 );
	gfx.PutPixel( 17 + in_x,16 + in_y,138,77,0 );
	gfx.PutPixel( 18 + in_x,16 + in_y,123,69,0 );
	gfx.PutPixel( 19 + in_x,16 + in_y,51,28,0 );
	gfx.PutPixel( 0 + in_x,17 + in_y,51,28,0 );
	gfx.PutPixel( 1 + in_x,17 + in_y,87,49,0 );
	gfx.PutPixel( 2 + in_x,17 + in_y,87,49,0 );
	gfx.PutPixel( 3 + in_x,17 + in_y,87,49,0 );
	gfx.PutPixel( 4 + in_x,17 + in_y,87,49,0 );
	gfx.PutPixel( 5 + in_x,17 + in_y,51,28,0 );
	gfx.PutPixel( 6 + in_x,17 + in_y,51,28,0 );
	gfx.PutPixel( 7 + in_x,17 + in_y,43,24,0 );
	gfx.PutPixel( 8 + in_x,17 + in_y,51,28,0 );
	gfx.PutPixel( 9 + in_x,17 + in_y,51,28,0 );
	gfx.PutPixel( 10 + in_x,17 + in_y,51,28,0 );
	gfx.PutPixel( 11 + in_x,17 + in_y,51,28,0 );
	gfx.PutPixel( 12 + in_x,17 + in_y,51,28,0 );
	gfx.PutPixel( 13 + in_x,17 + in_y,40,22,0 );
	gfx.PutPixel( 14 + in_x,17 + in_y,51,28,0 );
	gfx.PutPixel( 15 + in_x,17 + in_y,138,77,0 );
	gfx.PutPixel( 16 + in_x,17 + in_y,138,77,0 );
	gfx.PutPixel( 17 + in_x,17 + in_y,138,77,0 );
	gfx.PutPixel( 18 + in_x,17 + in_y,123,69,0 );
	gfx.PutPixel( 19 + in_x,17 + in_y,51,28,0 );
	gfx.PutPixel( 0 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 1 + in_x,18 + in_y,138,77,0 );
	gfx.PutPixel( 2 + in_x,18 + in_y,138,77,0 );
	gfx.PutPixel( 3 + in_x,18 + in_y,138,77,0 );
	gfx.PutPixel( 4 + in_x,18 + in_y,138,77,0 );
	gfx.PutPixel( 5 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 6 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 7 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 8 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 9 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 10 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 11 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 12 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 13 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 14 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 15 + in_x,18 + in_y,138,77,0 );
	gfx.PutPixel( 16 + in_x,18 + in_y,138,77,0 );
	gfx.PutPixel( 17 + in_x,18 + in_y,138,77,0 );
	gfx.PutPixel( 18 + in_x,18 + in_y,123,69,0 );
	gfx.PutPixel( 19 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 20 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 21 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 22 + in_x,18 + in_y,51,28,0 );
	gfx.PutPixel( 0 + in_x,19 + in_y,51,28,0 );
	gfx.PutPixel( 1 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 2 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 3 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 4 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 5 + in_x,19 + in_y,51,28,0 );
	gfx.PutPixel( 6 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 7 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 8 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 9 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 10 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 11 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 12 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 13 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 14 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 15 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 16 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 17 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 18 + in_x,19 + in_y,123,69,0 );
	gfx.PutPixel( 19 + in_x,19 + in_y,51,28,0 );
	gfx.PutPixel( 20 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 21 + in_x,19 + in_y,138,77,0 );
	gfx.PutPixel( 22 + in_x,19 + in_y,65,36,0 );
	gfx.PutPixel( 23 + in_x,19 + in_y,51,28,0 );
	gfx.PutPixel( 1 + in_x,20 + in_y,51,28,0 );
	gfx.PutPixel( 2 + in_x,20 + in_y,51,28,0 );
	gfx.PutPixel( 3 + in_x,20 + in_y,51,28,0 );
	gfx.PutPixel( 4 + in_x,20 + in_y,51,28,0 );
	gfx.PutPixel( 5 + in_x,20 + in_y,51,28,0 );
	gfx.PutPixel( 6 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 7 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 8 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 9 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 10 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 11 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 12 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 13 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 14 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 15 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 16 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 17 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 18 + in_x,20 + in_y,123,69,0 );
	gfx.PutPixel( 19 + in_x,20 + in_y,51,28,0 );
	gfx.PutPixel( 20 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 21 + in_x,20 + in_y,138,77,0 );
	gfx.PutPixel( 22 + in_x,20 + in_y,65,36,0 );
	gfx.PutPixel( 23 + in_x,20 + in_y,51,28,0 );
	gfx.PutPixel( 0 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 1 + in_x,21 + in_y,138,77,0 );
	gfx.PutPixel( 2 + in_x,21 + in_y,138,77,0 );
	gfx.PutPixel( 3 + in_x,21 + in_y,138,77,0 );
	gfx.PutPixel( 4 + in_x,21 + in_y,138,77,0 );
	gfx.PutPixel( 5 + in_x,21 + in_y,138,77,0 );
	gfx.PutPixel( 6 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 7 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 8 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 9 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 10 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 11 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 12 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 13 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 14 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 15 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 16 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 17 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 18 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 20 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 21 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 22 + in_x,21 + in_y,51,28,0 );
	gfx.PutPixel( 0 + in_x,22 + in_y,51,28,0 );
	gfx.PutPixel( 1 + in_x,22 + in_y,65,36,0 );
	gfx.PutPixel( 2 + in_x,22 + in_y,65,36,0 );
	gfx.PutPixel( 3 + in_x,22 + in_y,65,36,0 );
	gfx.PutPixel( 4 + in_x,22 + in_y,65,36,0 );
	gfx.PutPixel( 5 + in_x,22 + in_y,65,36,0 );
	gfx.PutPixel( 6 + in_x,22 + in_y,51,28,0 );
	gfx.PutPixel( 1 + in_x,23 + in_y,51,28,0 );
	gfx.PutPixel( 2 + in_x,23 + in_y,51,28,0 );
	gfx.PutPixel( 3 + in_x,23 + in_y,51,28,0 );
	gfx.PutPixel( 4 + in_x,23 + in_y,51,28,0 );
	gfx.PutPixel( 5 + in_x,23 + in_y,51,28,0 );
	gfx.PutPixel( 6 + in_x,23 + in_y,51,28,0 );
}