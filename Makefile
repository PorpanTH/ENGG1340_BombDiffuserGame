FLAG = g++ -pedantic-errors -std=c++11

word_game.o: word_game.cpp word_game.h
	$(FLAG) -c $<

symbolCombi.o: symbolCombi.cpp symbolCombi.h
	$(FLAG) -c $<

leaderboard.o: leaderboard.cpp leaderboard.h
	$(FLAG) -c $<

main.o: main.cpp symbolCombi.h word_game.h leaderboard.h
	$(FLAG) -c $<

game: main.o symbolCombi.o word_game.o leaderboard.o
	$(FLAG) $^ -o $@

clean:
	rm -rf main.o symbolCombi.o word_game.o leaderboard.o game

.PHONY: clean
