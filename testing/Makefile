# Revision History -- at the bottom of the document
################################################################################
# The targets in this file are used in .gitlab-ci.yml and  the files created
# are found in the .gitignore
################################################################################
# Changing any names below can change the target names which will require that
# you update .gitlab_ci.yml and .gitignore
################################################################################

################################################################################
# Variable definitions
################################################################################

# Executable names
PROJECT = Shapes
GTEST = test${PROJECT}
PROGRAM_TEST_CLEAN = $(GTEST)-clean
PROGRAM_TEST_BUGS = $(GTEST)-bugs

# Libraries
LIB_CLEAN = -Llibs -lshapes-clean
LIB_BUGS = -Llibs -lshapes-bugs

# Compilation command and flags
CXX=g++
CXXVERSION= -std=c++14
CXXFLAGS= ${CXXVERSION} -g
LINKFLAGS= -lgtest

# Directories
SRC_DIR = src
GTEST_DIR = test
SRC_INCLUDE = include
INCLUDE = -I ${SRC_INCLUDE}

# Tool variables
STATIC_ANALYSIS = cppcheck
STYLE_CHECK = cpplint
DESIGN_DIR = docs/design
DOXY_DIR = docs/code

################################################################################
# Targets
################################################################################

# Default goal
.DEFAULT_GOAL := compileProject

################################################################################
# Clean-up targets
################################################################################

.PHONY: clean-docs
clean-docs:
	rm -rf docs/code/html

.PHONY: clean-exec
clean-exec:
	rm -rf ${PROGRAM_TEST_CLEAN} ${PROGRAM_TEST_BUGS}${GTEST} \
	${PROGRAM_TEST_CLEAN}.exe ${PROGRAM_TEST_BUGS}.exe ${GTEST}.exe

.PHONY: clean-obj
clean-obj:
	rm -rf ${SRC}/*.o

.PHONY: clean-temp
clean-temp:
	rm -rf *~ \#* .\#* \
	${SRC_DIR}/*~ ${SRC_DIR}/\#* ${SRC_DIR}/.\#* \
	${GTEST_DIR}/*~ ${GTEST_DIR}/\#* ${GTEST_DIR}/.\#* \
	${SRC_INCLUDE}/*~ ${SRC_INCLUDE}/\#* ${SRC_INCLUDE}/.\#* \
	${DESIGN_DIR}/*~ ${DESIGN_DIR}/\#* ${DESIGN_DIR}/.\#* \
	*.gcov *.gcda *.gcno

.PHONY: clean
clean: clean-docs clean-exec clean-obj clean-temp

################################################################################
# Compilaton targets
################################################################################

# default rule for compiling .cc to .o
%.o: %.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@

# Compilation targets

# compilation for performing testing
# using the files in include, src, and test, but not src/project
$(PROGRAM_TEST_CLEAN): $(GTEST_DIR)/*.cpp
	$(CXX) $(CXXFLAGS) -o $(PROGRAM_TEST_CLEAN) $(INCLUDE) \
	$(GTEST_DIR)/*.cpp $(LINKFLAGS) $(LIB_CLEAN)

$(PROGRAM_TEST_BUGS): $(GTEST_DIR)/*.cpp
	$(CXX) $(CXXFLAGS) -o $(PROGRAM_TEST_BUGS) $(INCLUDE) \
	$(GTEST_DIR)/*.cpp $(LINKFLAGS) $(LIB_BUGS)


################################################################################
# Test targets
################################################################################

# To perform all tests
all: ${GTEST} memcheck coverage docs static style

# To perform the memory checks
memcheck: ${PROGRAM_TEST_CLEAN}
	valgrind --tool=memcheck --leak-check=yes --error-exitcode=1 ./${PROGRAM_TEST_CLEAN}

# To perform the static check
static: ${GTEST_DIR}
	${STATIC_ANALYSIS} --verbose --enable=all ${GTEST_DIR} \
	--suppress=missingInclude --error-exitcode=1

# To perform the style check
style: ${GTEST_DIR}
	${STYLE_CHECK} ${GTEST_DIR}/*

################################################################################
# Documentation target
################################################################################

# To produce the documentation
.PHONY: docs
docs: ${SRC_INCLUDE}
	doxygen ${DOXY_DIR}/doxyfile

################################################################################
# Revision History
################################################################################
# Updated: 2022-12-15 Nicole Wilson <n.wilson@uleth.ca>
#  Removed all references to OS as the pipelines are now running on Ubuntu
################################################################################
# Updated: 2022-10-19 Dr. J. Anvik <john.anvik@uleth.ca>
#  Changed the static command to make the pipeline fail on exit with errors.
################################################################################
# Updated: 2022-09-11 Nicole Wilson <n.wilson@uleth.ca>
#  Added reference to OS in setting of STYLE_CHECK.
#  This is a temporary measure until the pipelines are running on Ubuntu
################################################################################

