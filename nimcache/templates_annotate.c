/* Generated by Nim Compiler v0.10.2 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/Users/erikoleary/lib/Nim/lib -o /Users/erikoleary/Documents/onion-nimrod/sampleweb/nimcache/templates_annotate.o /Users/erikoleary/Documents/onion-nimrod/sampleweb/nimcache/templates_annotate.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, reindent_227103)(NimStringDesc* value_227105, NI presetindent);
static N_INLINE(NI, parseuntil_93107)(NimStringDesc* s, NimStringDesc** token, NIM_CHAR until, NI start);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75228, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackoverflow_19001)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, skipwhitespace_92830)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, html_227184)(NimStringDesc* content);
N_NIMCALL(NimStringDesc*, xml_227191)(NimStringDesc* content);
N_NIMCALL(NimStringDesc*, glsl_227198)(NimStringDesc* content);
N_NIMCALL(NimStringDesc*, js_227205)(NimStringDesc* content);
N_NIMCALL(NimStringDesc*, css_227212)(NimStringDesc* content);
N_NIMCALL(NimStringDesc*, rst_227219)(NimStringDesc* content);
N_NIMCALL(NimStringDesc*, md_227226)(NimStringDesc* content);
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

static N_INLINE(NI, parseuntil_93107)(NimStringDesc* s, NimStringDesc** token, NIM_CHAR until, NI start) {
	NI result;
	NI i;
	NI TMP2025;
	NI TMP2026;
	nimfr("parseUntil", "parseutils.nim")
	result = 0;
	nimln(168, "parseutils.nim");
	i = start;
	{
		nimln(169, "parseutils.nim");
		while (1) {
			NIM_BOOL LOC3;
			nimln(169, "parseutils.nim");
			LOC3 = 0;
			nimln(169, "parseutils.nim");
			nimln(169, "parseutils.nim");
			LOC3 = (i < s->Sup.len);
			if (!(LOC3)) goto LA4;
			nimln(169, "parseutils.nim");
			nimln(169, "parseutils.nim");
			if ((NU)(i) > (NU)(s->Sup.len)) raiseIndexError();
			LOC3 = !(((NU8)(s->data[i]) == (NU8)(until)));
			LA4: ;
			if (!LOC3) goto LA2;
			nimln(169, "parseutils.nim");
			i = addInt(i, 1);
		} LA2: ;
	}
	nimln(170, "parseutils.nim");
	nimln(170, "parseutils.nim");
	TMP2025 = subInt(i, start);
	result = (NI64)(TMP2025);
	nimln(171, "parseutils.nim");
	nimln(171, "parseutils.nim");
	nimln(171, "parseutils.nim");
	TMP2026 = subInt(i, 1);
	unsureAsgnRef((void**) (&(*token)), copyStrLast(s, start, (NI64)(TMP2026)));
	popFrame();
	return result;
}

static N_INLINE(NI, skipwhitespace_92830)(NimStringDesc* s, NI start) {
	NI result;
	nimfr("skipWhitespace", "parseutils.nim")
	result = 0;
	{
		nimln(122, "parseutils.nim");
		while (1) {
			NI TMP2028;
			nimln(122, "parseutils.nim");
			nimln(122, "parseutils.nim");
			TMP2028 = addInt(start, result);
			if ((NU)((NI64)(TMP2028)) > (NU)(s->Sup.len)) raiseIndexError();
			if (!(((NU8)(s->data[(NI64)(TMP2028)])) == ((NU8)(32)) || ((NU8)(s->data[(NI64)(TMP2028)])) == ((NU8)(9)) || ((NU8)(s->data[(NI64)(TMP2028)])) == ((NU8)(11)) || ((NU8)(s->data[(NI64)(TMP2028)])) == ((NU8)(13)) || ((NU8)(s->data[(NI64)(TMP2028)])) == ((NU8)(10)) || ((NU8)(s->data[(NI64)(TMP2028)])) == ((NU8)(12)))) goto LA2;
			nimln(122, "parseutils.nim");
			result = addInt(result, 1);
		} LA2: ;
	}
	popFrame();
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(NimStringDesc*, reindent_227103)(NimStringDesc* value_227105, NI presetindent) {
	NimStringDesc* result;
	NI indent;
	NimStringDesc* precursor;
	nimfr("reindent", "annotate.nim")
	result = 0;
	nimln(32, "annotate.nim");
	indent = -1;
	{
		NimStringDesc* ln_227109;
		NI i_227134;
		ln_227109 = 0;
		nimln(24, "annotate.nim");
		i_227134 = 0;
		{
			nimln(25, "annotate.nim");
			while (1) {
				NimStringDesc* line_227136;
				NI LOC4;
				NI TMP2027;
				nimln(25, "annotate.nim");
				nimln(25, "annotate.nim");
				if (!(i_227134 < value_227105->Sup.len)) goto LA3;
				line_227136 = 0;
				nimln(27, "annotate.nim");
				nimln(27, "annotate.nim");
				nimln(27, "annotate.nim");
				LOC4 = 0;
				LOC4 = parseuntil_93107(value_227105, (&line_227136), 10, i_227134);
				TMP2027 = addInt(LOC4, 1);
				i_227134 = addInt(i_227134, (NI64)(TMP2027));
				nimln(26, "annotate.nim");
				ln_227109 = line_227136;
				{
					NI read;
					nimln(36, "annotate.nim");
					read = skipwhitespace_92830(ln_227109, 0);
					nimln(39, "annotate.nim");
					{
						nimln(39, "annotate.nim");
						nimln(39, "annotate.nim");
						if (!(read == ln_227109->Sup.len)) goto LA8;
						nimln(39, "annotate.nim");
						goto LA5;
					}
					LA8: ;
					nimln(41, "annotate.nim");
					nimln(41, "annotate.nim");
					{
						nimln(41, "annotate.nim");
						if (!(indent < 0)) goto LA12;
						indent = read;
					}
					goto LA10;
					LA12: ;
					{
						nimln(42, "annotate.nim");
						indent = ((indent <= read) ? indent : read);
					}
					LA10: ;
				} LA5: ;
			} LA3: ;
		}
	}
	nimln(45, "annotate.nim");
	nimln(45, "annotate.nim");
	precursor = mnewString(0);
	{
		NI i_227126;
		NI res_227140;
		i_227126 = 0;
		nimln(1576, "system.nim");
		res_227140 = 1;
		{
			nimln(1577, "system.nim");
			while (1) {
				nimln(1577, "system.nim");
				if (!(res_227140 <= presetindent)) goto LA17;
				nimln(1576, "system.nim");
				i_227126 = res_227140;
				nimln(47, "annotate.nim");
				precursor = addChar(precursor, 32);
				nimln(1579, "system.nim");
				res_227140 = addInt(res_227140, 1);
			} LA17: ;
		}
	}
	nimln(50, "annotate.nim");
	nimln(50, "annotate.nim");
	result = mnewString(0);
	{
		NimStringDesc* ln_227127;
		NI i_227145;
		ln_227127 = 0;
		nimln(24, "annotate.nim");
		i_227145 = 0;
		{
			nimln(25, "annotate.nim");
			while (1) {
				NimStringDesc* line_227147;
				NI LOC21;
				NI TMP2029;
				NimStringDesc* value;
				nimln(25, "annotate.nim");
				nimln(25, "annotate.nim");
				if (!(i_227145 < value_227105->Sup.len)) goto LA20;
				line_227147 = 0;
				nimln(27, "annotate.nim");
				nimln(27, "annotate.nim");
				nimln(27, "annotate.nim");
				LOC21 = 0;
				LOC21 = parseuntil_93107(value_227105, (&line_227147), 10, i_227145);
				TMP2029 = addInt(LOC21, 1);
				i_227145 = addInt(i_227145, (NI64)(TMP2029));
				nimln(26, "annotate.nim");
				ln_227127 = line_227147;
				nimln(53, "annotate.nim");
				nimln(53, "annotate.nim");
				value = copyStr(ln_227127, indent);
				nimln(55, "annotate.nim");
				result = resizeString(result, precursor->Sup.len + 0);
appendString(result, precursor);
				nimln(57, "annotate.nim");
				{
					nimln(57, "annotate.nim");
					nimln(57, "annotate.nim");
					if (!(0 < value->Sup.len)) goto LA24;
					nimln(58, "annotate.nim");
					result = resizeString(result, value->Sup.len + 0);
appendString(result, value);
					nimln(59, "annotate.nim");
					result = addChar(result, 10);
				}
				LA24: ;
			} LA20: ;
		}
	}
	nimln(61, "annotate.nim");
	goto BeforeRet;
	BeforeRet: ;
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, html_227184)(NimStringDesc* content) {
	NimStringDesc* result;
	nimfr("html", "annotate.nim")
	result = 0;
	nimln(65, "annotate.nim");
	result = reindent_227103(content, 0);
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, xml_227191)(NimStringDesc* content) {
	NimStringDesc* result;
	nimfr("xml", "annotate.nim")
	result = 0;
	nimln(65, "annotate.nim");
	result = reindent_227103(content, 0);
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, glsl_227198)(NimStringDesc* content) {
	NimStringDesc* result;
	nimfr("glsl", "annotate.nim")
	result = 0;
	nimln(65, "annotate.nim");
	result = reindent_227103(content, 0);
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, js_227205)(NimStringDesc* content) {
	NimStringDesc* result;
	nimfr("js", "annotate.nim")
	result = 0;
	nimln(65, "annotate.nim");
	result = reindent_227103(content, 0);
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, css_227212)(NimStringDesc* content) {
	NimStringDesc* result;
	nimfr("css", "annotate.nim")
	result = 0;
	nimln(65, "annotate.nim");
	result = reindent_227103(content, 0);
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, rst_227219)(NimStringDesc* content) {
	NimStringDesc* result;
	nimfr("rst", "annotate.nim")
	result = 0;
	nimln(65, "annotate.nim");
	result = reindent_227103(content, 0);
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, md_227226)(NimStringDesc* content) {
	NimStringDesc* result;
	nimfr("md", "annotate.nim")
	result = 0;
	nimln(65, "annotate.nim");
	result = reindent_227103(content, 0);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, templates_annotateInit)(void) {
	nimfr("annotate", "annotate.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, templates_annotateDatInit)(void) {
}
