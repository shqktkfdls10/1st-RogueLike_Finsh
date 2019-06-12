#pragma once
class Player
{
public:
	Player();
	~Player();

	const static int LEFT = 75;      // ��������Ű 
	const static int RIGHT = 77;      // ��������Ű 
	const static int UP = 72;      // ���ʹ���Ű 
	const static int DOWN = 80;      // �Ʒ�����Ű

	int X;
	int Y;

	void Move(int KeyCode);

	void Tick(int KeyCode);

	void Draw();
};

