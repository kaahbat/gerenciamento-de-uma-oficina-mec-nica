# Variáveis
CXX          := g++
CXX_FLAGS     := -Wall -Wextra -std=c++17 -ggdb

BIN          := bin
SRC          := src
INCLUDE      := include
LIB          := lib

LIBRARIES    :=
EXECUTABLE  := main.exe

# Regra padrão
all: $(BIN)/$(EXECUTABLE)

# Regra para compilar o executável
$(BIN)/$(EXECUTABLE): $(wildcard $(SRC)/*.cpp)
	@echo "Compiling and Linking..."
	if not exist $(BIN) mkdir $(BIN)
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)

# Regra para limpar os arquivos gerados
clean:
	@echo "Cleaning up..."
	del /Q $(BIN)\$(EXECUTABLE)
