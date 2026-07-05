CXX ?= clang++
CXXFLAGS ?= -std=c++20 -Wall -Wextra -Wshadow -O2 -DLOCAL -I.
BUILD_DIR ?= build

.PHONY: run clean

run:
	@test -n "$(FILE)" || (echo "Usage: make run FILE=cpp/01_hash/001_two_sum.cpp" && exit 1)
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) "$(FILE)" -o "$(BUILD_DIR)/run"
	@"$(BUILD_DIR)/run"

clean:
	rm -rf $(BUILD_DIR)

