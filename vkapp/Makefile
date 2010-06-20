include ../vk.mk
srcs = \
	vkappApp.C \
	vkappShell.C \
	test_vkappApp.C \
	test_vkappShell.C
module: \
	vkappApp.o \
	vkappShell.o \
	test_vkappApp \
	test_vkappShell
moduleClean:
	rm -f test_vkappApp
	rm -f test_vkappShell
moduleDepend:
moduleDependencies:
	cd ../vkmob && $(MAKE)
test_vkappApp: $(srcs)
	g++  $(CPPFLAGS)  -o test_vkappApp test_vkappApp.C *.o ../vkmob/*.o
test_vkappShell: $(srcs)
	g++  $(CPPFLAGS)  -o test_vkappShell test_vkappShell.C *.o ../vkmob/*.o
# DO NOT DELETE

vkappApp.o: vkappApp.h ../vkmob/vkmobFuncEqString.h ../vkmob/vkmobJect.h
vkappApp.o: ../vkDef.h /usr/include/assert.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/cstdlib /usr/include/stdlib.h
vkappApp.o: /usr/include/machine/ansi.h /usr/include/ppc/ansi.h
vkappApp.o: /usr/include/sys/cdefs.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/fstream
vkappApp.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/libio.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkappApp.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkappApp.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkappApp.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkappApp.o: /usr/include/stdarg.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/hash_map
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkappApp.o: /usr/include/string.h /usr/include/limits.h
vkappApp.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkappApp.o: /usr/include/sys/syslimits.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/new.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/new
vkappApp.o: /usr/include/gcc/darwin/default/g++/exception
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/hash_set
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/iostream
vkappApp.o: /usr/include/gcc/darwin/default/g++/list
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkappApp.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/slist
vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/string
vkappApp.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/cstddef
vkappApp.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkappApp.o: /usr/include/runetype.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/cstring
vkappApp.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/iterator
vkappApp.o: /usr/include/gcc/darwin/default/g++/cassert
vkappApp.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkappApp.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkappApp.o: /usr/include/sys/time.h
vkappApp.o: /usr/include/gcc/darwin/default/g++/vector
vkappApp.o: ../vkmob/vkmobFuncHashString.h ../vkmob/vkmobJect.h
vkappShell.o: vkappShell.h vkappApp.h ../vkmob/vkmobFuncEqString.h
vkappShell.o: ../vkmob/vkmobJect.h ../vkDef.h /usr/include/assert.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkappShell.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkappShell.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/fstream
vkappShell.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/libio.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkappShell.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkappShell.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkappShell.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkappShell.o: /usr/include/stdarg.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/hash_map
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkappShell.o: /usr/include/string.h /usr/include/limits.h
vkappShell.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkappShell.o: /usr/include/sys/syslimits.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/new.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/new
vkappShell.o: /usr/include/gcc/darwin/default/g++/exception
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/hash_set
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/iostream
vkappShell.o: /usr/include/gcc/darwin/default/g++/list
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkappShell.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/slist
vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/string
vkappShell.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/cstddef
vkappShell.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkappShell.o: /usr/include/runetype.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/cstring
vkappShell.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/iterator
vkappShell.o: /usr/include/gcc/darwin/default/g++/cassert
vkappShell.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkappShell.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkappShell.o: /usr/include/time.h /usr/include/sys/time.h
vkappShell.o: /usr/include/gcc/darwin/default/g++/vector
vkappShell.o: ../vkmob/vkmobFuncHashString.h ../vkmob/vkmobJect.h
test_vkappApp.o: vkappApp.h ../vkmob/vkmobFuncEqString.h ../vkmob/vkmobJect.h
test_vkappApp.o: ../vkDef.h /usr/include/assert.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/cstdlib
test_vkappApp.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
test_vkappApp.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/fstream
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/fstream.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/iostream.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/streambuf.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/libio.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/_G_config.h
test_vkappApp.o: /usr/include/sys/types.h /usr/include/machine/types.h
test_vkappApp.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
test_vkappApp.o: /usr/include/ppc/endian.h /usr/include/stddef.h
test_vkappApp.o: /usr/include/stdarg.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/hash_map
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_config.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/type_traits.h
test_vkappApp.o: /usr/include/string.h /usr/include/limits.h
test_vkappApp.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
test_vkappApp.o: /usr/include/sys/syslimits.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/new.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/new
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/exception
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_function.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/hash_set
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/iostream
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/list
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_list.h
test_vkappApp.o: /usr/include/math.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/queue
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/slist
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/string
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/cstddef
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/std/straits.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/cctype
test_vkappApp.o: /usr/include/ctype.h /usr/include/runetype.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/cstring
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/alloc.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/iterator
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/cassert
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
test_vkappApp.o: ../library/libstdc++/ducttape/sstream-2.95.3
test_vkappApp.o: /usr/include/time.h /usr/include/sys/time.h
test_vkappApp.o: /usr/include/gcc/darwin/default/g++/vector
test_vkappApp.o: ../vkmob/vkmobFuncHashString.h ../vkmob/vkmobJect.h
test_vkappShell.o: vkappShell.h vkappApp.h ../vkmob/vkmobFuncEqString.h
test_vkappShell.o: ../vkmob/vkmobJect.h ../vkDef.h /usr/include/assert.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/cstdlib
test_vkappShell.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
test_vkappShell.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/fstream
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/fstream.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/iostream.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/streambuf.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/libio.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/_G_config.h
test_vkappShell.o: /usr/include/sys/types.h /usr/include/machine/types.h
test_vkappShell.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
test_vkappShell.o: /usr/include/ppc/endian.h /usr/include/stddef.h
test_vkappShell.o: /usr/include/stdarg.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/hash_map
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_config.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/type_traits.h
test_vkappShell.o: /usr/include/string.h /usr/include/limits.h
test_vkappShell.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
test_vkappShell.o: /usr/include/sys/syslimits.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/new.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/new
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/exception
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_function.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/hash_set
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/iostream
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/list
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_list.h
test_vkappShell.o: /usr/include/math.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/queue
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/slist
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/string
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/cstddef
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/std/straits.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/cctype
test_vkappShell.o: /usr/include/ctype.h /usr/include/runetype.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/cstring
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/alloc.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/iterator
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/cassert
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
test_vkappShell.o: ../library/libstdc++/ducttape/sstream-2.95.3
test_vkappShell.o: /usr/include/time.h /usr/include/sys/time.h
test_vkappShell.o: /usr/include/gcc/darwin/default/g++/vector
test_vkappShell.o: ../vkmob/vkmobFuncHashString.h ../vkmob/vkmobJect.h
