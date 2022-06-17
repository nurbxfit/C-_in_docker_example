TARGET = Meow
RUN = ./out/bin/$(TARGET)
SRC_DIR = .
BUILD_DIR = ./out/bin
OBJECTS := $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(wildcard $(SRC_DIR)/*.cpp))

.PHONY: default
default:
	mkdir -p $(BUILD_DIR)
	+$(MAKE) $(TARGET)

# update objects and build executable
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(BUILD_DIR)/$@

# build objects
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) -c $< -o $@

# delete objects file
.PHONY: clean
clean:
	rm ./out/bin/*.o

.PHONY: run
run:
	+$(MAKE) default
	$(RUN)
	