/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/Users/erikoleary/lib/Nim/lib -o /Users/erikoleary/Documents/onion-nimrod/sampleweb/nimcache/index.o /Users/erikoleary/Documents/onion-nimrod/sampleweb/nimcache/index.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct TY229045 TY229045;
typedef struct todoitem229013 todoitem229013;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45335 tcell45335;
typedef struct tcellseq45351 tcellseq45351;
typedef struct tgcheap47416 tgcheap47416;
typedef struct tcellset45347 tcellset45347;
typedef struct tpagedesc45343 tpagedesc45343;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47414 tgcstat47414;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  todoitem229013  {
NI Id;
NimStringDesc* Description;
NIM_BOOL Done;
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell45335  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45351  {
NI Len;
NI Cap;
tcell45335** D;
};
struct  tcellset45347  {
NI Counter;
NI Max;
tpagedesc45343* Head;
tpagedesc45343** Data;
};
typedef tsmallchunk26840* TY27622[512];
typedef ttrunk26813* ttrunkbuckets26815[256];
struct  tintset26817  {
ttrunkbuckets26815 Data;
};
struct  tmemregion27610  {
NI Minlargeobj;
NI Maxlargeobj;
TY27622 Freesmallchunks;
tllchunk27604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26842* Freechunkslist;
tintset26817 Chunkstarts;
tavlnode27608* Root;
tavlnode27608* Deleted;
tavlnode27608* Last;
tavlnode27608* Freeavlnodes;
};
struct  tgcstat47414  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47416  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45351 Zct;
tcellseq45351 Decstack;
tcellset45347 Cycleroots;
tcellseq45351 Tempstack;
NI Recgclock;
tmemregion27610 Region;
tgcstat47414 Stat;
};
typedef NI TY26820[8];
struct  tpagedesc45343  {
tpagedesc45343* Next;
NI Key;
TY26820 Bits;
};
struct  tbasechunk26838  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26840  {
  tbasechunk26838 Sup;
tsmallchunk26840* Next;
tsmallchunk26840* Prev;
tfreecell26830* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27604  {
NI Size;
NI Acc;
tllchunk27604* Next;
};
struct  tbigchunk26842  {
  tbasechunk26838 Sup;
tbigchunk26842* Next;
tbigchunk26842* Prev;
NI Align;
NF Data;
};
struct  ttrunk26813  {
ttrunk26813* Next;
NI Key;
TY26820 Bits;
};
typedef tavlnode27608* TY27614[2];
struct  tavlnode27608  {
TY27614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct TY229045 {
  TGenericSeq Sup;
  todoitem229013 data[SEQ_DECL_SIZE];
};
N_NIMCALL(TY229045*, newseq_229040)(NI len_229044);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell45335*, usrtocell_49046)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_19001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_50604)(tcell45335* c);
N_NOINLINE(void, addzct_49017)(tcellseq45351* s, tcell45335* c);
N_NIMCALL(NimStringDesc*, HEX24_229078)(todoitem229013* item);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, view_229088)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, failedassertimpl_85425)(NimStringDesc* msg);
N_NIMCALL(NimStringDesc*, layout_228009)(NimStringDesc* title, NimStringDesc* content);
STRING_LITERAL(TMP2037, "", 0);
STRING_LITERAL(TMP2038, "<input type=\"checkbox\" name=\"", 29);
STRING_LITERAL(TMP2040, "\" id=\"", 6);
STRING_LITERAL(TMP2041, "\">\012<label for=\"", 15);
STRING_LITERAL(TMP2042, "\">", 2);
STRING_LITERAL(TMP2043, "</label>\012", 9);
STRING_LITERAL(TMP2044, "<ul>\012", 5);
STRING_LITERAL(TMP2045, "    <li>", 8);
STRING_LITERAL(TMP2046, "</li>\012", 6);
STRING_LITERAL(TMP2047, "(system.len|system.len|system.len|system.len|system.len|...)(a)"
" (system.==|system.==|system.==|system.==|system.==|system.==|sy"
"stem.==|system.==|system.==|system.==|system.==|system.==|system"
".==|system.==|system.==|system.==|system.==|system.==|system.==|"
"system.==|...)\012    L seq modified while iterating over it", 312);
STRING_LITERAL(TMP2048, "</ul>\012", 6);
STRING_LITERAL(TMP2049, "<span>No TODO items</span>\012", 27);
STRING_LITERAL(TMP2050, "<form action=\"/add\" method=\"post\">\012    <label for=\"newItem\">New"
" Item:</label>\012    <input id=\"newItem\" name=\"newItem\">\012    <butt"
"on name=>Add</button>\012</form>\012", 157);
STRING_LITERAL(TMP2051, "TODO", 4);
NI nextid_229020;
TNimType NTI229013; /* TodoItem */
extern TNimType NTI108; /* int */
extern TNimType NTI149; /* string */
extern TNimType NTI138; /* bool */
TY229045* todoitems_229074;
extern TFrame* frameptr_16442;
extern tgcheap47416 gch_47444;

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

static N_INLINE(tcell45335*, usrtocell_49046)(void* usr) {
	tcell45335* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell45335*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45335))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_50604)(tcell45335* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_49017((&gch_47444.Zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell45335* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_49046(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell45335* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_49046((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_50604(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, HEX24_229078)(todoitem229013* item) {
	NimStringDesc* result;
	NimStringDesc* LOC1;
	NimStringDesc* LOC2;
	NimStringDesc* LOC3;
	NimStringDesc* LOC4;
	NimStringDesc* LOC5;
	NimStringDesc* LOC6;
	NimStringDesc* LOC7;
	nimfr("$", "index.nim")
	result = 0;
	nimln(266, "macros.nim");
	result = copyString(((NimStringDesc*) &TMP2037));
	nimln(16, "index.nim");
	result = resizeString(result, 29);
appendString(result, ((NimStringDesc*) &TMP2038));
	nimln(16, "index.nim");
	nimln(16, "index.nim");
	nimln(266, "macros.nim");
	LOC1 = 0;
	LOC1 = nimIntToStr((*item).Id);
	LOC2 = 0;
	LOC2 = nsuStrip(LOC1, NIM_TRUE, NIM_TRUE);
	result = resizeString(result, LOC2->Sup.len + 0);
appendString(result, LOC2);
	nimln(16, "index.nim");
	result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TMP2040));
	nimln(16, "index.nim");
	nimln(16, "index.nim");
	nimln(266, "macros.nim");
	LOC3 = 0;
	LOC3 = nimIntToStr((*item).Id);
	LOC4 = 0;
	LOC4 = nsuStrip(LOC3, NIM_TRUE, NIM_TRUE);
	result = resizeString(result, LOC4->Sup.len + 0);
appendString(result, LOC4);
	nimln(16, "index.nim");
	result = resizeString(result, 15);
appendString(result, ((NimStringDesc*) &TMP2041));
	nimln(16, "index.nim");
	nimln(16, "index.nim");
	nimln(266, "macros.nim");
	LOC5 = 0;
	LOC5 = nimIntToStr((*item).Id);
	LOC6 = 0;
	LOC6 = nsuStrip(LOC5, NIM_TRUE, NIM_TRUE);
	result = resizeString(result, LOC6->Sup.len + 0);
appendString(result, LOC6);
	nimln(16, "index.nim");
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TMP2042));
	nimln(16, "index.nim");
	nimln(16, "index.nim");
	nimln(266, "macros.nim");
	LOC7 = 0;
	LOC7 = nsuStrip((*item).Description, NIM_TRUE, NIM_TRUE);
	result = resizeString(result, LOC7->Sup.len + 0);
appendString(result, LOC7);
	nimln(16, "index.nim");
	result = resizeString(result, 9);
appendString(result, ((NimStringDesc*) &TMP2043));
	popFrame();
	return result;
}

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

N_NIMCALL(NimStringDesc*, view_229088)(void) {
	NimStringDesc* result;
	nimfr("view", "index.nim")
	result = 0;
	nimln(22, "index.nim");
	{
		nimln(22, "index.nim");
		nimln(22, "index.nim");
		if (!(0 < todoitems_229074->Sup.len)) goto LA3;
		nimln(266, "macros.nim");
		result = copyString(((NimStringDesc*) &TMP2037));
		nimln(23, "index.nim");
		result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TMP2044));
		{
			todoitem229013 item_229222;
			NI i_229226;
			NI l_229228;
			memset((void*)(&item_229222), 0, sizeof(item_229222));
			nimln(2986, "system.nim");
			i_229226 = 0;
			nimln(2987, "system.nim");
			nimln(2987, "system.nim");
			l_229228 = todoitems_229074->Sup.len;
			{
				nimln(2988, "system.nim");
				while (1) {
					NimStringDesc* LOC8;
					nimln(2988, "system.nim");
					if (!(i_229226 < l_229228)) goto LA7;
					nimln(2989, "system.nim");
					if ((NU)(i_229226) >= (NU)(todoitems_229074->Sup.len)) raiseIndexError();
					item_229222.Id = todoitems_229074->data[i_229226].Id;
					item_229222.Description = todoitems_229074->data[i_229226].Description;
					item_229222.Done = todoitems_229074->data[i_229226].Done;
					nimln(23, "index.nim");
					result = resizeString(result, 8);
appendString(result, ((NimStringDesc*) &TMP2045));
					nimln(23, "index.nim");
					nimln(23, "index.nim");
					LOC8 = 0;
					LOC8 = HEX24_229078((&item_229222));
					result = resizeString(result, LOC8->Sup.len + 0);
appendString(result, LOC8);
					nimln(23, "index.nim");
					result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TMP2046));
					nimln(2990, "system.nim");
					i_229226 = addInt(i_229226, 1);
					nimln(2991, "system.nim");
					{
						nimln(2991, "system.nim");
						nimln(2991, "system.nim");
						nimln(2991, "system.nim");
						if (!!((todoitems_229074->Sup.len == l_229228))) goto LA11;
						nimln(2991, "system.nim");
						failedassertimpl_85425(((NimStringDesc*) &TMP2047));
					}
					LA11: ;
				} LA7: ;
			}
		}
		nimln(23, "index.nim");
		result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TMP2048));
	}
	goto LA1;
	LA3: ;
	{
		nimln(266, "macros.nim");
		result = copyString(((NimStringDesc*) &TMP2037));
		nimln(31, "index.nim");
		result = resizeString(result, 27);
appendString(result, ((NimStringDesc*) &TMP2049));
	}
	LA1: ;
	nimln(35, "index.nim");
	result = resizeString(result, 157);
appendString(result, ((NimStringDesc*) &TMP2050));
	nimln(43, "index.nim");
	nimln(43, "index.nim");
	result = layout_228009(((NimStringDesc*) &TMP2051), result);
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, HEX00_indexInit)(void) {
	nimfr("index", "index.nim")
	nimln(12, "index.nim");
	nextid_229020 = 1;
	nimln(13, "index.nim");
	asgnRefNoCycle((void**) (&todoitems_229074), newseq_229040(0));
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, HEX00_indexDatInit)(void) {
static TNimNode* TMP2035[3];
static TNimNode TMP2033[4];
NTI229013.size = sizeof(todoitem229013);
NTI229013.kind = 18;
NTI229013.base = 0;
NTI229013.flags = 2;
TMP2035[0] = &TMP2033[1];
TMP2033[1].kind = 1;
TMP2033[1].offset = offsetof(todoitem229013, Id);
TMP2033[1].typ = (&NTI108);
TMP2033[1].name = "id";
TMP2035[1] = &TMP2033[2];
TMP2033[2].kind = 1;
TMP2033[2].offset = offsetof(todoitem229013, Description);
TMP2033[2].typ = (&NTI149);
TMP2033[2].name = "description";
TMP2035[2] = &TMP2033[3];
TMP2033[3].kind = 1;
TMP2033[3].offset = offsetof(todoitem229013, Done);
TMP2033[3].typ = (&NTI138);
TMP2033[3].name = "done";
TMP2033[0].len = 3; TMP2033[0].kind = 2; TMP2033[0].sons = &TMP2035[0];
NTI229013.node = &TMP2033[0];
}
