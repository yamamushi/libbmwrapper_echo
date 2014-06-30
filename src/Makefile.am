
bmechodir			=	.

bin_PROGRAMS		=	bmecho

bmecho_SOURCES		=	$(bmecho_sources) $(bmecho_headers)

bmecho_CXXFLAGS		=	$(AM_CXXFLAGS)			\
				-I$(bmechodir)			\
				-I$(bmechodir)/network		\
				-I$(bmechodir)/parsers		\
				-I/usr/local/include/bmwrapper

bmecho_LADD		=	-lbmwrapper

bmecho_sources		=	main.cpp			

bmecho_headers		=	network/Network.h		
