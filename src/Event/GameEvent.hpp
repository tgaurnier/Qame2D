#ifndef GAME_EVENT_HPP
#define GAME_EVENT_HPP


typedef unsigned short GameEventType;


enum : GameEventType {
	START_GAME, PAUSE_GAME, QUIT_GAME, END_GAME, EXTEND_GAME_EVENT_TYPE
};


class GameEvent {
	public:
		GameEvent(void *source, GameEventType type, void *data = nullptr);
		void * getData();
		void * getSource();
		operator GameEventType();
		bool operator ==(GameEventType type);


	private:
		GameEventType type;
		void *source;
		void *data;
};


#endif
