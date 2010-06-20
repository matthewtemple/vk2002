include ../vk.mk
module: \
	vkqcsGameTransx.o \
	test_vkqcs
moduleClean:
	rm -f test_vkqcs
moduleDepend:
moduleDependencies:
	cd ../vkqc && $(MAKE)
test_vkqcs: test_vkqcs.C $(srcs)
	g++  $(CPPFLAGS)  -o test_vkqcs test_vkqcs.C *.o ../vkmob/*.o ../vkqc/*.o
# DO NOT DELETE
