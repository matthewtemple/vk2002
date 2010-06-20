vk:
	cd library && $(MAKE)
	cd vkapp && $(MAKE)
	cd vkbull && $(MAKE)
	cd vkcgi && $(MAKE)
	cd vkhtml && $(MAKE)
	cd vkhttp && $(MAKE)
	cd vkice && $(MAKE)
	cd vkjack && $(MAKE)
	cd vkliz && $(MAKE)
	cd vkmath && $(MAKE)
	cd vkmob && $(MAKE)
	cd vkphe && $(MAKE)
	cd vkqc && $(MAKE)
	cd vkqcs && $(MAKE)
	cd vksh && $(MAKE)
	cd vkwww && $(MAKE)
clean:
	cd library && $(MAKE) clean
	cd vkapp && $(MAKE) clean
	cd vkbull && $(MAKE) clean
	cd vkcgi && $(MAKE) clean
	cd vkhtml && $(MAKE) clean
	cd vkhttp && $(MAKE) clean
	cd vkice && $(MAKE) clean
	cd vkjack && $(MAKE) clean
	cd vkliz && $(MAKE) clean
	cd vkmath && $(MAKE) clean
	cd vkmob && $(MAKE) clean
	cd vkphe && $(MAKE) clean
	cd vkqc && $(MAKE) clean
	cd vkqcs && $(MAKE) clean
	cd vksh && $(MAKE) clean
	cd vkwww && $(MAKE) clean
depend:
	cd library && $(MAKE) depend
	cd vkapp && $(MAKE) depend
	cd vkbull && $(MAKE) depend
	cd vkcgi && $(MAKE) depend
	cd vkhtml && $(MAKE) depend
	cd vkhttp && $(MAKE) depend
	cd vkice && $(MAKE) depend
	cd vkjack && $(MAKE) depend
	cd vkliz && $(MAKE) depend
	cd vkmath && $(MAKE) depend
	cd vkmob && $(MAKE) depend
	cd vkphe && $(MAKE) depend
	cd vkqc && $(MAKE) depend
	cd vkqcs && $(MAKE) depend
	cd vksh && $(MAKE) depend
	cd vkwww && $(MAKE) depend
