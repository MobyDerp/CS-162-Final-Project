PROGS := final

all: $(PROGS)

final: main.cpp Space.hpp Nebuchandnezzar.hpp Nebuchandnezzar.cpp Oracle.hpp Oracle.cpp Merovingian.cpp Merovingian.hpp TrainingRoom.cpp TrainingRoom.hpp Source.hpp Source.cpp Matrix.hpp Matrix.cpp Fighter.hpp Neo.cpp Neo.cpp AgentSmith.cpp AgentSmith.hpp ASCI-ART.cpp Item.hpp Item.cpp
	g++ main.cpp Nebuchandnezzar.cpp Neo.cpp AgentSmith.cpp ASCI-ART.cpp Item.cpp  Merovingian.cpp Oracle.cpp TrainingRoom.cpp Source.cpp Matrix.cpp -o final

clean:
	rm -f $(PROGS) *.o *~
