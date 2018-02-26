#ifndef StackException_
#define StackException_

class StackException
{
public:
	virtual void GetMessage() const = 0;
};

class StackFullException : public StackException
{
public:
	virtual void GetMessage() const;
};

class StackEmptyException : public StackException
{
public:
	virtual void GetMessage() const;
};

#endif