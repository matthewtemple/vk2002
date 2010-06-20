include ../vk.mk
srcs = \
	vkmathBoolBinOps.C \
	vkmathDiscreteDerivative.C \
	vkmathFuncAddFac.C \
	vkmathGame.C \
	vkmathGraph.C \
	vkmathHeavySet.C \
	vkmathMatrix.C \
	vkmathNaughtyPi.C \
	vkmathPetriNet.C \
	vkmathPolynomial.C \
	vkmathPolyomino.C \
	vkmathPrimeGen.C \
	primeDeriv.C \
	test_vkmathDiscreteDerivative.C \
	test_vkmathFuncAddFac.C \
	test_vkmathHeavySet.C \
	test_vkmathNaughtyPi.C \
	test_vkmathPrimeGen.C
module: \
	vkmathBoolBinOps.o \
	vkmathDiscreteDerivative.o \
	vkmathFuncAddFac.o \
	vkmathGame.o \
	vkmathGraph.o \
	vkmathHeavySet.o \
	vkmathMatrix.o \
	vkmathNaughtyPi.o \
	vkmathPetriNet.o \
	vkmathPolynomial.o \
	vkmathPolyomino.o \
	vkmathPrimeGen.o \
	primeDeriv \
	test_vkmathDiscreteDerivative \
	test_vkmathFuncAddFac \
	test_vkmathHeavySet \
	test_vkmathNaughtyPi \
	test_vkmathPrimeGen \
	naughtypi_pl
moduleClean:
	rm -f primeDeriv
	rm -f test_vkmathDiscreteDerivative
	rm -f test_vkmathFuncAddFac
	rm -f test_vkmathHeavySet
	rm -f test_vkmathNaughtyPi
	rm -f test_vkmathPrimeGen
moduleDepend:
moduleDependencies:
	cd ../vkmob && $(MAKE)
naughtypi_pl:
	perl -c naughtypi.pl
primeDeriv:
	g++  $(CPPFLAGS)  -o primeDeriv primeDeriv.C *.o ../vkmob/*.o
test_vkmathDiscreteDerivative:
	g++  $(CPPFLAGS)  -o test_vkmathDiscreteDerivative test_vkmathDiscreteDerivative.C *.o ../vkmob/*.o
test_vkmathFuncAddFac:
	g++  $(CPPFLAGS)  -o test_vkmathFuncAddFac test_vkmathFuncAddFac.C *.o ../vkmob/*.o
test_vkmathHeavySet:
	g++  $(CPPFLAGS)  -o test_vkmathHeavySet test_vkmathHeavySet.C *.o ../vkmob/*.o
test_vkmathNaughtyPi:
	g++  $(CPPFLAGS)  -o test_vkmathNaughtyPi test_vkmathNaughtyPi.C *.o ../vkmob/*.o
test_vkmathPrimeGen:
	g++  $(CPPFLAGS)  -o test_vkmathPrimeGen test_vkmathPrimeGen.C *.o ../vkmob/*.o
# DO NOT DELETE

vkmathBoolBinOps.o: vkmathBoolBinOps.h
vkmathDiscreteDerivative.o: vkmathDiscreteDerivative.h
vkmathDiscreteDerivative.o: ../vkmob/vkmobDigestable.h ../vkmob/vkmobJect.h
vkmathDiscreteDerivative.o: ../vkDef.h /usr/include/assert.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkmathDiscreteDerivative.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkmathDiscreteDerivative.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/fstream
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/libio.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkmathDiscreteDerivative.o: /usr/include/sys/types.h
vkmathDiscreteDerivative.o: /usr/include/machine/types.h
vkmathDiscreteDerivative.o: /usr/include/ppc/types.h
vkmathDiscreteDerivative.o: /usr/include/machine/endian.h
vkmathDiscreteDerivative.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkmathDiscreteDerivative.o: /usr/include/stdarg.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/hash_map
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkmathDiscreteDerivative.o: /usr/include/string.h /usr/include/limits.h
vkmathDiscreteDerivative.o: /usr/include/machine/limits.h
vkmathDiscreteDerivative.o: /usr/include/ppc/limits.h
vkmathDiscreteDerivative.o: /usr/include/sys/syslimits.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/new.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/new
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/exception
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/hash_set
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/iostream
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/list
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkmathDiscreteDerivative.o: /usr/include/math.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/queue
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/slist
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/string
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/cstddef
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/cctype
vkmathDiscreteDerivative.o: /usr/include/ctype.h /usr/include/runetype.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/cstring
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/iterator
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/cassert
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkmathDiscreteDerivative.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkmathDiscreteDerivative.o: /usr/include/time.h /usr/include/sys/time.h
vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/vector
vkmathFuncAddFac.o: vkmathFuncAddFac.h ../vkmob/vkmobJect.h ../vkDef.h
vkmathFuncAddFac.o: /usr/include/assert.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkmathFuncAddFac.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkmathFuncAddFac.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/fstream
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/libio.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkmathFuncAddFac.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkmathFuncAddFac.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkmathFuncAddFac.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkmathFuncAddFac.o: /usr/include/stdarg.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/hash_map
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkmathFuncAddFac.o: /usr/include/string.h /usr/include/limits.h
vkmathFuncAddFac.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkmathFuncAddFac.o: /usr/include/sys/syslimits.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/new.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/new
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/exception
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/hash_set
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/iostream
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/list
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkmathFuncAddFac.o: /usr/include/math.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/queue
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/slist
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/string
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/cstddef
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/cctype
vkmathFuncAddFac.o: /usr/include/ctype.h /usr/include/runetype.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/cstring
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/iterator
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/cassert
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkmathFuncAddFac.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkmathFuncAddFac.o: /usr/include/time.h /usr/include/sys/time.h
vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/vector
vkmathGame.o: vkmathGame.h ../vkmob/vkmobJect.h ../vkDef.h
vkmathGame.o: /usr/include/assert.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkmathGame.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkmathGame.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/fstream
vkmathGame.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/libio.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkmathGame.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkmathGame.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkmathGame.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkmathGame.o: /usr/include/stdarg.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/hash_map
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkmathGame.o: /usr/include/string.h /usr/include/limits.h
vkmathGame.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkmathGame.o: /usr/include/sys/syslimits.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/new.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/new
vkmathGame.o: /usr/include/gcc/darwin/default/g++/exception
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/hash_set
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/iostream
vkmathGame.o: /usr/include/gcc/darwin/default/g++/list
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkmathGame.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/slist
vkmathGame.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/string
vkmathGame.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/cstddef
vkmathGame.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkmathGame.o: /usr/include/runetype.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/cstring
vkmathGame.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/iterator
vkmathGame.o: /usr/include/gcc/darwin/default/g++/cassert
vkmathGame.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkmathGame.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkmathGame.o: /usr/include/time.h /usr/include/sys/time.h
vkmathGame.o: /usr/include/gcc/darwin/default/g++/vector
vkmathGraph.o: vkmathGraph.h vkmathMatrix.h ../vkmob/vkmobJect.h ../vkDef.h
vkmathGraph.o: /usr/include/assert.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkmathGraph.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkmathGraph.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/fstream
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/libio.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkmathGraph.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkmathGraph.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkmathGraph.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkmathGraph.o: /usr/include/stdarg.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/hash_map
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkmathGraph.o: /usr/include/string.h /usr/include/limits.h
vkmathGraph.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkmathGraph.o: /usr/include/sys/syslimits.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/new.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/new
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/exception
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/hash_set
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/iostream
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/list
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkmathGraph.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/slist
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/string
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/cstddef
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/cctype
vkmathGraph.o: /usr/include/ctype.h /usr/include/runetype.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/cstring
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/iterator
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/cassert
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkmathGraph.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkmathGraph.o: /usr/include/time.h /usr/include/sys/time.h
vkmathGraph.o: /usr/include/gcc/darwin/default/g++/vector
vkmathHeavySet.o: vkmathHeavySet.h ../vkmob/vkmobDigestable.h
vkmathHeavySet.o: ../vkmob/vkmobJect.h ../vkDef.h /usr/include/assert.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkmathHeavySet.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkmathHeavySet.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/fstream
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/libio.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkmathHeavySet.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkmathHeavySet.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkmathHeavySet.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkmathHeavySet.o: /usr/include/stdarg.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/hash_map
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkmathHeavySet.o: /usr/include/string.h /usr/include/limits.h
vkmathHeavySet.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkmathHeavySet.o: /usr/include/sys/syslimits.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/new.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/new
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/exception
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/hash_set
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/iostream
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/list
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkmathHeavySet.o: /usr/include/math.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/queue
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/slist
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/string
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/cstddef
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/cctype
vkmathHeavySet.o: /usr/include/ctype.h /usr/include/runetype.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/cstring
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/iterator
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/cassert
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkmathHeavySet.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkmathHeavySet.o: /usr/include/time.h /usr/include/sys/time.h
vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/vector
vkmathMatrix.o: vkmathMatrix.h ../vkmob/vkmobJect.h ../vkDef.h
vkmathMatrix.o: /usr/include/assert.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkmathMatrix.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkmathMatrix.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/fstream
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/libio.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkmathMatrix.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkmathMatrix.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkmathMatrix.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkmathMatrix.o: /usr/include/stdarg.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/hash_map
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkmathMatrix.o: /usr/include/string.h /usr/include/limits.h
vkmathMatrix.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkmathMatrix.o: /usr/include/sys/syslimits.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/new.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/new
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/exception
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/hash_set
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/iostream
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/list
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkmathMatrix.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/slist
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/string
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/cstddef
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/cctype
vkmathMatrix.o: /usr/include/ctype.h /usr/include/runetype.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/cstring
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/iterator
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/cassert
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkmathMatrix.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkmathMatrix.o: /usr/include/time.h /usr/include/sys/time.h
vkmathMatrix.o: /usr/include/gcc/darwin/default/g++/vector
vkmathNaughtyPi.o: vkmathNaughtyPi.h ../vkmob/vkmobJect.h ../vkDef.h
vkmathNaughtyPi.o: /usr/include/assert.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkmathNaughtyPi.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkmathNaughtyPi.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/fstream
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/libio.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkmathNaughtyPi.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkmathNaughtyPi.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkmathNaughtyPi.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkmathNaughtyPi.o: /usr/include/stdarg.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/hash_map
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkmathNaughtyPi.o: /usr/include/string.h /usr/include/limits.h
vkmathNaughtyPi.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkmathNaughtyPi.o: /usr/include/sys/syslimits.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/new.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/new
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/exception
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/hash_set
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/iostream
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/list
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkmathNaughtyPi.o: /usr/include/math.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/queue
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/slist
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/string
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/cstddef
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/cctype
vkmathNaughtyPi.o: /usr/include/ctype.h /usr/include/runetype.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/cstring
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/iterator
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/cassert
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkmathNaughtyPi.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkmathNaughtyPi.o: /usr/include/time.h /usr/include/sys/time.h
vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/vector
vkmathPetriNet.o: vkmathPetriNet.h ../vkmob/vkmobJect.h ../vkDef.h
vkmathPetriNet.o: /usr/include/assert.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkmathPetriNet.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkmathPetriNet.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/fstream
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/libio.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkmathPetriNet.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkmathPetriNet.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkmathPetriNet.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkmathPetriNet.o: /usr/include/stdarg.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/hash_map
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkmathPetriNet.o: /usr/include/string.h /usr/include/limits.h
vkmathPetriNet.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkmathPetriNet.o: /usr/include/sys/syslimits.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/new.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/new
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/exception
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/hash_set
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/iostream
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/list
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkmathPetriNet.o: /usr/include/math.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/queue
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/slist
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/string
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/cstddef
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/cctype
vkmathPetriNet.o: /usr/include/ctype.h /usr/include/runetype.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/cstring
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/iterator
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/cassert
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkmathPetriNet.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkmathPetriNet.o: /usr/include/time.h /usr/include/sys/time.h
vkmathPetriNet.o: /usr/include/gcc/darwin/default/g++/vector
vkmathPolynomial.o: vkmathPolynomial.h ../vkmob/vkmobJect.h ../vkDef.h
vkmathPolynomial.o: /usr/include/assert.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkmathPolynomial.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkmathPolynomial.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/fstream
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/libio.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkmathPolynomial.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkmathPolynomial.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkmathPolynomial.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkmathPolynomial.o: /usr/include/stdarg.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/hash_map
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkmathPolynomial.o: /usr/include/string.h /usr/include/limits.h
vkmathPolynomial.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkmathPolynomial.o: /usr/include/sys/syslimits.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/new.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/new
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/exception
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/hash_set
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/iostream
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/list
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkmathPolynomial.o: /usr/include/math.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/queue
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/slist
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/string
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/cstddef
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/cctype
vkmathPolynomial.o: /usr/include/ctype.h /usr/include/runetype.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/cstring
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/iterator
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/cassert
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkmathPolynomial.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkmathPolynomial.o: /usr/include/time.h /usr/include/sys/time.h
vkmathPolynomial.o: /usr/include/gcc/darwin/default/g++/vector
vkmathPolyomino.o: vkmathPolyomino.h ../vkmob/vkmobJect.h ../vkDef.h
vkmathPolyomino.o: /usr/include/assert.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkmathPolyomino.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkmathPolyomino.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/fstream
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/libio.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkmathPolyomino.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkmathPolyomino.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkmathPolyomino.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkmathPolyomino.o: /usr/include/stdarg.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/hash_map
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkmathPolyomino.o: /usr/include/string.h /usr/include/limits.h
vkmathPolyomino.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkmathPolyomino.o: /usr/include/sys/syslimits.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/new.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/new
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/exception
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/hash_set
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/iostream
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/list
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkmathPolyomino.o: /usr/include/math.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/queue
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/slist
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/string
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/cstddef
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/cctype
vkmathPolyomino.o: /usr/include/ctype.h /usr/include/runetype.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/cstring
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/iterator
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/cassert
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkmathPolyomino.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkmathPolyomino.o: /usr/include/time.h /usr/include/sys/time.h
vkmathPolyomino.o: /usr/include/gcc/darwin/default/g++/vector
vkmathPrimeGen.o: vkmathPrimeGen.h ../vkmob/vkmobJect.h ../vkDef.h
vkmathPrimeGen.o: /usr/include/assert.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkmathPrimeGen.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkmathPrimeGen.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/fstream
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/libio.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkmathPrimeGen.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkmathPrimeGen.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkmathPrimeGen.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkmathPrimeGen.o: /usr/include/stdarg.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/hash_map
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkmathPrimeGen.o: /usr/include/string.h /usr/include/limits.h
vkmathPrimeGen.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkmathPrimeGen.o: /usr/include/sys/syslimits.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/new.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/new
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/exception
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/hash_set
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/iostream
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/list
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkmathPrimeGen.o: /usr/include/math.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/queue
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/slist
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/string
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/cstddef
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/cctype
vkmathPrimeGen.o: /usr/include/ctype.h /usr/include/runetype.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/cstring
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/iterator
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/cassert
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkmathPrimeGen.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkmathPrimeGen.o: /usr/include/time.h /usr/include/sys/time.h
vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/vector
primeDeriv.o: vkmathDiscreteDerivative.h ../vkmob/vkmobDigestable.h
primeDeriv.o: ../vkmob/vkmobJect.h ../vkDef.h /usr/include/assert.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/cstdlib
primeDeriv.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
primeDeriv.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/fstream
primeDeriv.o: /usr/include/gcc/darwin/default/g++/fstream.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/iostream.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/streambuf.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/libio.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/_G_config.h
primeDeriv.o: /usr/include/sys/types.h /usr/include/machine/types.h
primeDeriv.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
primeDeriv.o: /usr/include/ppc/endian.h /usr/include/stddef.h
primeDeriv.o: /usr/include/stdarg.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/hash_map
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_config.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/type_traits.h
primeDeriv.o: /usr/include/string.h /usr/include/limits.h
primeDeriv.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
primeDeriv.o: /usr/include/sys/syslimits.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/new.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/new
primeDeriv.o: /usr/include/gcc/darwin/default/g++/exception
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_function.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/hash_set
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/iostream
primeDeriv.o: /usr/include/gcc/darwin/default/g++/list
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_list.h
primeDeriv.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/slist
primeDeriv.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/string
primeDeriv.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/cstddef
primeDeriv.o: /usr/include/gcc/darwin/default/g++/std/straits.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
primeDeriv.o: /usr/include/runetype.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/cstring
primeDeriv.o: /usr/include/gcc/darwin/default/g++/alloc.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/iterator
primeDeriv.o: /usr/include/gcc/darwin/default/g++/cassert
primeDeriv.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
primeDeriv.o: ../library/libstdc++/ducttape/sstream-2.95.3
primeDeriv.o: /usr/include/time.h /usr/include/sys/time.h
primeDeriv.o: /usr/include/gcc/darwin/default/g++/vector vkmathPrimeGen.h
primeDeriv.o: ../vkmob/vkmobJect.h
test_vkmathDiscreteDerivative.o: vkmathDiscreteDerivative.h
test_vkmathDiscreteDerivative.o: ../vkmob/vkmobDigestable.h
test_vkmathDiscreteDerivative.o: ../vkmob/vkmobJect.h ../vkDef.h
test_vkmathDiscreteDerivative.o: /usr/include/assert.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/cstdlib
test_vkmathDiscreteDerivative.o: /usr/include/stdlib.h
test_vkmathDiscreteDerivative.o: /usr/include/machine/ansi.h
test_vkmathDiscreteDerivative.o: /usr/include/ppc/ansi.h
test_vkmathDiscreteDerivative.o: /usr/include/sys/cdefs.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/fstream
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/fstream.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/iostream.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/streambuf.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/libio.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/_G_config.h
test_vkmathDiscreteDerivative.o: /usr/include/sys/types.h
test_vkmathDiscreteDerivative.o: /usr/include/machine/types.h
test_vkmathDiscreteDerivative.o: /usr/include/ppc/types.h
test_vkmathDiscreteDerivative.o: /usr/include/machine/endian.h
test_vkmathDiscreteDerivative.o: /usr/include/ppc/endian.h
test_vkmathDiscreteDerivative.o: /usr/include/stddef.h /usr/include/stdarg.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/hash_map
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_config.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/type_traits.h
test_vkmathDiscreteDerivative.o: /usr/include/string.h /usr/include/limits.h
test_vkmathDiscreteDerivative.o: /usr/include/machine/limits.h
test_vkmathDiscreteDerivative.o: /usr/include/ppc/limits.h
test_vkmathDiscreteDerivative.o: /usr/include/sys/syslimits.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/new.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/new
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/exception
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_function.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/hash_set
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/iostream
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/list
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_list.h
test_vkmathDiscreteDerivative.o: /usr/include/math.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/queue
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/slist
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/string
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/cstddef
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/std/straits.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/cctype
test_vkmathDiscreteDerivative.o: /usr/include/ctype.h /usr/include/runetype.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/cstring
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/alloc.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/iterator
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/cassert
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
test_vkmathDiscreteDerivative.o: ../library/libstdc++/ducttape/sstream-2.95.3
test_vkmathDiscreteDerivative.o: /usr/include/time.h /usr/include/sys/time.h
test_vkmathDiscreteDerivative.o: /usr/include/gcc/darwin/default/g++/vector
test_vkmathFuncAddFac.o: vkmathFuncAddFac.h ../vkmob/vkmobJect.h ../vkDef.h
test_vkmathFuncAddFac.o: /usr/include/assert.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/cstdlib
test_vkmathFuncAddFac.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
test_vkmathFuncAddFac.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/fstream
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/fstream.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/iostream.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/streambuf.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/libio.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/_G_config.h
test_vkmathFuncAddFac.o: /usr/include/sys/types.h
test_vkmathFuncAddFac.o: /usr/include/machine/types.h
test_vkmathFuncAddFac.o: /usr/include/ppc/types.h
test_vkmathFuncAddFac.o: /usr/include/machine/endian.h
test_vkmathFuncAddFac.o: /usr/include/ppc/endian.h /usr/include/stddef.h
test_vkmathFuncAddFac.o: /usr/include/stdarg.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/hash_map
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_config.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/type_traits.h
test_vkmathFuncAddFac.o: /usr/include/string.h /usr/include/limits.h
test_vkmathFuncAddFac.o: /usr/include/machine/limits.h
test_vkmathFuncAddFac.o: /usr/include/ppc/limits.h
test_vkmathFuncAddFac.o: /usr/include/sys/syslimits.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/new.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/new
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/exception
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_function.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/hash_set
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/iostream
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/list
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_list.h
test_vkmathFuncAddFac.o: /usr/include/math.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/queue
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/slist
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/string
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/cstddef
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/std/straits.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/cctype
test_vkmathFuncAddFac.o: /usr/include/ctype.h /usr/include/runetype.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/cstring
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/alloc.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/iterator
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/cassert
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
test_vkmathFuncAddFac.o: ../library/libstdc++/ducttape/sstream-2.95.3
test_vkmathFuncAddFac.o: /usr/include/time.h /usr/include/sys/time.h
test_vkmathFuncAddFac.o: /usr/include/gcc/darwin/default/g++/vector
test_vkmathHeavySet.o: vkmathHeavySet.h ../vkmob/vkmobDigestable.h
test_vkmathHeavySet.o: ../vkmob/vkmobJect.h ../vkDef.h /usr/include/assert.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/cstdlib
test_vkmathHeavySet.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
test_vkmathHeavySet.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/fstream
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/fstream.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/iostream.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/streambuf.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/libio.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/_G_config.h
test_vkmathHeavySet.o: /usr/include/sys/types.h /usr/include/machine/types.h
test_vkmathHeavySet.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
test_vkmathHeavySet.o: /usr/include/ppc/endian.h /usr/include/stddef.h
test_vkmathHeavySet.o: /usr/include/stdarg.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/hash_map
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_config.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/type_traits.h
test_vkmathHeavySet.o: /usr/include/string.h /usr/include/limits.h
test_vkmathHeavySet.o: /usr/include/machine/limits.h
test_vkmathHeavySet.o: /usr/include/ppc/limits.h /usr/include/sys/syslimits.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/new.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/new
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/exception
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_function.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/hash_set
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/iostream
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/list
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_list.h
test_vkmathHeavySet.o: /usr/include/math.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/queue
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/slist
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/string
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/cstddef
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/std/straits.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/cctype
test_vkmathHeavySet.o: /usr/include/ctype.h /usr/include/runetype.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/cstring
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/alloc.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/iterator
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/cassert
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
test_vkmathHeavySet.o: ../library/libstdc++/ducttape/sstream-2.95.3
test_vkmathHeavySet.o: /usr/include/time.h /usr/include/sys/time.h
test_vkmathHeavySet.o: /usr/include/gcc/darwin/default/g++/vector
test_vkmathNaughtyPi.o: vkmathNaughtyPi.h ../vkmob/vkmobJect.h ../vkDef.h
test_vkmathNaughtyPi.o: /usr/include/assert.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/cstdlib
test_vkmathNaughtyPi.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
test_vkmathNaughtyPi.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/fstream
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/fstream.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/iostream.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/streambuf.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/libio.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/_G_config.h
test_vkmathNaughtyPi.o: /usr/include/sys/types.h /usr/include/machine/types.h
test_vkmathNaughtyPi.o: /usr/include/ppc/types.h
test_vkmathNaughtyPi.o: /usr/include/machine/endian.h
test_vkmathNaughtyPi.o: /usr/include/ppc/endian.h /usr/include/stddef.h
test_vkmathNaughtyPi.o: /usr/include/stdarg.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/hash_map
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_config.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/type_traits.h
test_vkmathNaughtyPi.o: /usr/include/string.h /usr/include/limits.h
test_vkmathNaughtyPi.o: /usr/include/machine/limits.h
test_vkmathNaughtyPi.o: /usr/include/ppc/limits.h
test_vkmathNaughtyPi.o: /usr/include/sys/syslimits.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/new.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/new
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/exception
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_function.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/hash_set
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/iostream
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/list
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_list.h
test_vkmathNaughtyPi.o: /usr/include/math.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/queue
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/slist
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/string
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/cstddef
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/std/straits.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/cctype
test_vkmathNaughtyPi.o: /usr/include/ctype.h /usr/include/runetype.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/cstring
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/alloc.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/iterator
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/cassert
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
test_vkmathNaughtyPi.o: ../library/libstdc++/ducttape/sstream-2.95.3
test_vkmathNaughtyPi.o: /usr/include/time.h /usr/include/sys/time.h
test_vkmathNaughtyPi.o: /usr/include/gcc/darwin/default/g++/vector
test_vkmathPrimeGen.o: vkmathPrimeGen.h ../vkmob/vkmobJect.h ../vkDef.h
test_vkmathPrimeGen.o: /usr/include/assert.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/cstdlib
test_vkmathPrimeGen.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
test_vkmathPrimeGen.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/fstream
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/fstream.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/iostream.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/streambuf.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/libio.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/_G_config.h
test_vkmathPrimeGen.o: /usr/include/sys/types.h /usr/include/machine/types.h
test_vkmathPrimeGen.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
test_vkmathPrimeGen.o: /usr/include/ppc/endian.h /usr/include/stddef.h
test_vkmathPrimeGen.o: /usr/include/stdarg.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/hash_map
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_config.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/type_traits.h
test_vkmathPrimeGen.o: /usr/include/string.h /usr/include/limits.h
test_vkmathPrimeGen.o: /usr/include/machine/limits.h
test_vkmathPrimeGen.o: /usr/include/ppc/limits.h /usr/include/sys/syslimits.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/new.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/new
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/exception
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_function.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/hash_set
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/iostream
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/list
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_list.h
test_vkmathPrimeGen.o: /usr/include/math.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/queue
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/slist
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/string
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/cstddef
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/std/straits.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/cctype
test_vkmathPrimeGen.o: /usr/include/ctype.h /usr/include/runetype.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/cstring
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/alloc.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/iterator
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/cassert
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
test_vkmathPrimeGen.o: ../library/libstdc++/ducttape/sstream-2.95.3
test_vkmathPrimeGen.o: /usr/include/time.h /usr/include/sys/time.h
test_vkmathPrimeGen.o: /usr/include/gcc/darwin/default/g++/vector
