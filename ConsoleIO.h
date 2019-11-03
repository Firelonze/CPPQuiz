#pragma once
class ConsoleIO
{
public:
	ConsoleIO();
	~ConsoleIO();
	void setFinalScore(int score) {
		endResult += score;
	}
	int getFinalScore() {
		return (endResult);
	}
private:
	int endResult;
};


