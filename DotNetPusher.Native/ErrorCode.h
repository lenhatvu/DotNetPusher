#pragma once


enum ErrorCode
{
	ERROR_NO_CODEC = -1,
	ERROR_OPEN_CODEC = -2,
	ERROR_NO_OUTFMORTCONTEXT = -3,
	ERROR_CREATE_CODECCONTEXT = -4,
	ERROR_CREATE_OUTSTREAM = -5,
	ERROR_COPY_CODEC_PARAM = -6,
	ERROR_OPEN_URL = -7,
	ERROR_WRITEHEADER = -8,
	ERROR_WRITE_FRAME = -9,
	ERROR_WRITETRAILER = -10,
	ERROR_CLOSE_URL = -11,
	ERROR_OPEN_FORMATCONTEXT = -12,
	ERROR_NO_STREAM = -13,
	ERROR_PACKAGE_MODE = -14,
	ERROR_PACKET_REFERENCED = -15,
	ERROR_NO_BSF = -16,
	ERROR_ALLOC_BSF = -17,
	ERROR_INIT_BSF = -18,

};