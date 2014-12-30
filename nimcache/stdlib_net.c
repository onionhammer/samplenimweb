/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/Users/erikoleary/lib/Nim/lib -o /Users/erikoleary/Documents/onion-nimrod/sampleweb/nimcache/stdlib_net.o /Users/erikoleary/Documents/onion-nimrod/sampleweb/nimcache/stdlib_net.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <sys/socket.h>

#include <errno.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef N_NIMCALL_PTR(void, TY3089) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3094) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3089 marker;
TY3094 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_19001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
TNimType NTI152417; /* SocketFlag */
extern TFrame* frameptr_16442;

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}
	LA5: ;
	raiseOverflow();
	BeforeRet: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI LOC1;
	LOC1 = 0;
	{
		if (!(frameptr_16442 == NIM_NIL)) goto LA4;
		LOC1 = 0;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_16442).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s).calldepth = ((NI16) (LOC1));
	(*s).prev = frameptr_16442;
	frameptr_16442 = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_19001();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_16442 = (*frameptr_16442).prev;
}

N_NIMCALL(int, toosflags_152637)(NU8 socketflags) {
	int result;
	nimfr("toOSFlags", "net.nim")
	result = 0;
	{
		NU8 f_152713;
		NU8 i_152720;
		f_152713 = 0;
		nimln(1667, "system.nim");
		i_152720 = ((NU8) 0);
		nimln(1668, "system.nim");
		{
			nimln(1668, "system.nim");
			if (!(i_152720 <= ((NU8) 1))) goto LA4;
			{
				nimln(1669, "system.nim");
				while (1) {
					nimln(1670, "system.nim");
					{
						nimln(1670, "system.nim");
						if (!((socketflags &(1<<((i_152720)&7)))!=0)) goto LA10;
						nimln(1667, "system.nim");
						f_152713 = i_152720;
						{
							nimln(98, "net.nim");
							switch (f_152713) {
							case ((NU8) 0):
							{
								nimln(100, "net.nim");
								nimln(100, "net.nim");
								result = (NI32)(result | MSG_PEEK);
							}
							break;
							case ((NU8) 1):
							{
								nimln(101, "net.nim");
								goto LA12;
							}
							break;
							}
						} LA12: ;
					}
					LA10: ;
					nimln(1671, "system.nim");
					{
						nimln(1671, "system.nim");
						if (!(((NU8) 1) <= i_152720)) goto LA17;
						nimln(1671, "system.nim");
						goto LA6;
					}
					LA17: ;
					nimln(1672, "system.nim");
					i_152720 = addInt(i_152720, 1);
				}
			} LA6: ;
		}
		LA4: ;
	}
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (a <= i);
		if (!(LOC3)) goto LA4;
		LOC3 = (i <= b);
		LA4: ;
		if (!LOC3) goto LA5;
		result = i;
		goto BeforeRet;
	}
	goto LA1;
	LA5: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1: ;
	BeforeRet: ;
	return result;
}

N_NIMCALL(NIM_BOOL, isdisconnectionerror_152450)(NU8 flags, NI32 lasterror) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	nimfr("isDisconnectionError", "net.nim")
	result = 0;
	nimln(85, "net.nim");
	nimln(92, "net.nim");
	LOC1 = 0;
	nimln(92, "net.nim");
	LOC1 = ((flags &(1<<((((NU8) 1))&7)))!=0);
	if (!(LOC1)) goto LA2;
	nimln(93, "net.nim");
	LOC1 = (lasterror == ((NI)chckRange(ECONNRESET, 0, 65535)) || lasterror == ((NI)chckRange(EPIPE, 0, 65535)) || lasterror == ((NI)chckRange(ENETRESET, 0, 65535)));
	LA2: ;
	result = LOC1;
	popFrame();
	return result;
}

N_NIMCALL(int, tocint_154607)(NU8 opt) {
	int result;
	nimfr("toCInt", "net.nim")
	result = 0;
	nimln(453, "net.nim");
	nimln(454, "net.nim");
	switch (opt) {
	case ((NU8) 0):
	{
		result = SO_ACCEPTCONN;
	}
	break;
	case ((NU8) 1):
	{
		result = SO_BROADCAST;
	}
	break;
	case ((NU8) 2):
	{
		result = SO_DEBUG;
	}
	break;
	case ((NU8) 3):
	{
		result = SO_DONTROUTE;
	}
	break;
	case ((NU8) 4):
	{
		result = SO_KEEPALIVE;
	}
	break;
	case ((NU8) 5):
	{
		result = SO_OOBINLINE;
	}
	break;
	case ((NU8) 6):
	{
		result = SO_REUSEADDR;
	}
	break;
	}
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit)(void) {
	nimfr("net", "net.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit)(void) {
static TNimNode* TMP393[2];
NI TMP395;
static char* NIM_CONST TMP394[2] = {
"Peek", 
"SafeDisconn"};
static TNimNode TMP319[3];
NTI152417.size = sizeof(NU8);
NTI152417.kind = 14;
NTI152417.base = 0;
NTI152417.flags = 3;
for (TMP395 = 0; TMP395 < 2; TMP395++) {
TMP319[TMP395+0].kind = 1;
TMP319[TMP395+0].offset = TMP395;
TMP319[TMP395+0].name = TMP394[TMP395];
TMP393[TMP395] = &TMP319[TMP395+0];
}
TMP319[2].len = 2; TMP319[2].kind = 2; TMP319[2].sons = &TMP393[0];
NTI152417.node = &TMP319[2];
}

