#pragma once
class IMoveable
{
public:
	virtual void moveHorizontal(float disloc) = 0;
	virtual void moveVertical(float disloc) = 0;
};

