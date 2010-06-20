include ../vk.mk
srcs = \
	vkhtmlML.C \
	vkhtmlText.C \
	vkhtmlA.C \
	vkhtmlABBR.C \
	vkhtmlACRONYM.C \
	vkhtmlADDRESS.C \
	vkhtmlAREA.C \
	vkhtmlB.C \
	vkhtmlBASE.C \
	vkhtmlBDO.C \
	vkhtmlBIG.C \
	vkhtmlBLOCKQUOTE.C \
	vkhtmlBODY.C \
	vkhtmlBR.C \
	vkhtmlBUTTON.C \
	vkhtmlCAPTION.C \
	vkhtmlCITE.C \
	vkhtmlCODE.C \
	vkhtmlCOL.C \
	vkhtmlCOLGROUP.C \
	vkhtmlDD.C \
	vkhtmlDEL.C \
	vkhtmlDFN.C \
	vkhtmlDIV.C \
	vkhtmlDL.C \
	vkhtmlDT.C \
	vkhtmlEM.C \
	vkhtmlFIELDSET.C \
	vkhtmlFORM.C \
	vkhtmlFRAME.C \
	vkhtmlFRAMESET.C \
	vkhtmlH1.C \
	vkhtmlH2.C \
	vkhtmlH3.C \
	vkhtmlH4.C \
	vkhtmlH5.C \
	vkhtmlH6.C \
	vkhtmlHEAD.C \
	vkhtmlHR.C \
	vkhtmlHTML.C \
	vkhtmlI.C \
	vkhtmlIFRAME.C \
	vkhtmlIMG.C \
	vkhtmlINPUT.C \
	vkhtmlINS.C \
	vkhtmlKBD.C \
	vkhtmlLABEL.C \
	vkhtmlLEGEND.C \
	vkhtmlLI.C \
	vkhtmlLINK.C \
	vkhtmlMAP.C \
	vkhtmlMETA.C \
	vkhtmlNOFRAMES.C \
	vkhtmlNOSCRIPT.C \
	vkhtmlOBJECT.C \
	vkhtmlOL.C \
	vkhtmlOPTGROUP.C \
	vkhtmlOPTION.C \
	vkhtmlP.C \
	vkhtmlPARAM.C \
	vkhtmlPRE.C \
	vkhtmlQ.C \
	vkhtmlSAMP.C \
	vkhtmlSCRIPT.C \
	vkhtmlSELECT.C \
	vkhtmlSMALL.C \
	vkhtmlSPAN.C \
	vkhtmlSTRONG.C \
	vkhtmlSTYLE.C \
	vkhtmlSUB.C \
	vkhtmlSUP.C \
	vkhtmlTABLE.C \
	vkhtmlTBODY.C \
	vkhtmlTD.C \
	vkhtmlTEXTAREA.C \
	vkhtmlTFOOT.C \
	vkhtmlTH.C \
	vkhtmlTHEAD.C \
	vkhtmlTITLE.C \
	vkhtmlTR.C \
	vkhtmlTT.C \
	vkhtmlUL.C \
	vkhtmlVAR.C \
	test_vkhtml.C
module: \
	vkhtmlML.o \
	vkhtmlText.o \
	vkhtmlA.o \
	vkhtmlABBR.o \
	vkhtmlACRONYM.o \
	vkhtmlADDRESS.o \
	vkhtmlAREA.o \
	vkhtmlB.o \
	vkhtmlBASE.o \
	vkhtmlBDO.o \
	vkhtmlBIG.o \
	vkhtmlBLOCKQUOTE.o \
	vkhtmlBODY.o \
	vkhtmlBR.o \
	vkhtmlBUTTON.o \
	vkhtmlCAPTION.o \
	vkhtmlCITE.o \
	vkhtmlCODE.o \
	vkhtmlCOL.o \
	vkhtmlCOLGROUP.o \
	vkhtmlDD.o \
	vkhtmlDEL.o \
	vkhtmlDFN.o \
	vkhtmlDIV.o \
	vkhtmlDL.o \
	vkhtmlDT.o \
	vkhtmlEM.o \
	vkhtmlFIELDSET.o \
	vkhtmlFORM.o \
	vkhtmlFRAME.o \
	vkhtmlFRAMESET.o \
	vkhtmlH1.o \
	vkhtmlH2.o \
	vkhtmlH3.o \
	vkhtmlH4.o \
	vkhtmlH5.o \
	vkhtmlH6.o \
	vkhtmlHEAD.o \
	vkhtmlHR.o \
	vkhtmlHTML.o \
	vkhtmlI.o \
	vkhtmlIFRAME.o \
	vkhtmlIMG.o \
	vkhtmlINPUT.o \
	vkhtmlINS.o \
	vkhtmlKBD.o \
	vkhtmlLABEL.o \
	vkhtmlLEGEND.o \
	vkhtmlLI.o \
	vkhtmlLINK.o \
	vkhtmlMAP.o \
	vkhtmlMETA.o \
	vkhtmlNOFRAMES.o \
	vkhtmlNOSCRIPT.o \
	vkhtmlOBJECT.o \
	vkhtmlOL.o \
	vkhtmlOPTGROUP.o \
	vkhtmlOPTION.o \
	vkhtmlP.o \
	vkhtmlPARAM.o \
	vkhtmlPRE.o \
	vkhtmlQ.o \
	vkhtmlSAMP.o \
	vkhtmlSCRIPT.o \
	vkhtmlSELECT.o \
	vkhtmlSMALL.o \
	vkhtmlSPAN.o \
	vkhtmlSTRONG.o \
	vkhtmlSTYLE.o \
	vkhtmlSUB.o \
	vkhtmlSUP.o \
	vkhtmlTABLE.o \
	vkhtmlTBODY.o \
	vkhtmlTD.o \
	vkhtmlTEXTAREA.o \
	vkhtmlTFOOT.o \
	vkhtmlTH.o \
	vkhtmlTHEAD.o \
	vkhtmlTITLE.o \
	vkhtmlTR.o \
	vkhtmlTT.o \
	vkhtmlUL.o \
	vkhtmlVAR.o \
	test_vkhtml
moduleClean:
	rm -f test_vkhtml
moduleDepend:
	cd ../vkmob && $(MAKE)
moduleDependencies:
test_vkhtml: $(srcs)
	g++  $(CPPFLAGS)  -o test_vkhtml test_vkhtml.C *.o ../vkmob/*.o
# DO NOT DELETE

vkhtmlML.o: vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h /usr/include/assert.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/cstdlib /usr/include/stdlib.h
vkhtmlML.o: /usr/include/machine/ansi.h /usr/include/ppc/ansi.h
vkhtmlML.o: /usr/include/sys/cdefs.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlML.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlML.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlML.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlML.o: /usr/include/stdarg.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlML.o: /usr/include/string.h /usr/include/limits.h
vkhtmlML.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlML.o: /usr/include/sys/syslimits.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlML.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlML.o: /usr/include/runetype.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlML.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlML.o: /usr/include/sys/time.h
vkhtmlML.o: /usr/include/gcc/darwin/default/g++/vector vkhtmlText.h
vkhtmlML.o: ../vkmob/vkmobFuncEqPChar.h ../vkmob/vkmobJect.h
vkhtmlText.o: vkhtmlText.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlText.o: /usr/include/assert.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlText.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlText.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlText.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlText.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlText.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlText.o: /usr/include/stdarg.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlText.o: /usr/include/string.h /usr/include/limits.h
vkhtmlText.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlText.o: /usr/include/sys/syslimits.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlText.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlText.o: /usr/include/runetype.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlText.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlText.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlText.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlA.o: vkhtmlA.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlA.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlA.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlA.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlA.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlA.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlA.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlA.o: /usr/include/stdarg.h /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlA.o: /usr/include/string.h /usr/include/limits.h
vkhtmlA.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlA.o: /usr/include/sys/syslimits.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_list.h /usr/include/math.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlA.o: /usr/include/runetype.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlA.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlA.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlA.o: /usr/include/sys/time.h /usr/include/gcc/darwin/default/g++/vector
vkhtmlABBR.o: vkhtmlABBR.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlABBR.o: /usr/include/assert.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlABBR.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlABBR.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlABBR.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlABBR.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlABBR.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlABBR.o: /usr/include/stdarg.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlABBR.o: /usr/include/string.h /usr/include/limits.h
vkhtmlABBR.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlABBR.o: /usr/include/sys/syslimits.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlABBR.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlABBR.o: /usr/include/runetype.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlABBR.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlABBR.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlABBR.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlACRONYM.o: vkhtmlACRONYM.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlACRONYM.o: /usr/include/assert.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlACRONYM.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlACRONYM.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlACRONYM.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlACRONYM.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlACRONYM.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlACRONYM.o: /usr/include/stdarg.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlACRONYM.o: /usr/include/string.h /usr/include/limits.h
vkhtmlACRONYM.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlACRONYM.o: /usr/include/sys/syslimits.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlACRONYM.o: /usr/include/math.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlACRONYM.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlACRONYM.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlACRONYM.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlACRONYM.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlADDRESS.o: vkhtmlADDRESS.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlADDRESS.o: /usr/include/assert.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlADDRESS.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlADDRESS.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlADDRESS.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlADDRESS.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlADDRESS.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlADDRESS.o: /usr/include/stdarg.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlADDRESS.o: /usr/include/string.h /usr/include/limits.h
vkhtmlADDRESS.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlADDRESS.o: /usr/include/sys/syslimits.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlADDRESS.o: /usr/include/math.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlADDRESS.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlADDRESS.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlADDRESS.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlADDRESS.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlAREA.o: vkhtmlAREA.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlAREA.o: /usr/include/assert.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlAREA.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlAREA.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlAREA.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlAREA.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlAREA.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlAREA.o: /usr/include/stdarg.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlAREA.o: /usr/include/string.h /usr/include/limits.h
vkhtmlAREA.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlAREA.o: /usr/include/sys/syslimits.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlAREA.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlAREA.o: /usr/include/runetype.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlAREA.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlAREA.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlAREA.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlB.o: vkhtmlB.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlB.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlB.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlB.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlB.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlB.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlB.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlB.o: /usr/include/stdarg.h /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlB.o: /usr/include/string.h /usr/include/limits.h
vkhtmlB.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlB.o: /usr/include/sys/syslimits.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_list.h /usr/include/math.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlB.o: /usr/include/runetype.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlB.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlB.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlB.o: /usr/include/sys/time.h /usr/include/gcc/darwin/default/g++/vector
vkhtmlBASE.o: vkhtmlBASE.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlBASE.o: /usr/include/assert.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlBASE.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlBASE.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlBASE.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlBASE.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlBASE.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlBASE.o: /usr/include/stdarg.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlBASE.o: /usr/include/string.h /usr/include/limits.h
vkhtmlBASE.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlBASE.o: /usr/include/sys/syslimits.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlBASE.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlBASE.o: /usr/include/runetype.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlBASE.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlBASE.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlBASE.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlBDO.o: vkhtmlBDO.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlBDO.o: /usr/include/assert.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlBDO.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlBDO.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlBDO.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlBDO.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlBDO.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlBDO.o: /usr/include/stdarg.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlBDO.o: /usr/include/string.h /usr/include/limits.h
vkhtmlBDO.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlBDO.o: /usr/include/sys/syslimits.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlBDO.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlBDO.o: /usr/include/runetype.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlBDO.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlBDO.o: /usr/include/sys/time.h
vkhtmlBDO.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlBIG.o: vkhtmlBIG.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlBIG.o: /usr/include/assert.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlBIG.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlBIG.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlBIG.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlBIG.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlBIG.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlBIG.o: /usr/include/stdarg.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlBIG.o: /usr/include/string.h /usr/include/limits.h
vkhtmlBIG.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlBIG.o: /usr/include/sys/syslimits.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlBIG.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlBIG.o: /usr/include/runetype.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlBIG.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlBIG.o: /usr/include/sys/time.h
vkhtmlBIG.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlBLOCKQUOTE.o: vkhtmlBLOCKQUOTE.h vkhtmlML.h ../vkmob/vkmobJect.h
vkhtmlBLOCKQUOTE.o: ../vkDef.h /usr/include/assert.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlBLOCKQUOTE.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlBLOCKQUOTE.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlBLOCKQUOTE.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlBLOCKQUOTE.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlBLOCKQUOTE.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlBLOCKQUOTE.o: /usr/include/stdarg.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlBLOCKQUOTE.o: /usr/include/string.h /usr/include/limits.h
vkhtmlBLOCKQUOTE.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlBLOCKQUOTE.o: /usr/include/sys/syslimits.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlBLOCKQUOTE.o: /usr/include/math.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlBLOCKQUOTE.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlBLOCKQUOTE.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlBLOCKQUOTE.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlBLOCKQUOTE.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlBODY.o: vkhtmlBODY.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlBODY.o: /usr/include/assert.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlBODY.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlBODY.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlBODY.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlBODY.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlBODY.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlBODY.o: /usr/include/stdarg.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlBODY.o: /usr/include/string.h /usr/include/limits.h
vkhtmlBODY.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlBODY.o: /usr/include/sys/syslimits.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlBODY.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlBODY.o: /usr/include/runetype.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlBODY.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlBODY.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlBODY.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlBR.o: vkhtmlBR.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlBR.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlBR.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlBR.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlBR.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlBR.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlBR.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlBR.o: /usr/include/stdarg.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlBR.o: /usr/include/string.h /usr/include/limits.h
vkhtmlBR.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlBR.o: /usr/include/sys/syslimits.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlBR.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlBR.o: /usr/include/runetype.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlBR.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlBR.o: /usr/include/sys/time.h
vkhtmlBR.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlBUTTON.o: vkhtmlBUTTON.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlBUTTON.o: /usr/include/assert.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlBUTTON.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlBUTTON.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlBUTTON.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlBUTTON.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlBUTTON.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlBUTTON.o: /usr/include/stdarg.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlBUTTON.o: /usr/include/string.h /usr/include/limits.h
vkhtmlBUTTON.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlBUTTON.o: /usr/include/sys/syslimits.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlBUTTON.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlBUTTON.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlBUTTON.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlBUTTON.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlBUTTON.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlCAPTION.o: vkhtmlCAPTION.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlCAPTION.o: /usr/include/assert.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlCAPTION.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlCAPTION.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlCAPTION.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlCAPTION.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlCAPTION.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlCAPTION.o: /usr/include/stdarg.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlCAPTION.o: /usr/include/string.h /usr/include/limits.h
vkhtmlCAPTION.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlCAPTION.o: /usr/include/sys/syslimits.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlCAPTION.o: /usr/include/math.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlCAPTION.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlCAPTION.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlCAPTION.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlCAPTION.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlCITE.o: vkhtmlCITE.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlCITE.o: /usr/include/assert.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlCITE.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlCITE.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlCITE.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlCITE.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlCITE.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlCITE.o: /usr/include/stdarg.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlCITE.o: /usr/include/string.h /usr/include/limits.h
vkhtmlCITE.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlCITE.o: /usr/include/sys/syslimits.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlCITE.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlCITE.o: /usr/include/runetype.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlCITE.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlCITE.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlCITE.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlCODE.o: vkhtmlCODE.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlCODE.o: /usr/include/assert.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlCODE.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlCODE.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlCODE.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlCODE.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlCODE.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlCODE.o: /usr/include/stdarg.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlCODE.o: /usr/include/string.h /usr/include/limits.h
vkhtmlCODE.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlCODE.o: /usr/include/sys/syslimits.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlCODE.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlCODE.o: /usr/include/runetype.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlCODE.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlCODE.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlCODE.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlCOL.o: vkhtmlCOL.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlCOL.o: /usr/include/assert.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlCOL.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlCOL.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlCOL.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlCOL.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlCOL.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlCOL.o: /usr/include/stdarg.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlCOL.o: /usr/include/string.h /usr/include/limits.h
vkhtmlCOL.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlCOL.o: /usr/include/sys/syslimits.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlCOL.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlCOL.o: /usr/include/runetype.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlCOL.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlCOL.o: /usr/include/sys/time.h
vkhtmlCOL.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlCOLGROUP.o: vkhtmlCOLGROUP.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlCOLGROUP.o: /usr/include/assert.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlCOLGROUP.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlCOLGROUP.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlCOLGROUP.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlCOLGROUP.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlCOLGROUP.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlCOLGROUP.o: /usr/include/stdarg.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlCOLGROUP.o: /usr/include/string.h /usr/include/limits.h
vkhtmlCOLGROUP.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlCOLGROUP.o: /usr/include/sys/syslimits.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlCOLGROUP.o: /usr/include/math.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlCOLGROUP.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlCOLGROUP.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlCOLGROUP.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlCOLGROUP.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlDD.o: vkhtmlDD.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlDD.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlDD.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlDD.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlDD.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlDD.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlDD.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlDD.o: /usr/include/stdarg.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlDD.o: /usr/include/string.h /usr/include/limits.h
vkhtmlDD.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlDD.o: /usr/include/sys/syslimits.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlDD.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlDD.o: /usr/include/runetype.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlDD.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlDD.o: /usr/include/sys/time.h
vkhtmlDD.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlDEL.o: vkhtmlDEL.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlDEL.o: /usr/include/assert.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlDEL.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlDEL.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlDEL.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlDEL.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlDEL.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlDEL.o: /usr/include/stdarg.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlDEL.o: /usr/include/string.h /usr/include/limits.h
vkhtmlDEL.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlDEL.o: /usr/include/sys/syslimits.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlDEL.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlDEL.o: /usr/include/runetype.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlDEL.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlDEL.o: /usr/include/sys/time.h
vkhtmlDEL.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlDFN.o: vkhtmlDFN.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlDFN.o: /usr/include/assert.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlDFN.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlDFN.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlDFN.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlDFN.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlDFN.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlDFN.o: /usr/include/stdarg.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlDFN.o: /usr/include/string.h /usr/include/limits.h
vkhtmlDFN.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlDFN.o: /usr/include/sys/syslimits.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlDFN.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlDFN.o: /usr/include/runetype.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlDFN.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlDFN.o: /usr/include/sys/time.h
vkhtmlDFN.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlDIV.o: vkhtmlDIV.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlDIV.o: /usr/include/assert.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlDIV.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlDIV.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlDIV.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlDIV.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlDIV.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlDIV.o: /usr/include/stdarg.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlDIV.o: /usr/include/string.h /usr/include/limits.h
vkhtmlDIV.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlDIV.o: /usr/include/sys/syslimits.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlDIV.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlDIV.o: /usr/include/runetype.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlDIV.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlDIV.o: /usr/include/sys/time.h
vkhtmlDIV.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlDL.o: vkhtmlDL.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlDL.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlDL.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlDL.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlDL.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlDL.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlDL.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlDL.o: /usr/include/stdarg.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlDL.o: /usr/include/string.h /usr/include/limits.h
vkhtmlDL.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlDL.o: /usr/include/sys/syslimits.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlDL.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlDL.o: /usr/include/runetype.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlDL.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlDL.o: /usr/include/sys/time.h
vkhtmlDL.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlDT.o: vkhtmlDT.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlDT.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlDT.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlDT.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlDT.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlDT.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlDT.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlDT.o: /usr/include/stdarg.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlDT.o: /usr/include/string.h /usr/include/limits.h
vkhtmlDT.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlDT.o: /usr/include/sys/syslimits.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlDT.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlDT.o: /usr/include/runetype.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlDT.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlDT.o: /usr/include/sys/time.h
vkhtmlDT.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlEM.o: vkhtmlEM.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlEM.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlEM.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlEM.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlEM.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlEM.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlEM.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlEM.o: /usr/include/stdarg.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlEM.o: /usr/include/string.h /usr/include/limits.h
vkhtmlEM.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlEM.o: /usr/include/sys/syslimits.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlEM.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlEM.o: /usr/include/runetype.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlEM.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlEM.o: /usr/include/sys/time.h
vkhtmlEM.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlFIELDSET.o: vkhtmlFIELDSET.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlFIELDSET.o: /usr/include/assert.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlFIELDSET.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlFIELDSET.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlFIELDSET.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlFIELDSET.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlFIELDSET.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlFIELDSET.o: /usr/include/stdarg.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlFIELDSET.o: /usr/include/string.h /usr/include/limits.h
vkhtmlFIELDSET.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlFIELDSET.o: /usr/include/sys/syslimits.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlFIELDSET.o: /usr/include/math.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlFIELDSET.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlFIELDSET.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlFIELDSET.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlFIELDSET.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlFORM.o: vkhtmlFORM.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlFORM.o: /usr/include/assert.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlFORM.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlFORM.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlFORM.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlFORM.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlFORM.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlFORM.o: /usr/include/stdarg.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlFORM.o: /usr/include/string.h /usr/include/limits.h
vkhtmlFORM.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlFORM.o: /usr/include/sys/syslimits.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlFORM.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlFORM.o: /usr/include/runetype.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlFORM.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlFORM.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlFORM.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlFRAME.o: vkhtmlFRAME.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlFRAME.o: /usr/include/assert.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlFRAME.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlFRAME.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlFRAME.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlFRAME.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlFRAME.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlFRAME.o: /usr/include/stdarg.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlFRAME.o: /usr/include/string.h /usr/include/limits.h
vkhtmlFRAME.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlFRAME.o: /usr/include/sys/syslimits.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlFRAME.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlFRAME.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlFRAME.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlFRAME.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlFRAME.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlFRAMESET.o: vkhtmlFRAMESET.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlFRAMESET.o: /usr/include/assert.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlFRAMESET.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlFRAMESET.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlFRAMESET.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlFRAMESET.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlFRAMESET.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlFRAMESET.o: /usr/include/stdarg.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlFRAMESET.o: /usr/include/string.h /usr/include/limits.h
vkhtmlFRAMESET.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlFRAMESET.o: /usr/include/sys/syslimits.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlFRAMESET.o: /usr/include/math.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlFRAMESET.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlFRAMESET.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlFRAMESET.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlFRAMESET.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlH1.o: vkhtmlH1.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlH1.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlH1.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlH1.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlH1.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlH1.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlH1.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlH1.o: /usr/include/stdarg.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlH1.o: /usr/include/string.h /usr/include/limits.h
vkhtmlH1.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlH1.o: /usr/include/sys/syslimits.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlH1.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlH1.o: /usr/include/runetype.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlH1.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlH1.o: /usr/include/sys/time.h
vkhtmlH1.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlH2.o: vkhtmlH2.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlH2.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlH2.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlH2.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlH2.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlH2.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlH2.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlH2.o: /usr/include/stdarg.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlH2.o: /usr/include/string.h /usr/include/limits.h
vkhtmlH2.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlH2.o: /usr/include/sys/syslimits.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlH2.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlH2.o: /usr/include/runetype.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlH2.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlH2.o: /usr/include/sys/time.h
vkhtmlH2.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlH3.o: vkhtmlH3.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlH3.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlH3.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlH3.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlH3.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlH3.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlH3.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlH3.o: /usr/include/stdarg.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlH3.o: /usr/include/string.h /usr/include/limits.h
vkhtmlH3.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlH3.o: /usr/include/sys/syslimits.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlH3.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlH3.o: /usr/include/runetype.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlH3.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlH3.o: /usr/include/sys/time.h
vkhtmlH3.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlH4.o: vkhtmlH4.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlH4.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlH4.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlH4.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlH4.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlH4.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlH4.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlH4.o: /usr/include/stdarg.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlH4.o: /usr/include/string.h /usr/include/limits.h
vkhtmlH4.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlH4.o: /usr/include/sys/syslimits.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlH4.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlH4.o: /usr/include/runetype.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlH4.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlH4.o: /usr/include/sys/time.h
vkhtmlH4.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlH5.o: vkhtmlH5.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlH5.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlH5.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlH5.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlH5.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlH5.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlH5.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlH5.o: /usr/include/stdarg.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlH5.o: /usr/include/string.h /usr/include/limits.h
vkhtmlH5.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlH5.o: /usr/include/sys/syslimits.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlH5.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlH5.o: /usr/include/runetype.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlH5.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlH5.o: /usr/include/sys/time.h
vkhtmlH5.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlH6.o: vkhtmlH6.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlH6.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlH6.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlH6.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlH6.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlH6.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlH6.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlH6.o: /usr/include/stdarg.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlH6.o: /usr/include/string.h /usr/include/limits.h
vkhtmlH6.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlH6.o: /usr/include/sys/syslimits.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlH6.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlH6.o: /usr/include/runetype.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlH6.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlH6.o: /usr/include/sys/time.h
vkhtmlH6.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlHEAD.o: vkhtmlHEAD.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlHEAD.o: /usr/include/assert.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlHEAD.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlHEAD.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlHEAD.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlHEAD.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlHEAD.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlHEAD.o: /usr/include/stdarg.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlHEAD.o: /usr/include/string.h /usr/include/limits.h
vkhtmlHEAD.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlHEAD.o: /usr/include/sys/syslimits.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlHEAD.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlHEAD.o: /usr/include/runetype.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlHEAD.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlHEAD.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlHEAD.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlHR.o: vkhtmlHR.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlHR.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlHR.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlHR.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlHR.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlHR.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlHR.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlHR.o: /usr/include/stdarg.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlHR.o: /usr/include/string.h /usr/include/limits.h
vkhtmlHR.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlHR.o: /usr/include/sys/syslimits.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlHR.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlHR.o: /usr/include/runetype.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlHR.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlHR.o: /usr/include/sys/time.h
vkhtmlHR.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlHTML.o: vkhtmlHTML.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlHTML.o: /usr/include/assert.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlHTML.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlHTML.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlHTML.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlHTML.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlHTML.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlHTML.o: /usr/include/stdarg.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlHTML.o: /usr/include/string.h /usr/include/limits.h
vkhtmlHTML.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlHTML.o: /usr/include/sys/syslimits.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlHTML.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlHTML.o: /usr/include/runetype.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlHTML.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlHTML.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlHTML.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlI.o: vkhtmlI.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlI.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlI.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlI.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlI.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlI.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlI.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlI.o: /usr/include/stdarg.h /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlI.o: /usr/include/string.h /usr/include/limits.h
vkhtmlI.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlI.o: /usr/include/sys/syslimits.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_list.h /usr/include/math.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlI.o: /usr/include/runetype.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlI.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlI.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlI.o: /usr/include/sys/time.h /usr/include/gcc/darwin/default/g++/vector
vkhtmlIFRAME.o: vkhtmlIFRAME.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlIFRAME.o: /usr/include/assert.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlIFRAME.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlIFRAME.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlIFRAME.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlIFRAME.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlIFRAME.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlIFRAME.o: /usr/include/stdarg.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlIFRAME.o: /usr/include/string.h /usr/include/limits.h
vkhtmlIFRAME.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlIFRAME.o: /usr/include/sys/syslimits.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlIFRAME.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlIFRAME.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlIFRAME.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlIFRAME.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlIFRAME.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlIMG.o: vkhtmlIMG.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlIMG.o: /usr/include/assert.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlIMG.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlIMG.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlIMG.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlIMG.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlIMG.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlIMG.o: /usr/include/stdarg.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlIMG.o: /usr/include/string.h /usr/include/limits.h
vkhtmlIMG.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlIMG.o: /usr/include/sys/syslimits.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlIMG.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlIMG.o: /usr/include/runetype.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlIMG.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlIMG.o: /usr/include/sys/time.h
vkhtmlIMG.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlINPUT.o: vkhtmlINPUT.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlINPUT.o: /usr/include/assert.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlINPUT.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlINPUT.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlINPUT.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlINPUT.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlINPUT.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlINPUT.o: /usr/include/stdarg.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlINPUT.o: /usr/include/string.h /usr/include/limits.h
vkhtmlINPUT.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlINPUT.o: /usr/include/sys/syslimits.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlINPUT.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlINPUT.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlINPUT.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlINPUT.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlINPUT.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlINS.o: vkhtmlINS.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlINS.o: /usr/include/assert.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlINS.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlINS.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlINS.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlINS.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlINS.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlINS.o: /usr/include/stdarg.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlINS.o: /usr/include/string.h /usr/include/limits.h
vkhtmlINS.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlINS.o: /usr/include/sys/syslimits.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlINS.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlINS.o: /usr/include/runetype.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlINS.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlINS.o: /usr/include/sys/time.h
vkhtmlINS.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlKBD.o: vkhtmlKBD.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlKBD.o: /usr/include/assert.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlKBD.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlKBD.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlKBD.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlKBD.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlKBD.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlKBD.o: /usr/include/stdarg.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlKBD.o: /usr/include/string.h /usr/include/limits.h
vkhtmlKBD.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlKBD.o: /usr/include/sys/syslimits.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlKBD.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlKBD.o: /usr/include/runetype.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlKBD.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlKBD.o: /usr/include/sys/time.h
vkhtmlKBD.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlLABEL.o: vkhtmlLABEL.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlLABEL.o: /usr/include/assert.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlLABEL.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlLABEL.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlLABEL.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlLABEL.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlLABEL.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlLABEL.o: /usr/include/stdarg.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlLABEL.o: /usr/include/string.h /usr/include/limits.h
vkhtmlLABEL.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlLABEL.o: /usr/include/sys/syslimits.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlLABEL.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlLABEL.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlLABEL.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlLABEL.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlLABEL.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlLEGEND.o: vkhtmlLEGEND.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlLEGEND.o: /usr/include/assert.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlLEGEND.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlLEGEND.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlLEGEND.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlLEGEND.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlLEGEND.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlLEGEND.o: /usr/include/stdarg.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlLEGEND.o: /usr/include/string.h /usr/include/limits.h
vkhtmlLEGEND.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlLEGEND.o: /usr/include/sys/syslimits.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlLEGEND.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlLEGEND.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlLEGEND.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlLEGEND.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlLEGEND.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlLI.o: vkhtmlLI.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlLI.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlLI.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlLI.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlLI.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlLI.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlLI.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlLI.o: /usr/include/stdarg.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlLI.o: /usr/include/string.h /usr/include/limits.h
vkhtmlLI.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlLI.o: /usr/include/sys/syslimits.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlLI.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlLI.o: /usr/include/runetype.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlLI.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlLI.o: /usr/include/sys/time.h
vkhtmlLI.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlLINK.o: vkhtmlLINK.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlLINK.o: /usr/include/assert.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlLINK.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlLINK.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlLINK.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlLINK.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlLINK.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlLINK.o: /usr/include/stdarg.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlLINK.o: /usr/include/string.h /usr/include/limits.h
vkhtmlLINK.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlLINK.o: /usr/include/sys/syslimits.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlLINK.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlLINK.o: /usr/include/runetype.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlLINK.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlLINK.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlLINK.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlMAP.o: vkhtmlMAP.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlMAP.o: /usr/include/assert.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlMAP.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlMAP.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlMAP.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlMAP.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlMAP.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlMAP.o: /usr/include/stdarg.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlMAP.o: /usr/include/string.h /usr/include/limits.h
vkhtmlMAP.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlMAP.o: /usr/include/sys/syslimits.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlMAP.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlMAP.o: /usr/include/runetype.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlMAP.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlMAP.o: /usr/include/sys/time.h
vkhtmlMAP.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlMETA.o: vkhtmlMETA.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlMETA.o: /usr/include/assert.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlMETA.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlMETA.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlMETA.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlMETA.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlMETA.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlMETA.o: /usr/include/stdarg.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlMETA.o: /usr/include/string.h /usr/include/limits.h
vkhtmlMETA.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlMETA.o: /usr/include/sys/syslimits.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlMETA.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlMETA.o: /usr/include/runetype.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlMETA.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlMETA.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlMETA.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlNOFRAMES.o: vkhtmlNOFRAMES.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlNOFRAMES.o: /usr/include/assert.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlNOFRAMES.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlNOFRAMES.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlNOFRAMES.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlNOFRAMES.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlNOFRAMES.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlNOFRAMES.o: /usr/include/stdarg.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlNOFRAMES.o: /usr/include/string.h /usr/include/limits.h
vkhtmlNOFRAMES.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlNOFRAMES.o: /usr/include/sys/syslimits.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlNOFRAMES.o: /usr/include/math.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlNOFRAMES.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlNOFRAMES.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlNOFRAMES.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlNOFRAMES.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlNOSCRIPT.o: vkhtmlNOSCRIPT.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlNOSCRIPT.o: /usr/include/assert.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlNOSCRIPT.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlNOSCRIPT.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlNOSCRIPT.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlNOSCRIPT.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlNOSCRIPT.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlNOSCRIPT.o: /usr/include/stdarg.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlNOSCRIPT.o: /usr/include/string.h /usr/include/limits.h
vkhtmlNOSCRIPT.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlNOSCRIPT.o: /usr/include/sys/syslimits.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlNOSCRIPT.o: /usr/include/math.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlNOSCRIPT.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlNOSCRIPT.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlNOSCRIPT.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlNOSCRIPT.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlOBJECT.o: vkhtmlOBJECT.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlOBJECT.o: /usr/include/assert.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlOBJECT.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlOBJECT.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlOBJECT.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlOBJECT.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlOBJECT.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlOBJECT.o: /usr/include/stdarg.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlOBJECT.o: /usr/include/string.h /usr/include/limits.h
vkhtmlOBJECT.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlOBJECT.o: /usr/include/sys/syslimits.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlOBJECT.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlOBJECT.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlOBJECT.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlOBJECT.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlOBJECT.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlOL.o: vkhtmlOL.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlOL.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlOL.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlOL.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlOL.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlOL.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlOL.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlOL.o: /usr/include/stdarg.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlOL.o: /usr/include/string.h /usr/include/limits.h
vkhtmlOL.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlOL.o: /usr/include/sys/syslimits.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlOL.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlOL.o: /usr/include/runetype.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlOL.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlOL.o: /usr/include/sys/time.h
vkhtmlOL.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlOPTGROUP.o: vkhtmlOPTGROUP.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlOPTGROUP.o: /usr/include/assert.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlOPTGROUP.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlOPTGROUP.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlOPTGROUP.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlOPTGROUP.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlOPTGROUP.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlOPTGROUP.o: /usr/include/stdarg.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlOPTGROUP.o: /usr/include/string.h /usr/include/limits.h
vkhtmlOPTGROUP.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlOPTGROUP.o: /usr/include/sys/syslimits.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlOPTGROUP.o: /usr/include/math.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlOPTGROUP.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlOPTGROUP.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlOPTGROUP.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlOPTGROUP.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlOPTION.o: vkhtmlOPTION.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlOPTION.o: /usr/include/assert.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlOPTION.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlOPTION.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlOPTION.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlOPTION.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlOPTION.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlOPTION.o: /usr/include/stdarg.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlOPTION.o: /usr/include/string.h /usr/include/limits.h
vkhtmlOPTION.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlOPTION.o: /usr/include/sys/syslimits.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlOPTION.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlOPTION.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlOPTION.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlOPTION.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlOPTION.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlP.o: vkhtmlP.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlP.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlP.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlP.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlP.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlP.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlP.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlP.o: /usr/include/stdarg.h /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlP.o: /usr/include/string.h /usr/include/limits.h
vkhtmlP.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlP.o: /usr/include/sys/syslimits.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_list.h /usr/include/math.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlP.o: /usr/include/runetype.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlP.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlP.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlP.o: /usr/include/sys/time.h /usr/include/gcc/darwin/default/g++/vector
vkhtmlPARAM.o: vkhtmlPARAM.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlPARAM.o: /usr/include/assert.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlPARAM.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlPARAM.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlPARAM.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlPARAM.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlPARAM.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlPARAM.o: /usr/include/stdarg.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlPARAM.o: /usr/include/string.h /usr/include/limits.h
vkhtmlPARAM.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlPARAM.o: /usr/include/sys/syslimits.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlPARAM.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlPARAM.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlPARAM.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlPARAM.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlPARAM.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlPRE.o: vkhtmlPRE.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlPRE.o: /usr/include/assert.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlPRE.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlPRE.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlPRE.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlPRE.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlPRE.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlPRE.o: /usr/include/stdarg.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlPRE.o: /usr/include/string.h /usr/include/limits.h
vkhtmlPRE.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlPRE.o: /usr/include/sys/syslimits.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlPRE.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlPRE.o: /usr/include/runetype.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlPRE.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlPRE.o: /usr/include/sys/time.h
vkhtmlPRE.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlQ.o: vkhtmlQ.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlQ.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlQ.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlQ.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlQ.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlQ.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlQ.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlQ.o: /usr/include/stdarg.h /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlQ.o: /usr/include/string.h /usr/include/limits.h
vkhtmlQ.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlQ.o: /usr/include/sys/syslimits.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_list.h /usr/include/math.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlQ.o: /usr/include/runetype.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlQ.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlQ.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlQ.o: /usr/include/sys/time.h /usr/include/gcc/darwin/default/g++/vector
vkhtmlSAMP.o: vkhtmlSAMP.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlSAMP.o: /usr/include/assert.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlSAMP.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlSAMP.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlSAMP.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlSAMP.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlSAMP.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlSAMP.o: /usr/include/stdarg.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlSAMP.o: /usr/include/string.h /usr/include/limits.h
vkhtmlSAMP.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlSAMP.o: /usr/include/sys/syslimits.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlSAMP.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlSAMP.o: /usr/include/runetype.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlSAMP.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlSAMP.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlSAMP.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlSCRIPT.o: vkhtmlSCRIPT.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlSCRIPT.o: /usr/include/assert.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlSCRIPT.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlSCRIPT.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlSCRIPT.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlSCRIPT.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlSCRIPT.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlSCRIPT.o: /usr/include/stdarg.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlSCRIPT.o: /usr/include/string.h /usr/include/limits.h
vkhtmlSCRIPT.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlSCRIPT.o: /usr/include/sys/syslimits.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlSCRIPT.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlSCRIPT.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlSCRIPT.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlSCRIPT.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlSCRIPT.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlSELECT.o: vkhtmlSELECT.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlSELECT.o: /usr/include/assert.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlSELECT.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlSELECT.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlSELECT.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlSELECT.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlSELECT.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlSELECT.o: /usr/include/stdarg.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlSELECT.o: /usr/include/string.h /usr/include/limits.h
vkhtmlSELECT.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlSELECT.o: /usr/include/sys/syslimits.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlSELECT.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlSELECT.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlSELECT.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlSELECT.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlSELECT.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlSMALL.o: vkhtmlSMALL.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlSMALL.o: /usr/include/assert.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlSMALL.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlSMALL.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlSMALL.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlSMALL.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlSMALL.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlSMALL.o: /usr/include/stdarg.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlSMALL.o: /usr/include/string.h /usr/include/limits.h
vkhtmlSMALL.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlSMALL.o: /usr/include/sys/syslimits.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlSMALL.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlSMALL.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlSMALL.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlSMALL.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlSMALL.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlSPAN.o: vkhtmlSPAN.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlSPAN.o: /usr/include/assert.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlSPAN.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlSPAN.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlSPAN.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlSPAN.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlSPAN.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlSPAN.o: /usr/include/stdarg.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlSPAN.o: /usr/include/string.h /usr/include/limits.h
vkhtmlSPAN.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlSPAN.o: /usr/include/sys/syslimits.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlSPAN.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlSPAN.o: /usr/include/runetype.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlSPAN.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlSPAN.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlSPAN.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlSTRONG.o: vkhtmlSTRONG.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlSTRONG.o: /usr/include/assert.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlSTRONG.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlSTRONG.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlSTRONG.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlSTRONG.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlSTRONG.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlSTRONG.o: /usr/include/stdarg.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlSTRONG.o: /usr/include/string.h /usr/include/limits.h
vkhtmlSTRONG.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlSTRONG.o: /usr/include/sys/syslimits.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlSTRONG.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlSTRONG.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlSTRONG.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlSTRONG.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlSTRONG.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlSTYLE.o: vkhtmlSTYLE.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlSTYLE.o: /usr/include/assert.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlSTYLE.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlSTYLE.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlSTYLE.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlSTYLE.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlSTYLE.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlSTYLE.o: /usr/include/stdarg.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlSTYLE.o: /usr/include/string.h /usr/include/limits.h
vkhtmlSTYLE.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlSTYLE.o: /usr/include/sys/syslimits.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlSTYLE.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlSTYLE.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlSTYLE.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlSTYLE.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlSTYLE.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlSUB.o: vkhtmlSUB.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlSUB.o: /usr/include/assert.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlSUB.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlSUB.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlSUB.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlSUB.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlSUB.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlSUB.o: /usr/include/stdarg.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlSUB.o: /usr/include/string.h /usr/include/limits.h
vkhtmlSUB.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlSUB.o: /usr/include/sys/syslimits.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlSUB.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlSUB.o: /usr/include/runetype.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlSUB.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlSUB.o: /usr/include/sys/time.h
vkhtmlSUB.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlSUP.o: vkhtmlSUP.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlSUP.o: /usr/include/assert.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlSUP.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlSUP.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlSUP.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlSUP.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlSUP.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlSUP.o: /usr/include/stdarg.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlSUP.o: /usr/include/string.h /usr/include/limits.h
vkhtmlSUP.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlSUP.o: /usr/include/sys/syslimits.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlSUP.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlSUP.o: /usr/include/runetype.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlSUP.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlSUP.o: /usr/include/sys/time.h
vkhtmlSUP.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlTABLE.o: vkhtmlTABLE.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlTABLE.o: /usr/include/assert.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlTABLE.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlTABLE.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlTABLE.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlTABLE.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlTABLE.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlTABLE.o: /usr/include/stdarg.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlTABLE.o: /usr/include/string.h /usr/include/limits.h
vkhtmlTABLE.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlTABLE.o: /usr/include/sys/syslimits.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlTABLE.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlTABLE.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlTABLE.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlTABLE.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlTABLE.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlTBODY.o: vkhtmlTBODY.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlTBODY.o: /usr/include/assert.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlTBODY.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlTBODY.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlTBODY.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlTBODY.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlTBODY.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlTBODY.o: /usr/include/stdarg.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlTBODY.o: /usr/include/string.h /usr/include/limits.h
vkhtmlTBODY.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlTBODY.o: /usr/include/sys/syslimits.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlTBODY.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlTBODY.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlTBODY.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlTBODY.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlTBODY.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlTD.o: vkhtmlTD.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlTD.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlTD.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlTD.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlTD.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlTD.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlTD.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlTD.o: /usr/include/stdarg.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlTD.o: /usr/include/string.h /usr/include/limits.h
vkhtmlTD.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlTD.o: /usr/include/sys/syslimits.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlTD.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlTD.o: /usr/include/runetype.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlTD.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlTD.o: /usr/include/sys/time.h
vkhtmlTD.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlTEXTAREA.o: vkhtmlTEXTAREA.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlTEXTAREA.o: /usr/include/assert.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlTEXTAREA.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlTEXTAREA.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlTEXTAREA.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlTEXTAREA.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlTEXTAREA.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlTEXTAREA.o: /usr/include/stdarg.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlTEXTAREA.o: /usr/include/string.h /usr/include/limits.h
vkhtmlTEXTAREA.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlTEXTAREA.o: /usr/include/sys/syslimits.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlTEXTAREA.o: /usr/include/math.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/queue
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlTEXTAREA.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlTEXTAREA.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlTEXTAREA.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlTEXTAREA.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlTFOOT.o: vkhtmlTFOOT.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlTFOOT.o: /usr/include/assert.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlTFOOT.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlTFOOT.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlTFOOT.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlTFOOT.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlTFOOT.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlTFOOT.o: /usr/include/stdarg.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlTFOOT.o: /usr/include/string.h /usr/include/limits.h
vkhtmlTFOOT.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlTFOOT.o: /usr/include/sys/syslimits.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlTFOOT.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlTFOOT.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlTFOOT.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlTFOOT.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlTFOOT.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlTH.o: vkhtmlTH.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlTH.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlTH.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlTH.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlTH.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlTH.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlTH.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlTH.o: /usr/include/stdarg.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlTH.o: /usr/include/string.h /usr/include/limits.h
vkhtmlTH.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlTH.o: /usr/include/sys/syslimits.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlTH.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlTH.o: /usr/include/runetype.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlTH.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlTH.o: /usr/include/sys/time.h
vkhtmlTH.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlTHEAD.o: vkhtmlTHEAD.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlTHEAD.o: /usr/include/assert.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlTHEAD.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlTHEAD.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlTHEAD.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlTHEAD.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlTHEAD.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlTHEAD.o: /usr/include/stdarg.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlTHEAD.o: /usr/include/string.h /usr/include/limits.h
vkhtmlTHEAD.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlTHEAD.o: /usr/include/sys/syslimits.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlTHEAD.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlTHEAD.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlTHEAD.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlTHEAD.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlTHEAD.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlTITLE.o: vkhtmlTITLE.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlTITLE.o: /usr/include/assert.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlTITLE.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlTITLE.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlTITLE.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlTITLE.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlTITLE.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlTITLE.o: /usr/include/stdarg.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlTITLE.o: /usr/include/string.h /usr/include/limits.h
vkhtmlTITLE.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlTITLE.o: /usr/include/sys/syslimits.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlTITLE.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/cctype
vkhtmlTITLE.o: /usr/include/ctype.h /usr/include/runetype.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlTITLE.o: ../library/libstdc++/ducttape/sstream-2.95.3
vkhtmlTITLE.o: /usr/include/time.h /usr/include/sys/time.h
vkhtmlTITLE.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlTR.o: vkhtmlTR.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlTR.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlTR.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlTR.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlTR.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlTR.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlTR.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlTR.o: /usr/include/stdarg.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlTR.o: /usr/include/string.h /usr/include/limits.h
vkhtmlTR.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlTR.o: /usr/include/sys/syslimits.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlTR.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlTR.o: /usr/include/runetype.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlTR.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlTR.o: /usr/include/sys/time.h
vkhtmlTR.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlTT.o: vkhtmlTT.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlTT.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlTT.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlTT.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlTT.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlTT.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlTT.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlTT.o: /usr/include/stdarg.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlTT.o: /usr/include/string.h /usr/include/limits.h
vkhtmlTT.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlTT.o: /usr/include/sys/syslimits.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlTT.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlTT.o: /usr/include/runetype.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlTT.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlTT.o: /usr/include/sys/time.h
vkhtmlTT.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlUL.o: vkhtmlUL.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlUL.o: /usr/include/assert.h /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlUL.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlUL.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlUL.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlUL.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlUL.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlUL.o: /usr/include/stdarg.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlUL.o: /usr/include/string.h /usr/include/limits.h
vkhtmlUL.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlUL.o: /usr/include/sys/syslimits.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlUL.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlUL.o: /usr/include/runetype.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlUL.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlUL.o: /usr/include/sys/time.h
vkhtmlUL.o: /usr/include/gcc/darwin/default/g++/vector
vkhtmlVAR.o: vkhtmlVAR.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
vkhtmlVAR.o: /usr/include/assert.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/cstdlib
vkhtmlVAR.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
vkhtmlVAR.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/fstream
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/fstream.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/iostream.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/streambuf.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/libio.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/_G_config.h
vkhtmlVAR.o: /usr/include/sys/types.h /usr/include/machine/types.h
vkhtmlVAR.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
vkhtmlVAR.o: /usr/include/ppc/endian.h /usr/include/stddef.h
vkhtmlVAR.o: /usr/include/stdarg.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/hash_map
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_config.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/type_traits.h
vkhtmlVAR.o: /usr/include/string.h /usr/include/limits.h
vkhtmlVAR.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
vkhtmlVAR.o: /usr/include/sys/syslimits.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/new.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/new
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/exception
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_function.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/hash_set
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/iostream
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/list
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_list.h
vkhtmlVAR.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/slist
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/string
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/cstddef
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/std/straits.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/cctype /usr/include/ctype.h
vkhtmlVAR.o: /usr/include/runetype.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/cstring
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/alloc.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/iterator
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/cassert
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
vkhtmlVAR.o: ../library/libstdc++/ducttape/sstream-2.95.3 /usr/include/time.h
vkhtmlVAR.o: /usr/include/sys/time.h
vkhtmlVAR.o: /usr/include/gcc/darwin/default/g++/vector
test_vkhtml.o: vkhtml.h vkhtmlA.h vkhtmlML.h ../vkmob/vkmobJect.h ../vkDef.h
test_vkhtml.o: /usr/include/assert.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/cstdlib
test_vkhtml.o: /usr/include/stdlib.h /usr/include/machine/ansi.h
test_vkhtml.o: /usr/include/ppc/ansi.h /usr/include/sys/cdefs.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/fstream
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/fstream.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/iostream.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/streambuf.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/libio.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/_G_config.h
test_vkhtml.o: /usr/include/sys/types.h /usr/include/machine/types.h
test_vkhtml.o: /usr/include/ppc/types.h /usr/include/machine/endian.h
test_vkhtml.o: /usr/include/ppc/endian.h /usr/include/stddef.h
test_vkhtml.o: /usr/include/stdarg.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/hash_map
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_hashtable.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_algobase.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_config.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_relops.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_pair.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/type_traits.h
test_vkhtml.o: /usr/include/string.h /usr/include/limits.h
test_vkhtml.o: /usr/include/machine/limits.h /usr/include/ppc/limits.h
test_vkhtml.o: /usr/include/sys/syslimits.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/new.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/new
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/exception
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_iterator.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_alloc.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_construct.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_tempbuf.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_algo.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_heap.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_uninitialized.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_function.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_vector.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_hash_fun.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_hash_map.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/hash_set
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_hash_set.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/iostream
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/list
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_list.h
test_vkhtml.o: /usr/include/math.h /usr/include/gcc/darwin/default/g++/queue
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_bvector.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_deque.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_queue.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/slist
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/stl_slist.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/string
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/std/bastring.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/cstddef
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/std/straits.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/cctype
test_vkhtml.o: /usr/include/ctype.h /usr/include/runetype.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/cstring
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/alloc.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/iterator
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/cassert
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/std/bastring.cc
test_vkhtml.o: ../library/libstdc++/ducttape/sstream-2.95.3
test_vkhtml.o: /usr/include/time.h /usr/include/sys/time.h
test_vkhtml.o: /usr/include/gcc/darwin/default/g++/vector vkhtmlABBR.h
test_vkhtml.o: vkhtmlACRONYM.h vkhtmlADDRESS.h vkhtmlAREA.h vkhtmlB.h
test_vkhtml.o: vkhtmlBASE.h vkhtmlBDO.h vkhtmlBIG.h vkhtmlBLOCKQUOTE.h
test_vkhtml.o: vkhtmlBODY.h vkhtmlBR.h vkhtmlBUTTON.h vkhtmlCAPTION.h
test_vkhtml.o: vkhtmlCITE.h vkhtmlCODE.h vkhtmlCOL.h vkhtmlCOLGROUP.h
test_vkhtml.o: vkhtmlDD.h vkhtmlDEL.h vkhtmlDFN.h vkhtmlDIV.h vkhtmlDL.h
test_vkhtml.o: vkhtmlDT.h vkhtmlEM.h vkhtmlFIELDSET.h vkhtmlFORM.h
test_vkhtml.o: vkhtmlFRAME.h vkhtmlFRAMESET.h vkhtmlH1.h vkhtmlH2.h
test_vkhtml.o: vkhtmlH3.h vkhtmlH4.h vkhtmlH5.h vkhtmlH6.h vkhtmlHEAD.h
test_vkhtml.o: vkhtmlHR.h vkhtmlHTML.h vkhtmlI.h vkhtmlIFRAME.h vkhtmlIMG.h
test_vkhtml.o: vkhtmlINPUT.h vkhtmlINS.h vkhtmlKBD.h vkhtmlLABEL.h
test_vkhtml.o: vkhtmlLEGEND.h vkhtmlLI.h vkhtmlLINK.h vkhtmlMAP.h
test_vkhtml.o: vkhtmlMETA.h vkhtmlNOFRAMES.h vkhtmlNOSCRIPT.h vkhtmlOBJECT.h
test_vkhtml.o: vkhtmlOL.h vkhtmlOPTGROUP.h vkhtmlOPTION.h vkhtmlP.h
test_vkhtml.o: vkhtmlPARAM.h vkhtmlPRE.h vkhtmlQ.h vkhtmlSAMP.h
test_vkhtml.o: vkhtmlSCRIPT.h vkhtmlSELECT.h vkhtmlSMALL.h vkhtmlSPAN.h
test_vkhtml.o: vkhtmlSTRONG.h vkhtmlSTYLE.h vkhtmlSUB.h vkhtmlSUP.h
test_vkhtml.o: vkhtmlTABLE.h vkhtmlTBODY.h vkhtmlTD.h vkhtmlTEXTAREA.h
test_vkhtml.o: vkhtmlTFOOT.h vkhtmlTH.h vkhtmlTHEAD.h vkhtmlTITLE.h
test_vkhtml.o: vkhtmlTR.h vkhtmlTT.h vkhtmlText.h vkhtmlUL.h vkhtmlVAR.h
