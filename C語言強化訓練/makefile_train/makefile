# 定義編譯器
CC = gcc

# 定義編譯選項
CFLAGS = -Wall -g

# 定義專案中的源檔案
SRC = hello.c f2.c f3.c

# 定義最終生成的執行檔名
TARGET = hello.out

# 預設目標：編譯所有檔案並生成執行檔
all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# 清理生成的檔案
clean:
	rm -f $(TARGET) *.o
