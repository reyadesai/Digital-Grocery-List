# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /class/classes/bhuyn053/final-project-ssuva003-rdesa022-bhyun053-kalva088

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /class/classes/bhuyn053/final-project-ssuva003-rdesa022-bhyun053-kalva088

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /class/classes/bhuyn053/final-project-ssuva003-rdesa022-bhyun053-kalva088/CMakeFiles /class/classes/bhuyn053/final-project-ssuva003-rdesa022-bhyun053-kalva088//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /class/classes/bhuyn053/final-project-ssuva003-rdesa022-bhyun053-kalva088/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named glist

# Build rule for target.
glist: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 glist
.PHONY : glist

# fast build rule for target.
glist/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/build
.PHONY : glist/fast

code/allergen.o: code/allergen.cpp.o
.PHONY : code/allergen.o

# target to build an object file
code/allergen.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/allergen.cpp.o
.PHONY : code/allergen.cpp.o

code/allergen.i: code/allergen.cpp.i
.PHONY : code/allergen.i

# target to preprocess a source file
code/allergen.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/allergen.cpp.i
.PHONY : code/allergen.cpp.i

code/allergen.s: code/allergen.cpp.s
.PHONY : code/allergen.s

# target to generate assembly for a file
code/allergen.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/allergen.cpp.s
.PHONY : code/allergen.cpp.s

code/catalog.o: code/catalog.cpp.o
.PHONY : code/catalog.o

# target to build an object file
code/catalog.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/catalog.cpp.o
.PHONY : code/catalog.cpp.o

code/catalog.i: code/catalog.cpp.i
.PHONY : code/catalog.i

# target to preprocess a source file
code/catalog.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/catalog.cpp.i
.PHONY : code/catalog.cpp.i

code/catalog.s: code/catalog.cpp.s
.PHONY : code/catalog.s

# target to generate assembly for a file
code/catalog.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/catalog.cpp.s
.PHONY : code/catalog.cpp.s

code/coupon.o: code/coupon.cpp.o
.PHONY : code/coupon.o

# target to build an object file
code/coupon.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/coupon.cpp.o
.PHONY : code/coupon.cpp.o

code/coupon.i: code/coupon.cpp.i
.PHONY : code/coupon.i

# target to preprocess a source file
code/coupon.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/coupon.cpp.i
.PHONY : code/coupon.cpp.i

code/coupon.s: code/coupon.cpp.s
.PHONY : code/coupon.s

# target to generate assembly for a file
code/coupon.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/coupon.cpp.s
.PHONY : code/coupon.cpp.s

code/display.o: code/display.cpp.o
.PHONY : code/display.o

# target to build an object file
code/display.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/display.cpp.o
.PHONY : code/display.cpp.o

code/display.i: code/display.cpp.i
.PHONY : code/display.i

# target to preprocess a source file
code/display.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/display.cpp.i
.PHONY : code/display.cpp.i

code/display.s: code/display.cpp.s
.PHONY : code/display.s

# target to generate assembly for a file
code/display.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/display.cpp.s
.PHONY : code/display.cpp.s

code/food.o: code/food.cpp.o
.PHONY : code/food.o

# target to build an object file
code/food.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/food.cpp.o
.PHONY : code/food.cpp.o

code/food.i: code/food.cpp.i
.PHONY : code/food.i

# target to preprocess a source file
code/food.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/food.cpp.i
.PHONY : code/food.cpp.i

code/food.s: code/food.cpp.s
.PHONY : code/food.s

# target to generate assembly for a file
code/food.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/food.cpp.s
.PHONY : code/food.cpp.s

code/login.o: code/login.cpp.o
.PHONY : code/login.o

# target to build an object file
code/login.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/login.cpp.o
.PHONY : code/login.cpp.o

code/login.i: code/login.cpp.i
.PHONY : code/login.i

# target to preprocess a source file
code/login.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/login.cpp.i
.PHONY : code/login.cpp.i

code/login.s: code/login.cpp.s
.PHONY : code/login.s

# target to generate assembly for a file
code/login.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/login.cpp.s
.PHONY : code/login.cpp.s

code/main.o: code/main.cpp.o
.PHONY : code/main.o

# target to build an object file
code/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/main.cpp.o
.PHONY : code/main.cpp.o

code/main.i: code/main.cpp.i
.PHONY : code/main.i

# target to preprocess a source file
code/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/main.cpp.i
.PHONY : code/main.cpp.i

code/main.s: code/main.cpp.s
.PHONY : code/main.s

# target to generate assembly for a file
code/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/main.cpp.s
.PHONY : code/main.cpp.s

code/shoppingList.o: code/shoppingList.cpp.o
.PHONY : code/shoppingList.o

# target to build an object file
code/shoppingList.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/shoppingList.cpp.o
.PHONY : code/shoppingList.cpp.o

code/shoppingList.i: code/shoppingList.cpp.i
.PHONY : code/shoppingList.i

# target to preprocess a source file
code/shoppingList.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/shoppingList.cpp.i
.PHONY : code/shoppingList.cpp.i

code/shoppingList.s: code/shoppingList.cpp.s
.PHONY : code/shoppingList.s

# target to generate assembly for a file
code/shoppingList.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/shoppingList.cpp.s
.PHONY : code/shoppingList.cpp.s

code/userProfile.o: code/userProfile.cpp.o
.PHONY : code/userProfile.o

# target to build an object file
code/userProfile.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/userProfile.cpp.o
.PHONY : code/userProfile.cpp.o

code/userProfile.i: code/userProfile.cpp.i
.PHONY : code/userProfile.i

# target to preprocess a source file
code/userProfile.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/userProfile.cpp.i
.PHONY : code/userProfile.cpp.i

code/userProfile.s: code/userProfile.cpp.s
.PHONY : code/userProfile.s

# target to generate assembly for a file
code/userProfile.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/glist.dir/build.make CMakeFiles/glist.dir/code/userProfile.cpp.s
.PHONY : code/userProfile.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... glist"
	@echo "... code/allergen.o"
	@echo "... code/allergen.i"
	@echo "... code/allergen.s"
	@echo "... code/catalog.o"
	@echo "... code/catalog.i"
	@echo "... code/catalog.s"
	@echo "... code/coupon.o"
	@echo "... code/coupon.i"
	@echo "... code/coupon.s"
	@echo "... code/display.o"
	@echo "... code/display.i"
	@echo "... code/display.s"
	@echo "... code/food.o"
	@echo "... code/food.i"
	@echo "... code/food.s"
	@echo "... code/login.o"
	@echo "... code/login.i"
	@echo "... code/login.s"
	@echo "... code/main.o"
	@echo "... code/main.i"
	@echo "... code/main.s"
	@echo "... code/shoppingList.o"
	@echo "... code/shoppingList.i"
	@echo "... code/shoppingList.s"
	@echo "... code/userProfile.o"
	@echo "... code/userProfile.i"
	@echo "... code/userProfile.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

