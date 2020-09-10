#include "Dude.h"
#include "Graphics.h"

void Dude::ClampToScreen()
{
	const float right = x + width;
	if( x < 0 )
	{
		x = 0;
	}
	else if( right >= Graphics::ScreenWidth )
	{
		x = (Graphics::ScreenWidth - 1) - width;
	}

	const float bottom = y + height;
	if( y < 0 )
	{
		y = 0;
	}
	else if( bottom >= Graphics::ScreenHeight )
	{
		y = (Graphics::ScreenHeight - 1) - height;
	}
}

void Dude::Draw( Graphics& gfx ) const
{
	int in_x = (int)x;
	int in_y = (int)y;
	gfx.PutPixel( 7 + in_x,0 + in_y,0,0,0 );
	gfx.PutPixel( 8 + in_x,0 + in_y,0,0,0 );
	gfx.PutPixel( 9 + in_x,0 + in_y,0,0,0 );
	gfx.PutPixel( 10 + in_x,0 + in_y,0,0,0 );
	gfx.PutPixel( 11 + in_x,0 + in_y,0,0,0 );
	gfx.PutPixel( 12 + in_x,0 + in_y,0,0,0 );
	gfx.PutPixel( 5 + in_x,1 + in_y,0,0,0 );
	gfx.PutPixel( 6 + in_x,1 + in_y,0,0,0 );
	gfx.PutPixel( 7 + in_x,1 + in_y,254,221,88 );
	gfx.PutPixel( 8 + in_x,1 + in_y,254,221,88 );
	gfx.PutPixel( 9 + in_x,1 + in_y,254,221,88 );
	gfx.PutPixel( 10 + in_x,1 + in_y,254,221,88 );
	gfx.PutPixel( 11 + in_x,1 + in_y,254,221,88 );
	gfx.PutPixel( 12 + in_x,1 + in_y,254,221,88 );
	gfx.PutPixel( 13 + in_x,1 + in_y,0,0,0 );
	gfx.PutPixel( 14 + in_x,1 + in_y,0,0,0 );
	gfx.PutPixel( 3 + in_x,2 + in_y,0,0,0 );
	gfx.PutPixel( 4 + in_x,2 + in_y,0,0,0 );
	gfx.PutPixel( 5 + in_x,2 + in_y,254,221,88 );
	gfx.PutPixel( 6 + in_x,2 + in_y,254,221,88 );
	gfx.PutPixel( 7 + in_x,2 + in_y,254,221,88 );
	gfx.PutPixel( 8 + in_x,2 + in_y,254,221,88 );
	gfx.PutPixel( 9 + in_x,2 + in_y,254,221,88 );
	gfx.PutPixel( 10 + in_x,2 + in_y,254,221,88 );
	gfx.PutPixel( 11 + in_x,2 + in_y,254,221,88 );
	gfx.PutPixel( 12 + in_x,2 + in_y,254,221,88 );
	gfx.PutPixel( 13 + in_x,2 + in_y,254,221,88 );
	gfx.PutPixel( 14 + in_x,2 + in_y,254,221,88 );
	gfx.PutPixel( 15 + in_x,2 + in_y,0,0,0 );
	gfx.PutPixel( 16 + in_x,2 + in_y,0,0,0 );
	gfx.PutPixel( 2 + in_x,3 + in_y,0,0,0 );
	gfx.PutPixel( 3 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 4 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 5 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 6 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 7 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 8 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 9 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 10 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 11 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 12 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 13 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 14 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 15 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 16 + in_x,3 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,3 + in_y,0,0,0 );
	gfx.PutPixel( 2 + in_x,4 + in_y,0,0,0 );
	gfx.PutPixel( 3 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 4 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 5 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 6 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 7 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 8 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 9 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 10 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 11 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 12 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 13 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 14 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 15 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 16 + in_x,4 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,4 + in_y,0,0,0 );
	gfx.PutPixel( 1 + in_x,5 + in_y,0,0,0 );
	gfx.PutPixel( 2 + in_x,5 + in_y,254,221,88 );
	gfx.PutPixel( 3 + in_x,5 + in_y,0,0,0 );
	gfx.PutPixel( 4 + in_x,5 + in_y,0,0,0 );
	gfx.PutPixel( 5 + in_x,5 + in_y,254,221,88 );
	gfx.PutPixel( 6 + in_x,5 + in_y,254,221,88 );
	gfx.PutPixel( 7 + in_x,5 + in_y,254,221,88 );
	gfx.PutPixel( 8 + in_x,5 + in_y,254,221,88 );
	gfx.PutPixel( 9 + in_x,5 + in_y,254,221,88 );
	gfx.PutPixel( 10 + in_x,5 + in_y,254,221,88 );
	gfx.PutPixel( 11 + in_x,5 + in_y,0,0,0 );
	gfx.PutPixel( 12 + in_x,5 + in_y,0,0,0 );
	gfx.PutPixel( 13 + in_x,5 + in_y,0,0,0 );
	gfx.PutPixel( 14 + in_x,5 + in_y,0,0,0 );
	gfx.PutPixel( 15 + in_x,5 + in_y,254,221,88 );
	gfx.PutPixel( 16 + in_x,5 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,5 + in_y,254,221,88 );
	gfx.PutPixel( 18 + in_x,5 + in_y,0,0,0 );
	gfx.PutPixel( 1 + in_x,6 + in_y,0,0,0 );
	gfx.PutPixel( 2 + in_x,6 + in_y,0,0,0 );
	gfx.PutPixel( 3 + in_x,6 + in_y,255,255,255 );
	gfx.PutPixel( 4 + in_x,6 + in_y,0,0,0 );
	gfx.PutPixel( 5 + in_x,6 + in_y,0,0,0 );
	gfx.PutPixel( 6 + in_x,6 + in_y,254,221,88 );
	gfx.PutPixel( 7 + in_x,6 + in_y,254,221,88 );
	gfx.PutPixel( 8 + in_x,6 + in_y,254,221,88 );
	gfx.PutPixel( 9 + in_x,6 + in_y,254,221,88 );
	gfx.PutPixel( 10 + in_x,6 + in_y,0,0,0 );
	gfx.PutPixel( 11 + in_x,6 + in_y,255,255,255 );
	gfx.PutPixel( 12 + in_x,6 + in_y,255,255,255 );
	gfx.PutPixel( 13 + in_x,6 + in_y,0,0,0 );
	gfx.PutPixel( 14 + in_x,6 + in_y,0,0,0 );
	gfx.PutPixel( 15 + in_x,6 + in_y,0,0,0 );
	gfx.PutPixel( 16 + in_x,6 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,6 + in_y,254,221,88 );
	gfx.PutPixel( 18 + in_x,6 + in_y,0,0,0 );
	gfx.PutPixel( 0 + in_x,7 + in_y,0,0,0 );
	gfx.PutPixel( 1 + in_x,7 + in_y,0,0,0 );
	gfx.PutPixel( 2 + in_x,7 + in_y,255,255,255 );
	gfx.PutPixel( 3 + in_x,7 + in_y,255,255,255 );
	gfx.PutPixel( 4 + in_x,7 + in_y,0,0,0 );
	gfx.PutPixel( 5 + in_x,7 + in_y,0,0,0 );
	gfx.PutPixel( 6 + in_x,7 + in_y,254,221,88 );
	gfx.PutPixel( 7 + in_x,7 + in_y,254,221,88 );
	gfx.PutPixel( 8 + in_x,7 + in_y,254,221,88 );
	gfx.PutPixel( 9 + in_x,7 + in_y,254,221,88 );
	gfx.PutPixel( 10 + in_x,7 + in_y,0,0,0 );
	gfx.PutPixel( 11 + in_x,7 + in_y,255,255,255 );
	gfx.PutPixel( 12 + in_x,7 + in_y,255,255,255 );
	gfx.PutPixel( 13 + in_x,7 + in_y,0,0,0 );
	gfx.PutPixel( 14 + in_x,7 + in_y,0,0,0 );
	gfx.PutPixel( 15 + in_x,7 + in_y,0,0,0 );
	gfx.PutPixel( 16 + in_x,7 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,7 + in_y,254,221,88 );
	gfx.PutPixel( 18 + in_x,7 + in_y,254,221,88 );
	gfx.PutPixel( 19 + in_x,7 + in_y,0,0,0 );
	gfx.PutPixel( 0 + in_x,8 + in_y,0,0,0 );
	gfx.PutPixel( 1 + in_x,8 + in_y,0,0,0 );
	gfx.PutPixel( 2 + in_x,8 + in_y,255,255,255 );
	gfx.PutPixel( 3 + in_x,8 + in_y,255,255,255 );
	gfx.PutPixel( 4 + in_x,8 + in_y,255,255,255 );
	gfx.PutPixel( 5 + in_x,8 + in_y,0,0,0 );
	gfx.PutPixel( 6 + in_x,8 + in_y,254,221,88 );
	gfx.PutPixel( 7 + in_x,8 + in_y,254,221,88 );
	gfx.PutPixel( 8 + in_x,8 + in_y,254,221,88 );
	gfx.PutPixel( 9 + in_x,8 + in_y,254,221,88 );
	gfx.PutPixel( 10 + in_x,8 + in_y,0,0,0 );
	gfx.PutPixel( 11 + in_x,8 + in_y,255,255,255 );
	gfx.PutPixel( 12 + in_x,8 + in_y,255,255,255 );
	gfx.PutPixel( 13 + in_x,8 + in_y,255,255,255 );
	gfx.PutPixel( 14 + in_x,8 + in_y,255,255,255 );
	gfx.PutPixel( 15 + in_x,8 + in_y,0,0,0 );
	gfx.PutPixel( 16 + in_x,8 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,8 + in_y,254,221,88 );
	gfx.PutPixel( 18 + in_x,8 + in_y,254,221,88 );
	gfx.PutPixel( 19 + in_x,8 + in_y,0,0,0 );
	gfx.PutPixel( 0 + in_x,9 + in_y,0,0,0 );
	gfx.PutPixel( 1 + in_x,9 + in_y,254,221,88 );
	gfx.PutPixel( 2 + in_x,9 + in_y,0,0,0 );
	gfx.PutPixel( 3 + in_x,9 + in_y,0,0,0 );
	gfx.PutPixel( 4 + in_x,9 + in_y,0,0,0 );
	gfx.PutPixel( 5 + in_x,9 + in_y,0,0,0 );
	gfx.PutPixel( 6 + in_x,9 + in_y,254,221,88 );
	gfx.PutPixel( 7 + in_x,9 + in_y,254,221,88 );
	gfx.PutPixel( 8 + in_x,9 + in_y,254,221,88 );
	gfx.PutPixel( 9 + in_x,9 + in_y,254,221,88 );
	gfx.PutPixel( 10 + in_x,9 + in_y,254,221,88 );
	gfx.PutPixel( 11 + in_x,9 + in_y,0,0,0 );
	gfx.PutPixel( 12 + in_x,9 + in_y,0,0,0 );
	gfx.PutPixel( 13 + in_x,9 + in_y,0,0,0 );
	gfx.PutPixel( 14 + in_x,9 + in_y,0,0,0 );
	gfx.PutPixel( 15 + in_x,9 + in_y,254,221,88 );
	gfx.PutPixel( 16 + in_x,9 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,9 + in_y,254,221,88 );
	gfx.PutPixel( 18 + in_x,9 + in_y,254,221,88 );
	gfx.PutPixel( 19 + in_x,9 + in_y,0,0,0 );
	gfx.PutPixel( 0 + in_x,10 + in_y,0,0,0 );
	gfx.PutPixel( 1 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 2 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 3 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 4 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 5 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 6 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 7 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 8 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 9 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 10 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 11 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 12 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 13 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 14 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 15 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 16 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 18 + in_x,10 + in_y,254,221,88 );
	gfx.PutPixel( 19 + in_x,10 + in_y,0,0,0 );
	gfx.PutPixel( 0 + in_x,11 + in_y,0,0,0 );
	gfx.PutPixel( 1 + in_x,11 + in_y,254,221,88 );
	gfx.PutPixel( 2 + in_x,11 + in_y,254,221,88 );
	gfx.PutPixel( 3 + in_x,11 + in_y,254,221,88 );
	gfx.PutPixel( 4 + in_x,11 + in_y,254,221,88 );
	gfx.PutPixel( 5 + in_x,11 + in_y,254,221,88 );
	gfx.PutPixel( 6 + in_x,11 + in_y,254,221,88 );
	gfx.PutPixel( 7 + in_x,11 + in_y,20,14,18 );
	gfx.PutPixel( 8 + in_x,11 + in_y,18,11,14 );
	gfx.PutPixel( 9 + in_x,11 + in_y,18,12,14 );
	gfx.PutPixel( 10 + in_x,11 + in_y,18,12,14 );
	gfx.PutPixel( 11 + in_x,11 + in_y,21,13,16 );
	gfx.PutPixel( 12 + in_x,11 + in_y,24,11,15 );
	gfx.PutPixel( 13 + in_x,11 + in_y,0,0,0 );
	gfx.PutPixel( 14 + in_x,11 + in_y,254,221,88 );
	gfx.PutPixel( 15 + in_x,11 + in_y,254,221,88 );
	gfx.PutPixel( 16 + in_x,11 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,11 + in_y,254,221,88 );
	gfx.PutPixel( 18 + in_x,11 + in_y,254,221,88 );
	gfx.PutPixel( 19 + in_x,11 + in_y,0,0,0 );
	gfx.PutPixel( 0 + in_x,12 + in_y,0,0,0 );
	gfx.PutPixel( 1 + in_x,12 + in_y,254,221,88 );
	gfx.PutPixel( 2 + in_x,12 + in_y,254,221,88 );
	gfx.PutPixel( 3 + in_x,12 + in_y,254,221,88 );
	gfx.PutPixel( 4 + in_x,12 + in_y,254,221,88 );
	gfx.PutPixel( 5 + in_x,12 + in_y,254,221,88 );
	gfx.PutPixel( 6 + in_x,12 + in_y,23,9,23 );
	gfx.PutPixel( 7 + in_x,12 + in_y,135,26,68 );
	gfx.PutPixel( 8 + in_x,12 + in_y,135,26,68 );
	gfx.PutPixel( 9 + in_x,12 + in_y,135,26,68 );
	gfx.PutPixel( 10 + in_x,12 + in_y,135,26,68 );
	gfx.PutPixel( 11 + in_x,12 + in_y,135,26,68 );
	gfx.PutPixel( 12 + in_x,12 + in_y,135,26,68 );
	gfx.PutPixel( 13 + in_x,12 + in_y,135,26,68 );
	gfx.PutPixel( 14 + in_x,12 + in_y,0,0,0 );
	gfx.PutPixel( 15 + in_x,12 + in_y,254,221,88 );
	gfx.PutPixel( 16 + in_x,12 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,12 + in_y,254,221,88 );
	gfx.PutPixel( 18 + in_x,12 + in_y,254,221,88 );
	gfx.PutPixel( 19 + in_x,12 + in_y,0,0,0 );
	gfx.PutPixel( 1 + in_x,13 + in_y,0,0,0 );
	gfx.PutPixel( 2 + in_x,13 + in_y,254,221,88 );
	gfx.PutPixel( 3 + in_x,13 + in_y,254,221,88 );
	gfx.PutPixel( 4 + in_x,13 + in_y,254,221,88 );
	gfx.PutPixel( 5 + in_x,13 + in_y,0,0,0 );
	gfx.PutPixel( 6 + in_x,13 + in_y,135,26,68 );
	gfx.PutPixel( 7 + in_x,13 + in_y,135,26,68 );
	gfx.PutPixel( 8 + in_x,13 + in_y,135,26,68 );
	gfx.PutPixel( 9 + in_x,13 + in_y,135,26,68 );
	gfx.PutPixel( 10 + in_x,13 + in_y,135,26,68 );
	gfx.PutPixel( 11 + in_x,13 + in_y,135,26,68 );
	gfx.PutPixel( 12 + in_x,13 + in_y,135,26,68 );
	gfx.PutPixel( 13 + in_x,13 + in_y,135,26,68 );
	gfx.PutPixel( 14 + in_x,13 + in_y,135,26,68 );
	gfx.PutPixel( 15 + in_x,13 + in_y,0,0,0 );
	gfx.PutPixel( 16 + in_x,13 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,13 + in_y,254,221,88 );
	gfx.PutPixel( 18 + in_x,13 + in_y,0,0,0 );
	gfx.PutPixel( 1 + in_x,14 + in_y,0,0,0 );
	gfx.PutPixel( 2 + in_x,14 + in_y,254,221,88 );
	gfx.PutPixel( 3 + in_x,14 + in_y,254,221,88 );
	gfx.PutPixel( 4 + in_x,14 + in_y,0,0,0 );
	gfx.PutPixel( 5 + in_x,14 + in_y,135,26,68 );
	gfx.PutPixel( 6 + in_x,14 + in_y,135,26,68 );
	gfx.PutPixel( 7 + in_x,14 + in_y,135,26,68 );
	gfx.PutPixel( 8 + in_x,14 + in_y,135,26,68 );
	gfx.PutPixel( 9 + in_x,14 + in_y,251,192,224 );
	gfx.PutPixel( 10 + in_x,14 + in_y,251,192,224 );
	gfx.PutPixel( 11 + in_x,14 + in_y,251,192,224 );
	gfx.PutPixel( 12 + in_x,14 + in_y,251,192,224 );
	gfx.PutPixel( 13 + in_x,14 + in_y,135,26,68 );
	gfx.PutPixel( 14 + in_x,14 + in_y,135,26,68 );
	gfx.PutPixel( 15 + in_x,14 + in_y,0,0,0 );
	gfx.PutPixel( 16 + in_x,14 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,14 + in_y,254,221,88 );
	gfx.PutPixel( 18 + in_x,14 + in_y,0,0,0 );
	gfx.PutPixel( 2 + in_x,15 + in_y,0,0,0 );
	gfx.PutPixel( 3 + in_x,15 + in_y,254,221,88 );
	gfx.PutPixel( 4 + in_x,15 + in_y,0,0,0 );
	gfx.PutPixel( 5 + in_x,15 + in_y,135,26,68 );
	gfx.PutPixel( 6 + in_x,15 + in_y,135,26,68 );
	gfx.PutPixel( 7 + in_x,15 + in_y,135,26,68 );
	gfx.PutPixel( 8 + in_x,15 + in_y,251,192,224 );
	gfx.PutPixel( 9 + in_x,15 + in_y,251,192,224 );
	gfx.PutPixel( 10 + in_x,15 + in_y,251,192,224 );
	gfx.PutPixel( 11 + in_x,15 + in_y,251,192,224 );
	gfx.PutPixel( 12 + in_x,15 + in_y,251,192,224 );
	gfx.PutPixel( 13 + in_x,15 + in_y,251,192,224 );
	gfx.PutPixel( 14 + in_x,15 + in_y,135,26,68 );
	gfx.PutPixel( 15 + in_x,15 + in_y,0,0,0 );
	gfx.PutPixel( 16 + in_x,15 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,15 + in_y,0,0,0 );
	gfx.PutPixel( 2 + in_x,16 + in_y,0,0,0 );
	gfx.PutPixel( 3 + in_x,16 + in_y,254,221,88 );
	gfx.PutPixel( 4 + in_x,16 + in_y,0,0,0 );
	gfx.PutPixel( 5 + in_x,16 + in_y,135,26,68 );
	gfx.PutPixel( 6 + in_x,16 + in_y,135,26,68 );
	gfx.PutPixel( 7 + in_x,16 + in_y,135,26,68 );
	gfx.PutPixel( 8 + in_x,16 + in_y,251,192,224 );
	gfx.PutPixel( 9 + in_x,16 + in_y,251,192,224 );
	gfx.PutPixel( 10 + in_x,16 + in_y,251,192,224 );
	gfx.PutPixel( 11 + in_x,16 + in_y,251,192,224 );
	gfx.PutPixel( 12 + in_x,16 + in_y,251,192,224 );
	gfx.PutPixel( 13 + in_x,16 + in_y,251,192,224 );
	gfx.PutPixel( 14 + in_x,16 + in_y,135,26,68 );
	gfx.PutPixel( 15 + in_x,16 + in_y,0,0,0 );
	gfx.PutPixel( 16 + in_x,16 + in_y,254,221,88 );
	gfx.PutPixel( 17 + in_x,16 + in_y,0,0,0 );
	gfx.PutPixel( 3 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 4 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 5 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 6 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 7 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 8 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 9 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 10 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 11 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 12 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 13 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 14 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 15 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 16 + in_x,17 + in_y,0,0,0 );
	gfx.PutPixel( 5 + in_x,18 + in_y,0,0,0 );
	gfx.PutPixel( 6 + in_x,18 + in_y,0,0,0 );
	gfx.PutPixel( 7 + in_x,18 + in_y,254,221,88 );
	gfx.PutPixel( 8 + in_x,18 + in_y,254,221,88 );
	gfx.PutPixel( 9 + in_x,18 + in_y,254,221,88 );
	gfx.PutPixel( 10 + in_x,18 + in_y,254,221,88 );
	gfx.PutPixel( 11 + in_x,18 + in_y,254,221,88 );
	gfx.PutPixel( 12 + in_x,18 + in_y,254,221,88 );
	gfx.PutPixel( 13 + in_x,18 + in_y,0,0,0 );
	gfx.PutPixel( 14 + in_x,18 + in_y,0,0,0 );
	gfx.PutPixel( 7 + in_x,19 + in_y,0,0,0 );
	gfx.PutPixel( 8 + in_x,19 + in_y,0,0,0 );
	gfx.PutPixel( 9 + in_x,19 + in_y,0,0,0 );
	gfx.PutPixel( 10 + in_x,19 + in_y,0,0,0 );
	gfx.PutPixel( 11 + in_x,19 + in_y,0,0,0 );
	gfx.PutPixel( 12 + in_x,19 + in_y,0,0,0 );
}

void Dude::Update( const Keyboard & kbd,float dt )
{
	if( kbd.KeyIsPressed( VK_RIGHT ) )
	{
		x += speed*dt* 60;
	}
	if( kbd.KeyIsPressed( VK_LEFT ) )
	{
		x -= speed*dt*60;
	}
	if( kbd.KeyIsPressed( VK_DOWN ) )
	{
		y += speed*dt*60;
	}
	if( kbd.KeyIsPressed( VK_UP ) )
	{
		y -= speed*dt*60;
	}
}

float Dude::GetX() const
{
	return x;
}

float Dude::GetY() const
{
	return y;
}

float Dude::GetWidth() const
{
	return width;
}

float Dude::GetHeight() const
{
	return height;
}
