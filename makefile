CC := g++
CFLAGS := -g -fdiagnostics-color=always
INCLUDE := -Iinclude
LIB_DIR := -Llib-mingw
LIBS := -lglfw3dll -lmingw32 -lSDL2main -lglfw3 -lgdi32 -lopengl32 -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf -mwindows

SRC_DIR := src
BUILD_DIR := build

SRCS := $(wildcard $(SRC_DIR)/*.c)
EXEC := $(BUILD_DIR)/main.exe

.PHONY: run all clean run

all: $(BUILD_DIR) $(EXEC)

$(EXEC): $(SRCS)
	$(CC) $(CFLAGS) $(INCLUDE) $^ -o $@ $(LIB_DIR) $(LIBS)

$(BUILD_DIR):
	mkdir -p $@

run: all
	./$(EXEC)

clean:
	rm -rf $(BUILD_DIR)
