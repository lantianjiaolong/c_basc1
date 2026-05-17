# 编译器设置
CC = gcc
# Homebrew cs50 库路径
CS50_DIR = $(/usr/local)
CFLAGS = -I$(CS50_DIR)/include
LDFLAGS = -L$(CS50_DIR)/lib -lcs50

# 目标
TARGET = get_cat_meow
SRC = get_cat_meow.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

clean:
	rm -f $(TARGET)

.PHONY: clean
