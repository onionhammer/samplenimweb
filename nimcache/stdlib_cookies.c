/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/Users/erikoleary/lib/Nim/lib -o /Users/erikoleary/Documents/onion-nimrod/sampleweb/nimcache/stdlib_cookies.o /Users/erikoleary/Documents/onion-nimrod/sampleweb/nimcache/stdlib_cookies.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct stringtableobj173012 stringtableobj173012;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct timeinfo109205 timeinfo109205;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct keyvaluepairseq173010 keyvaluepairseq173010;
typedef struct TY109352 TY109352;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
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
struct  TNimObject  {
TNimType* m_type;
};
struct  timeinfo109205  {
  TNimObject Sup;
NI Second;
NI Minute;
NI Hour;
NI Monthday;
NU8 Month;
NI Year;
NU8 Weekday;
NI Yearday;
NIM_BOOL Isdst;
NimStringDesc* Tzname;
NI Timezone;
};
struct TY109352 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct  stringtableobj173012  {
  TNimObject Sup;
NI Counter;
keyvaluepairseq173010* Data;
NU8 Mode;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct keyvaluepairseq173010 {
  TGenericSeq Sup;
  TY109352 data[SEQ_DECL_SIZE];
};
N_NIMCALL(stringtableobj173012*, parsecookies_212009)(NimStringDesc* s);
N_NIMCALL(stringtableobj173012*, nstnewStringTable)(NU8 mode);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(void, nstPut)(stringtableobj173012* t, NimStringDesc* key, NimStringDesc* val);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75228, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_19001)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, setcookie_212111)(NimStringDesc* key, NimStringDesc* value, NimStringDesc* domain, NimStringDesc* path, NimStringDesc* expires, NIM_BOOL noname, NIM_BOOL secure, NIM_BOOL httponly);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, setcookie_212128)(NimStringDesc* key, NimStringDesc* value, timeinfo109205* expires, NimStringDesc* domain, NimStringDesc* path, NIM_BOOL noname, NIM_BOOL secure, NIM_BOOL httponly);
N_NIMCALL(NimStringDesc*, format_111221)(timeinfo109205* info, NimStringDesc* f);
STRING_LITERAL(TMP914, "", 0);
STRING_LITERAL(TMP915, "Set-Cookie: ", 12);
STRING_LITERAL(TMP916, "=", 1);
STRING_LITERAL(TMP917, "; Domain=", 9);
STRING_LITERAL(TMP918, "; Path=", 7);
STRING_LITERAL(TMP919, "; Expires=", 10);
STRING_LITERAL(TMP920, "; secure", 8);
STRING_LITERAL(TMP921, "; HttpOnly", 10);
STRING_LITERAL(TMP922, "ddd\',\' dd MMM yyyy HH:mm:ss \'UTC\'", 33);
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

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
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

N_NIMCALL(stringtableobj173012*, parsecookies_212009)(NimStringDesc* s) {
	stringtableobj173012* result;
	NI i;
	nimfr("parseCookies", "cookies.nim")
	result = 0;
	nimln(16, "cookies.nim");
	result = nstnewStringTable(((NU8) 1));
	nimln(17, "cookies.nim");
	i = 0;
	{
		nimln(18, "cookies.nim");
		while (1) {
			NI keystart;
			NI keyend;
			NI TMP912;
			NI valstart;
			NimStringDesc* LOC19;
			NI TMP913;
			NimStringDesc* LOC20;
			{
				nimln(19, "cookies.nim");
				while (1) {
					NIM_BOOL LOC5;
					nimln(19, "cookies.nim");
					LOC5 = 0;
					nimln(19, "cookies.nim");
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC5 = ((NU8)(s->data[i]) == (NU8)(32));
					if (LOC5) goto LA6;
					nimln(19, "cookies.nim");
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC5 = ((NU8)(s->data[i]) == (NU8)(9));
					LA6: ;
					if (!LOC5) goto LA4;
					nimln(19, "cookies.nim");
					i = addInt(i, 1);
				} LA4: ;
			}
			nimln(20, "cookies.nim");
			keystart = i;
			{
				nimln(21, "cookies.nim");
				while (1) {
					NIM_BOOL LOC9;
					nimln(21, "cookies.nim");
					LOC9 = 0;
					nimln(21, "cookies.nim");
					nimln(21, "cookies.nim");
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC9 = !(((NU8)(s->data[i]) == (NU8)(61)));
					if (!(LOC9)) goto LA10;
					nimln(21, "cookies.nim");
					nimln(21, "cookies.nim");
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC9 = !(((NU8)(s->data[i]) == (NU8)(0)));
					LA10: ;
					if (!LOC9) goto LA8;
					nimln(21, "cookies.nim");
					i = addInt(i, 1);
				} LA8: ;
			}
			nimln(22, "cookies.nim");
			nimln(22, "cookies.nim");
			TMP912 = subInt(i, 1);
			keyend = (NI64)(TMP912);
			nimln(23, "cookies.nim");
			{
				nimln(23, "cookies.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(0))) goto LA13;
				nimln(23, "cookies.nim");
				goto LA1;
			}
			LA13: ;
			nimln(24, "cookies.nim");
			i = addInt(i, 1);
			nimln(25, "cookies.nim");
			valstart = i;
			{
				nimln(26, "cookies.nim");
				while (1) {
					NIM_BOOL LOC17;
					nimln(26, "cookies.nim");
					LOC17 = 0;
					nimln(26, "cookies.nim");
					nimln(26, "cookies.nim");
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC17 = !(((NU8)(s->data[i]) == (NU8)(59)));
					if (!(LOC17)) goto LA18;
					nimln(26, "cookies.nim");
					nimln(26, "cookies.nim");
					if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
					LOC17 = !(((NU8)(s->data[i]) == (NU8)(0)));
					LA18: ;
					if (!LOC17) goto LA16;
					nimln(26, "cookies.nim");
					i = addInt(i, 1);
				} LA16: ;
			}
			nimln(27, "cookies.nim");
			nimln(27, "cookies.nim");
			LOC19 = 0;
			LOC19 = copyStrLast(s, keystart, keyend);
			nimln(27, "cookies.nim");
			nimln(27, "cookies.nim");
			TMP913 = subInt(i, 1);
			LOC20 = 0;
			LOC20 = copyStrLast(s, valstart, (NI64)(TMP913));
			nstPut(result, LOC19, LOC20);
			nimln(28, "cookies.nim");
			{
				nimln(28, "cookies.nim");
				if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
				if (!((NU8)(s->data[i]) == (NU8)(0))) goto LA23;
				nimln(28, "cookies.nim");
				goto LA1;
			}
			LA23: ;
			nimln(29, "cookies.nim");
			i = addInt(i, 1);
		}
	} LA1: ;
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, setcookie_212111)(NimStringDesc* key, NimStringDesc* value, NimStringDesc* domain, NimStringDesc* path, NimStringDesc* expires, NIM_BOOL noname, NIM_BOOL secure, NIM_BOOL httponly) {
	NimStringDesc* result;
	NimStringDesc* LOC5;
	nimfr("setCookie", "cookies.nim")
	result = 0;
	nimln(36, "cookies.nim");
	result = copyString(((NimStringDesc*) &TMP914));
	nimln(37, "cookies.nim");
	{
		nimln(37, "cookies.nim");
		if (!!(noname)) goto LA3;
		nimln(37, "cookies.nim");
		result = resizeString(result, 12);
appendString(result, ((NimStringDesc*) &TMP915));
	}
	LA3: ;
	nimln(38, "cookies.nim");
	nimln(38, "cookies.nim");
	LOC5 = 0;
	LOC5 = rawNewString(key->Sup.len + value->Sup.len + 1);
appendString(LOC5, key);
appendString(LOC5, ((NimStringDesc*) &TMP916));
appendString(LOC5, value);
	result = resizeString(result, LOC5->Sup.len + 0);
appendString(result, LOC5);
	nimln(39, "cookies.nim");
	{
		NimStringDesc* LOC10;
		nimln(39, "cookies.nim");
		nimln(39, "cookies.nim");
		if (!!(((domain) && (domain)->Sup.len == 0))) goto LA8;
		nimln(39, "cookies.nim");
		nimln(39, "cookies.nim");
		LOC10 = 0;
		LOC10 = rawNewString(domain->Sup.len + 9);
appendString(LOC10, ((NimStringDesc*) &TMP917));
appendString(LOC10, domain);
		result = resizeString(result, LOC10->Sup.len + 0);
appendString(result, LOC10);
	}
	LA8: ;
	nimln(40, "cookies.nim");
	{
		NimStringDesc* LOC15;
		nimln(40, "cookies.nim");
		nimln(40, "cookies.nim");
		if (!!(((path) && (path)->Sup.len == 0))) goto LA13;
		nimln(40, "cookies.nim");
		nimln(40, "cookies.nim");
		LOC15 = 0;
		LOC15 = rawNewString(path->Sup.len + 7);
appendString(LOC15, ((NimStringDesc*) &TMP918));
appendString(LOC15, path);
		result = resizeString(result, LOC15->Sup.len + 0);
appendString(result, LOC15);
	}
	LA13: ;
	nimln(41, "cookies.nim");
	{
		NimStringDesc* LOC20;
		nimln(41, "cookies.nim");
		nimln(41, "cookies.nim");
		if (!!(((expires) && (expires)->Sup.len == 0))) goto LA18;
		nimln(41, "cookies.nim");
		nimln(41, "cookies.nim");
		LOC20 = 0;
		LOC20 = rawNewString(expires->Sup.len + 10);
appendString(LOC20, ((NimStringDesc*) &TMP919));
appendString(LOC20, expires);
		result = resizeString(result, LOC20->Sup.len + 0);
appendString(result, LOC20);
	}
	LA18: ;
	nimln(42, "cookies.nim");
	{
		if (!secure) goto LA23;
		nimln(42, "cookies.nim");
		result = resizeString(result, 8);
appendString(result, ((NimStringDesc*) &TMP920));
	}
	LA23: ;
	nimln(43, "cookies.nim");
	{
		if (!httponly) goto LA27;
		nimln(43, "cookies.nim");
		result = resizeString(result, 10);
appendString(result, ((NimStringDesc*) &TMP921));
	}
	LA27: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, setcookie_212128)(NimStringDesc* key, NimStringDesc* value, timeinfo109205* expires, NimStringDesc* domain, NimStringDesc* path, NIM_BOOL noname, NIM_BOOL secure, NIM_BOOL httponly) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	nimfr("setCookie", "cookies.nim")
	result = 0;
	nimln(52, "cookies.nim");
	nimln(52, "cookies.nim");
	nimln(53, "cookies.nim");
	LOC1 = 0;
	LOC1 = format_111221(expires, ((NimStringDesc*) &TMP922));
	result = setcookie_212111(key, value, domain, path, LOC1, noname, secure, httponly);
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_cookiesInit)(void) {
	nimfr("cookies", "cookies.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_cookiesDatInit)(void) {
}
