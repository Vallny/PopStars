#ifndef _GAMEDATA_H_
#define _GAMEDATA_H_
class GameData
{
public:
	static GameData* getInstance();
	/*��ǰ�ȼ�*/
	void setCurLevel(int level);
	inline int getCurLevel(){return cur_level;}
	/*��һ�ȼ�*/
	inline int getNextLevel(){return next_level;}
	/*��߷�*/
	inline void setHistoryScore(int score){history_score = score;}
	inline int getHistoryScore(){return history_score;}
	/*��ǰ����*/
	inline void setCurScore(int score){cur_score = score;}
	inline int getCurScore(){return cur_score;}
	/*ͨ�ط���*/
	inline int getNextScore(){return next_score;}
	inline int getScoreByLevel(int level);

	/*��������*/
	int getJiangli(int size);

	void saveHighestScore();


private:
	static GameData* _instance;

	GameData();
	void init();

	int cur_level;
	int next_level;
	int history_score;
	int cur_score;
	int next_score;
	friend class MenuLayer;
};


#endif