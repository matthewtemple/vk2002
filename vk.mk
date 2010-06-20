CPPFLAGS = -O0
makedependFlags = -I/usr/include/gcc/darwin/default/g++
default: moduleDependencies depend module
clean: moduleClean
	rm -f *.o
	rm -f *~
	rm -f Makefile.bak
depend: moduleDepend
	makedepend $(makedependFlags) $(srcs)
	rm -f Makefile.bak
