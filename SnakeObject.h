
#pragma once
class SnakeObject
{
public:
	SnakeObject() {}
	virtual ~SnakeObject() {}
	virtual void Update(float eTime) = 0;
	virtual void Render() = 0;
};