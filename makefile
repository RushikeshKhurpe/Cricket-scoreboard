all: Project

Project: Batsman.h Batsman.cpp Bowler.h Bowler.cpp Inning.h Inning.cpp Match.h Match.cpp Ltd_Over_Match.h T_10.h T_10.cpp  T_20.h T_20.cpp  Project.cpp
	g++ -o Project  Batsman.cpp  Bowler.cpp  Inning.cpp  Match.cpp  T_10.cpp   T_20.cpp  Project.cpp
clean: rm -f Project