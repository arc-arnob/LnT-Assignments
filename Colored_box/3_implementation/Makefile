PROJ_NAME = Coloured_Boxes
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC =src/create_ll.c \
src/display_ll.c \
src/insert_end.c \
src/delete_box.c \
src/avg_volume.c \
src/count_by_color.c \
src/find_by_id.c \
src/min_max_v_diff.c \
src/find_max_height.c \
src/update_weight.c

TEST_SRC = test/test.c \
unity/unity.c 
INC_H = inc
INC_T = unity

run:
	gcc -I $(INC_H) $(SRC) main.c -o $(PROJ_NAME).exe
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(TEST_PROJ_NAME).exe

static_checks:
	cppcheck --enable=all $(SRC)