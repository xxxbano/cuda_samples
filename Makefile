#=============================
# Description:
#   build cuda samples
# Creator: Zhengfan Xia
# Date: 20220408
#=============================

TARGET += vector_add
TARGET += vector_add_thread
TARGET += vector_add_grid

all: $(TARGET)

vector_add: c/vector_add.c
	gcc -o $@ $<

vector_add_thread: c/vector_add_thread.cu
	nvcc -o $@ $<

vector_add_grid: c/vector_add_grid.cu
	nvcc -o $@ $<

clean:
	rm $(TARGET)
