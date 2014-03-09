bin_PROGRAMS = muscled

AM_CPPFLAGS = -DMUSCLE_SINGLE_THREAD_ONLY

muscled_SOURCES = server/muscled.cpp
muscled_LDADD = libmuscle.la

lib_LTLIBRARIES = libmuscle.la
libmuscle_la_SOURCES = \
	message/Message.cpp \
	iogateway/AbstractMessageIOGateway.cpp \
	iogateway/MessageIOGateway.cpp \
	system/SignalMultiplexer.cpp \
	system/GlobalMemoryAllocator.cpp \
	system/SetupSystem.cpp \
	syslog/SysLog.cpp \
	reflector/AbstractReflectSession.cpp \
	reflector/SignalHandlerSession.cpp \
	reflector/DumbReflectSession.cpp \
	reflector/StorageReflectSession.cpp \
	reflector/DataNode.cpp \
	reflector/ReflectServer.cpp \
	reflector/ServerComponent.cpp \
	reflector/FilterSessionFactory.cpp \
	reflector/RateLimitSessionIOPolicy.cpp \
	regex/StringMatcher.cpp \
	regex/PathMatcher.cpp \
	regex/QueryFilter.cpp \
	util/String.cpp \
	util/SocketMultiplexer.cpp \
	util/MiscUtilityFunctions.cpp \
	util/NetworkUtilityFunctions.cpp \
	util/PulseNode.cpp \
	util/MemoryAllocator.cpp \
	util/ByteBuffer.cpp \
	util/Directory.cpp \
	util/FilePathInfo.cpp \
	zlib/ZLibCodec.cpp
	
libmuscle_la_LDFLAGS = -version-info $(MUSCLE_LIBRARY_VERSION)
	
libmuscle_includedir=$(includedir)/muscle
libmuscle_include_HEADERS =  \
	message/Message.h \
	iogateway/AbstractMessageIOGateway.h \
	iogateway/MessageIOGateway.h \
	system/SignalMultiplexer.h \
	system/GlobalMemoryAllocator.h \
	system/SetupSystem.h \
	syslog/SysLog.h \
	reflector/AbstractReflectSession.h \
	reflector/SignalHandlerSession.h \
	reflector/DumbReflectSession.h \
	reflector/StorageReflectSession.h \
	reflector/DataNode.h \
	reflector/ReflectServer.h \
	reflector/ServerComponent.h \
	reflector/FilterSessionFactory.h \
	reflector/RateLimitSessionIOPolicy.h \
	regex/StringMatcher.h \
	regex/PathMatcher.h \
	regex/QueryFilter.h \
	util/String.h \
	util/SocketMultiplexer.h \
	util/MiscUtilityFunctions.h \
	util/NetworkUtilityFunctions.h \
	util/PulseNode.h \
	util/MemoryAllocator.h \
	util/ByteBuffer.h \
	util/Directory.h \
	util/FilePathInfo.h \
	zlib/ZLibCodec.h

dist_doc_DATA = BUILDOPTIONS.txt HISTORY.txt LICENSE.txt HOWTOBUILD.txt README.html


pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = muscle.pc