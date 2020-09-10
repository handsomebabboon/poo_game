#include "FrameTimer.h"

FrameTimer::FrameTimer()
{
	last = std::chrono::steady_clock::now();
}

float FrameTimer::Mark()
{
	auto old = last;
	last = std::chrono::steady_clock::now();
	std::chrono::duration<float> frametime = last - old;
	return frametime.count();
}
