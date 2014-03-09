bin_PROGRAMS = muscled

AM_CPPFLAGS = -DMUSCLE_SINGLE_THREAD_ONLY

muscled_SOURCES = server/muscled.cpp
muscled_LDADD = libmuscle.a

noinst_LIBRARIES = libmuscle.a
libmuscle_a_SOURCES = \
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

dist_doc_DATA = BUILDOPTIONS.txt HISTORY.txt LICENSE.txt HOWTOBUILD.txt README.html