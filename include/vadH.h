/* vadH.h
   Generated by gSOAP 2.8.24 from VersionAndDependencies.h

gSOAP XML Web services tools
Copyright (C) 2000-2015, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef vadH_H
#define vadH_H
#include "vadStub.h"
#ifndef WITH_NOIDREF

#ifdef __cplusplus
extern "C" {
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_markelement(struct soap*, const void*, int);

#ifdef __cplusplus
}
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_putindependent(struct soap*);
SOAP_FMAC3 int SOAP_FMAC4 soap_getindependent(struct soap*);
#endif

#ifdef __cplusplus
extern "C" {
#endif
SOAP_FMAC3 void *SOAP_FMAC4 soap_getelement(struct soap*, int*);
SOAP_FMAC3 int SOAP_FMAC4 soap_putelement(struct soap*, const void*, const char*, int, int);

#ifdef __cplusplus
}
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_ignore_element(struct soap*);

SOAP_FMAC3 const char ** SOAP_FMAC4 soap_faultcode(struct soap *soap);
SOAP_FMAC3 void * SOAP_FMAC4 vad_instantiate(struct soap*, int, const char*, const char*, size_t*);
SOAP_FMAC3 int SOAP_FMAC4 vad_fdelete(struct soap_clist*);
SOAP_FMAC3 int SOAP_FMAC4 vad_fbase(int, int);
SOAP_FMAC3 void SOAP_FMAC4 vad_finsert(struct soap*, int, int, void*, size_t, const void*, void**);

#ifndef SOAP_TYPE_xsd__byte
#define SOAP_TYPE_xsd__byte (11)
#endif

#define soap_default_xsd__byte(soap, a) soap_default_byte(soap, a)


#define soap_xsd__byte2s soap_byte2s

SOAP_FMAC3 int SOAP_FMAC4 soap_out_xsd__byte(struct soap*, const char*, int, const char *, const char*);

#define soap_s2xsd__byte soap_s2byte

SOAP_FMAC3 char * SOAP_FMAC4 soap_in_xsd__byte(struct soap*, const char*, char *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_xsd__byte(struct soap*, const char *, const char*, const char*);

#ifndef soap_write_xsd__byte
#define soap_write_xsd__byte(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_xsd__byte(soap, data), 0) || soap_put_xsd__byte(soap, data, "xsd:byte", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 char * SOAP_FMAC4 soap_get_xsd__byte(struct soap*, char *, const char*, const char*);

#ifndef soap_read_xsd__byte
#define soap_read_xsd__byte(soap, data) ( ((data) ? (soap_default_xsd__byte(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_xsd__byte(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_byte(struct soap*, char *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_byte(struct soap*, const char*, int, const char *, const char*);
SOAP_FMAC3 char * SOAP_FMAC4 soap_in_byte(struct soap*, const char*, char *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_byte(struct soap*, const char *, const char*, const char*);

#ifndef soap_write_byte
#define soap_write_byte(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_byte(soap, data), 0) || soap_put_byte(soap, data, "byte", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 char * SOAP_FMAC4 soap_get_byte(struct soap*, char *, const char*, const char*);

#ifndef soap_read_byte
#define soap_read_byte(soap, data) ( ((data) ? (soap_default_byte(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_byte(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_int(struct soap*, int *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_int(struct soap*, const char*, int, const int *, const char*);
SOAP_FMAC3 int * SOAP_FMAC4 soap_in_int(struct soap*, const char*, int *, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_int(struct soap*, const int *, const char*, const char*);

#ifndef soap_write_int
#define soap_write_int(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_int(soap, data), 0) || soap_put_int(soap, data, "int", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 int * SOAP_FMAC4 soap_get_int(struct soap*, int *, const char*, const char*);

#ifndef soap_read_int
#define soap_read_int(soap, data) ( ((data) ? (soap_default_int(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_int(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#ifndef SOAP_TYPE_version_dependencies_depends
#define SOAP_TYPE_version_dependencies_depends (17)
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_out_version_dependencies_depends(struct soap*, const char*, int, const version_dependencies_depends *, const char*);
SOAP_FMAC3 version_dependencies_depends * SOAP_FMAC4 soap_in_version_dependencies_depends(struct soap*, const char*, version_dependencies_depends *, const char*);
SOAP_FMAC1 version_dependencies_depends * SOAP_FMAC2 soap_instantiate_version_dependencies_depends(struct soap*, int, const char*, const char*, size_t*);

inline version_dependencies_depends * soap_new_version_dependencies_depends(struct soap *soap, int n = -1) { return soap_instantiate_version_dependencies_depends(soap, n, NULL, NULL, NULL); }

inline version_dependencies_depends * soap_new_req_version_dependencies_depends(struct soap *soap,
	const std::string& __item)
{	version_dependencies_depends *_p = soap_new_version_dependencies_depends(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->version_dependencies_depends::__item = __item;
	}
	return _p;
}

inline version_dependencies_depends * soap_new_set_version_dependencies_depends(struct soap *soap,
	const std::string& __item,
	std::string *minVersion,
	std::string *maxVersion)
{	version_dependencies_depends *_p = soap_new_version_dependencies_depends(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->version_dependencies_depends::__item = __item;
		_p->version_dependencies_depends::minVersion = minVersion;
		_p->version_dependencies_depends::maxVersion = maxVersion;
	}
	return _p;
}

#ifndef soap_write_version_dependencies_depends
#define soap_write_version_dependencies_depends(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || ((data)->soap_serialize(soap), 0) || (data)->soap_put(soap, "version-dependencies-depends", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 version_dependencies_depends * SOAP_FMAC4 soap_get_version_dependencies_depends(struct soap*, version_dependencies_depends *, const char*, const char*);

#ifndef soap_read_version_dependencies_depends
#define soap_read_version_dependencies_depends(soap, data) ( ((data) ? ((data)->soap_default(soap), 0) : 0) || soap_begin_recv(soap) || !soap_get_version_dependencies_depends(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#ifndef SOAP_TYPE_version_dependencies
#define SOAP_TYPE_version_dependencies (16)
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_out_version_dependencies(struct soap*, const char*, int, const version_dependencies *, const char*);
SOAP_FMAC3 version_dependencies * SOAP_FMAC4 soap_in_version_dependencies(struct soap*, const char*, version_dependencies *, const char*);
SOAP_FMAC1 version_dependencies * SOAP_FMAC2 soap_instantiate_version_dependencies(struct soap*, int, const char*, const char*, size_t*);

inline version_dependencies * soap_new_version_dependencies(struct soap *soap, int n = -1) { return soap_instantiate_version_dependencies(soap, n, NULL, NULL, NULL); }

inline version_dependencies * soap_new_req_version_dependencies(struct soap *soap)
{	version_dependencies *_p = soap_new_version_dependencies(soap);
	if (_p)
	{	_p->soap_default(soap);
	}
	return _p;
}

inline version_dependencies * soap_new_set_version_dependencies(struct soap *soap,
	std::vector<version_dependencies_depends> *depends)
{	version_dependencies *_p = soap_new_version_dependencies(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->version_dependencies::depends = depends;
	}
	return _p;
}

#ifndef soap_write_version_dependencies
#define soap_write_version_dependencies(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || ((data)->soap_serialize(soap), 0) || (data)->soap_put(soap, "version-dependencies", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 version_dependencies * SOAP_FMAC4 soap_get_version_dependencies(struct soap*, version_dependencies *, const char*, const char*);

#ifndef soap_read_version_dependencies
#define soap_read_version_dependencies(soap, data) ( ((data) ? ((data)->soap_default(soap), 0) : 0) || soap_begin_recv(soap) || !soap_get_version_dependencies(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#ifndef SOAP_TYPE_std__string
#define SOAP_TYPE_std__string (13)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_std__string(struct soap*, std::string *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_std__string(struct soap*, const std::string *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_std__string(struct soap*, const char*, int, const std::string*, const char*);
SOAP_FMAC3 std::string * SOAP_FMAC4 soap_in_std__string(struct soap*, const char*, std::string*, const char*);
SOAP_FMAC1 std::string * SOAP_FMAC2 soap_instantiate_std__string(struct soap*, int, const char*, const char*, size_t*);

inline std::string * soap_new_std__string(struct soap *soap, int n = -1) { return soap_instantiate_std__string(soap, n, NULL, NULL, NULL); }

inline std::string * soap_new_req_std__string(struct soap *soap)
{	std::string *_p = soap_new_std__string(soap);
	if (_p)
	{	soap_default_std__string(soap, _p);
	}
	return _p;
}

inline std::string * soap_new_set_std__string(struct soap *soap)
{	std::string *_p = soap_new_std__string(soap);
	if (_p)
	{	soap_default_std__string(soap, _p);
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_std__string(struct soap*, const std::string *, const char*, const char*);

#ifndef soap_write_std__string
#define soap_write_std__string(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_std__string(soap, data), 0) || soap_put_std__string(soap, data, "string", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 std::string * SOAP_FMAC4 soap_get_std__string(struct soap*, std::string *, const char*, const char*);

#ifndef soap_read_std__string
#define soap_read_std__string(soap, data) ( ((data) ? (soap_default_std__string(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_std__string(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#ifndef SOAP_TYPE_version
#define SOAP_TYPE_version (12)
#endif
SOAP_FMAC3 int SOAP_FMAC4 soap_out_version(struct soap*, const char*, int, const version *, const char*);
SOAP_FMAC3 version * SOAP_FMAC4 soap_in_version(struct soap*, const char*, version *, const char*);
SOAP_FMAC1 version * SOAP_FMAC2 soap_instantiate_version(struct soap*, int, const char*, const char*, size_t*);

inline version * soap_new_version(struct soap *soap, int n = -1) { return soap_instantiate_version(soap, n, NULL, NULL, NULL); }

inline version * soap_new_req_version(struct soap *soap,
	const std::string& id,
	char major,
	char minor,
	const std::string& maturity,
	const version_dependencies& dependencies)
{	version *_p = soap_new_version(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->version::id = id;
		_p->version::major = major;
		_p->version::minor = minor;
		_p->version::maturity = maturity;
		_p->version::dependencies = dependencies;
	}
	return _p;
}

inline version * soap_new_set_version(struct soap *soap,
	const std::string& id,
	char major,
	char minor,
	char *build,
	std::string *revision,
	const std::string& maturity,
	const version_dependencies& dependencies)
{	version *_p = soap_new_version(soap);
	if (_p)
	{	_p->soap_default(soap);
		_p->version::id = id;
		_p->version::major = major;
		_p->version::minor = minor;
		_p->version::build = build;
		_p->version::revision = revision;
		_p->version::maturity = maturity;
		_p->version::dependencies = dependencies;
	}
	return _p;
}

#ifndef soap_write_version
#define soap_write_version(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || ((data)->soap_serialize(soap), 0) || (data)->soap_put(soap, "version", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 version * SOAP_FMAC4 soap_get_version(struct soap*, version *, const char*, const char*);

#ifndef soap_read_version
#define soap_read_version(soap, data) ( ((data) ? ((data)->soap_default(soap), 0) : 0) || soap_begin_recv(soap) || !soap_get_version(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (28)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Fault(struct soap*, const char*, int, const struct SOAP_ENV__Fault *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_in_SOAP_ENV__Fault(struct soap*, const char*, struct SOAP_ENV__Fault *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Fault * soap_new_SOAP_ENV__Fault(struct soap *soap, int n = -1) { return soap_instantiate_SOAP_ENV__Fault(soap, n, NULL, NULL, NULL); }

inline struct SOAP_ENV__Fault * soap_new_req_SOAP_ENV__Fault(struct soap *soap)
{	struct SOAP_ENV__Fault *_p = soap_new_SOAP_ENV__Fault(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Fault(soap, _p);
	}
	return _p;
}

inline struct SOAP_ENV__Fault * soap_new_set_SOAP_ENV__Fault(struct soap *soap,
	char *faultcode,
	char *faultstring,
	char *faultactor,
	struct SOAP_ENV__Detail *detail,
	struct SOAP_ENV__Code *SOAP_ENV__Code,
	struct SOAP_ENV__Reason *SOAP_ENV__Reason,
	char *SOAP_ENV__Node,
	char *SOAP_ENV__Role,
	struct SOAP_ENV__Detail *SOAP_ENV__Detail)
{	struct SOAP_ENV__Fault *_p = soap_new_SOAP_ENV__Fault(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Fault(soap, _p);
		_p->faultcode = faultcode;
		_p->faultstring = faultstring;
		_p->faultactor = faultactor;
		_p->detail = detail;
		_p->SOAP_ENV__Code = SOAP_ENV__Code;
		_p->SOAP_ENV__Reason = SOAP_ENV__Reason;
		_p->SOAP_ENV__Node = SOAP_ENV__Node;
		_p->SOAP_ENV__Role = SOAP_ENV__Role;
		_p->SOAP_ENV__Detail = SOAP_ENV__Detail;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Fault(struct soap*, const struct SOAP_ENV__Fault *, const char*, const char*);

#ifndef soap_write_SOAP_ENV__Fault
#define soap_write_SOAP_ENV__Fault(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Fault(soap, data), 0) || soap_put_SOAP_ENV__Fault(soap, data, "SOAP-ENV:Fault", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 struct SOAP_ENV__Fault * SOAP_FMAC4 soap_get_SOAP_ENV__Fault(struct soap*, struct SOAP_ENV__Fault *, const char*, const char*);

#ifndef soap_read_SOAP_ENV__Fault
#define soap_read_SOAP_ENV__Fault(soap, data) ( ((data) ? (soap_default_SOAP_ENV__Fault(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_SOAP_ENV__Fault(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (27)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Reason(struct soap*, const char*, int, const struct SOAP_ENV__Reason *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_in_SOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Reason * soap_new_SOAP_ENV__Reason(struct soap *soap, int n = -1) { return soap_instantiate_SOAP_ENV__Reason(soap, n, NULL, NULL, NULL); }

inline struct SOAP_ENV__Reason * soap_new_req_SOAP_ENV__Reason(struct soap *soap)
{	struct SOAP_ENV__Reason *_p = soap_new_SOAP_ENV__Reason(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Reason(soap, _p);
	}
	return _p;
}

inline struct SOAP_ENV__Reason * soap_new_set_SOAP_ENV__Reason(struct soap *soap,
	char *SOAP_ENV__Text)
{	struct SOAP_ENV__Reason *_p = soap_new_SOAP_ENV__Reason(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Reason(soap, _p);
		_p->SOAP_ENV__Text = SOAP_ENV__Text;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Reason(struct soap*, const struct SOAP_ENV__Reason *, const char*, const char*);

#ifndef soap_write_SOAP_ENV__Reason
#define soap_write_SOAP_ENV__Reason(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Reason(soap, data), 0) || soap_put_SOAP_ENV__Reason(soap, data, "SOAP-ENV:Reason", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 struct SOAP_ENV__Reason * SOAP_FMAC4 soap_get_SOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *, const char*, const char*);

#ifndef soap_read_SOAP_ENV__Reason
#define soap_read_SOAP_ENV__Reason(soap, data) ( ((data) ? (soap_default_SOAP_ENV__Reason(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_SOAP_ENV__Reason(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (24)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Detail(struct soap*, const char*, int, const struct SOAP_ENV__Detail *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_in_SOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Detail * soap_new_SOAP_ENV__Detail(struct soap *soap, int n = -1) { return soap_instantiate_SOAP_ENV__Detail(soap, n, NULL, NULL, NULL); }

inline struct SOAP_ENV__Detail * soap_new_req_SOAP_ENV__Detail(struct soap *soap,
	int __type,
	void *fault)
{	struct SOAP_ENV__Detail *_p = soap_new_SOAP_ENV__Detail(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Detail(soap, _p);
		_p->__type = __type;
		_p->fault = fault;
	}
	return _p;
}

inline struct SOAP_ENV__Detail * soap_new_set_SOAP_ENV__Detail(struct soap *soap,
	char *__any,
	int __type,
	void *fault)
{	struct SOAP_ENV__Detail *_p = soap_new_SOAP_ENV__Detail(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Detail(soap, _p);
		_p->__any = __any;
		_p->__type = __type;
		_p->fault = fault;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Detail(struct soap*, const struct SOAP_ENV__Detail *, const char*, const char*);

#ifndef soap_write_SOAP_ENV__Detail
#define soap_write_SOAP_ENV__Detail(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Detail(soap, data), 0) || soap_put_SOAP_ENV__Detail(soap, data, "SOAP-ENV:Detail", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 struct SOAP_ENV__Detail * SOAP_FMAC4 soap_get_SOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *, const char*, const char*);

#ifndef soap_read_SOAP_ENV__Detail
#define soap_read_SOAP_ENV__Detail(soap, data) ( ((data) ? (soap_default_SOAP_ENV__Detail(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_SOAP_ENV__Detail(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (22)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Code(struct soap*, const char*, int, const struct SOAP_ENV__Code *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_in_SOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Code * soap_new_SOAP_ENV__Code(struct soap *soap, int n = -1) { return soap_instantiate_SOAP_ENV__Code(soap, n, NULL, NULL, NULL); }

inline struct SOAP_ENV__Code * soap_new_req_SOAP_ENV__Code(struct soap *soap)
{	struct SOAP_ENV__Code *_p = soap_new_SOAP_ENV__Code(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Code(soap, _p);
	}
	return _p;
}

inline struct SOAP_ENV__Code * soap_new_set_SOAP_ENV__Code(struct soap *soap,
	char *SOAP_ENV__Value,
	struct SOAP_ENV__Code *SOAP_ENV__Subcode)
{	struct SOAP_ENV__Code *_p = soap_new_SOAP_ENV__Code(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Code(soap, _p);
		_p->SOAP_ENV__Value = SOAP_ENV__Value;
		_p->SOAP_ENV__Subcode = SOAP_ENV__Subcode;
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Code(struct soap*, const struct SOAP_ENV__Code *, const char*, const char*);

#ifndef soap_write_SOAP_ENV__Code
#define soap_write_SOAP_ENV__Code(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Code(soap, data), 0) || soap_put_SOAP_ENV__Code(soap, data, "SOAP-ENV:Code", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 struct SOAP_ENV__Code * SOAP_FMAC4 soap_get_SOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *, const char*, const char*);

#ifndef soap_read_SOAP_ENV__Code
#define soap_read_SOAP_ENV__Code(soap, data) ( ((data) ? (soap_default_SOAP_ENV__Code(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_SOAP_ENV__Code(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (21)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_SOAP_ENV__Header(struct soap*, const char*, int, const struct SOAP_ENV__Header *, const char*);
SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_in_SOAP_ENV__Header(struct soap*, const char*, struct SOAP_ENV__Header *, const char*);
SOAP_FMAC1 struct SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);

inline struct SOAP_ENV__Header * soap_new_SOAP_ENV__Header(struct soap *soap, int n = -1) { return soap_instantiate_SOAP_ENV__Header(soap, n, NULL, NULL, NULL); }

inline struct SOAP_ENV__Header * soap_new_req_SOAP_ENV__Header(struct soap *soap)
{	struct SOAP_ENV__Header *_p = soap_new_SOAP_ENV__Header(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Header(soap, _p);
	}
	return _p;
}

inline struct SOAP_ENV__Header * soap_new_set_SOAP_ENV__Header(struct soap *soap)
{	struct SOAP_ENV__Header *_p = soap_new_SOAP_ENV__Header(soap);
	if (_p)
	{	soap_default_SOAP_ENV__Header(soap, _p);
	}
	return _p;
}
SOAP_FMAC3 int SOAP_FMAC4 soap_put_SOAP_ENV__Header(struct soap*, const struct SOAP_ENV__Header *, const char*, const char*);

#ifndef soap_write_SOAP_ENV__Header
#define soap_write_SOAP_ENV__Header(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_SOAP_ENV__Header(soap, data), 0) || soap_put_SOAP_ENV__Header(soap, data, "SOAP-ENV:Header", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 struct SOAP_ENV__Header * SOAP_FMAC4 soap_get_SOAP_ENV__Header(struct soap*, struct SOAP_ENV__Header *, const char*, const char*);

#ifndef soap_read_SOAP_ENV__Header
#define soap_read_SOAP_ENV__Header(soap, data) ( ((data) ? (soap_default_SOAP_ENV__Header(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_SOAP_ENV__Header(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (30)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Reason(struct soap*, const char *, int, struct SOAP_ENV__Reason *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Reason(struct soap*, const char*, struct SOAP_ENV__Reason **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason *const*, const char*, const char*);

#ifndef soap_write_PointerToSOAP_ENV__Reason
#define soap_write_PointerToSOAP_ENV__Reason(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_PointerToSOAP_ENV__Reason(soap, data), 0) || soap_put_PointerToSOAP_ENV__Reason(soap, data, "SOAP-ENV:Reason", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 struct SOAP_ENV__Reason ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Reason(struct soap*, struct SOAP_ENV__Reason **, const char*, const char*);

#ifndef soap_read_PointerToSOAP_ENV__Reason
#define soap_read_PointerToSOAP_ENV__Reason(soap, data) ( ((data) ? (soap_default_PointerToSOAP_ENV__Reason(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_PointerToSOAP_ENV__Reason(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (29)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Detail(struct soap*, const char *, int, struct SOAP_ENV__Detail *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Detail(struct soap*, const char*, struct SOAP_ENV__Detail **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail *const*, const char*, const char*);

#ifndef soap_write_PointerToSOAP_ENV__Detail
#define soap_write_PointerToSOAP_ENV__Detail(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_PointerToSOAP_ENV__Detail(soap, data), 0) || soap_put_PointerToSOAP_ENV__Detail(soap, data, "SOAP-ENV:Detail", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 struct SOAP_ENV__Detail ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Detail(struct soap*, struct SOAP_ENV__Detail **, const char*, const char*);

#ifndef soap_read_PointerToSOAP_ENV__Detail
#define soap_read_PointerToSOAP_ENV__Detail(soap, data) ( ((data) ? (soap_default_PointerToSOAP_ENV__Detail(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_PointerToSOAP_ENV__Detail(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (23)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToSOAP_ENV__Code(struct soap*, const char *, int, struct SOAP_ENV__Code *const*, const char *);
SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_in_PointerToSOAP_ENV__Code(struct soap*, const char*, struct SOAP_ENV__Code **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code *const*, const char*, const char*);

#ifndef soap_write_PointerToSOAP_ENV__Code
#define soap_write_PointerToSOAP_ENV__Code(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_PointerToSOAP_ENV__Code(soap, data), 0) || soap_put_PointerToSOAP_ENV__Code(soap, data, "SOAP-ENV:Code", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 struct SOAP_ENV__Code ** SOAP_FMAC4 soap_get_PointerToSOAP_ENV__Code(struct soap*, struct SOAP_ENV__Code **, const char*, const char*);

#ifndef soap_read_PointerToSOAP_ENV__Code
#define soap_read_PointerToSOAP_ENV__Code(soap, data) ( ((data) ? (soap_default_PointerToSOAP_ENV__Code(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_PointerToSOAP_ENV__Code(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#endif

#ifndef SOAP_TYPE_PointerTostd__vectorTemplateOfversion_dependencies_depends
#define SOAP_TYPE_PointerTostd__vectorTemplateOfversion_dependencies_depends (19)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTostd__vectorTemplateOfversion_dependencies_depends(struct soap*, std::vector<version_dependencies_depends> *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTostd__vectorTemplateOfversion_dependencies_depends(struct soap*, const char *, int, std::vector<version_dependencies_depends> *const*, const char *);
SOAP_FMAC3 std::vector<version_dependencies_depends> ** SOAP_FMAC4 soap_in_PointerTostd__vectorTemplateOfversion_dependencies_depends(struct soap*, const char*, std::vector<version_dependencies_depends> **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTostd__vectorTemplateOfversion_dependencies_depends(struct soap*, std::vector<version_dependencies_depends> *const*, const char*, const char*);

#ifndef soap_write_PointerTostd__vectorTemplateOfversion_dependencies_depends
#define soap_write_PointerTostd__vectorTemplateOfversion_dependencies_depends(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_PointerTostd__vectorTemplateOfversion_dependencies_depends(soap, data), 0) || soap_put_PointerTostd__vectorTemplateOfversion_dependencies_depends(soap, data, "", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 std::vector<version_dependencies_depends> ** SOAP_FMAC4 soap_get_PointerTostd__vectorTemplateOfversion_dependencies_depends(struct soap*, std::vector<version_dependencies_depends> **, const char*, const char*);

#ifndef soap_read_PointerTostd__vectorTemplateOfversion_dependencies_depends
#define soap_read_PointerTostd__vectorTemplateOfversion_dependencies_depends(soap, data) ( ((data) ? (soap_default_PointerTostd__vectorTemplateOfversion_dependencies_depends(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_PointerTostd__vectorTemplateOfversion_dependencies_depends(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#ifndef SOAP_TYPE_PointerTostd__string
#define SOAP_TYPE_PointerTostd__string (15)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerTostd__string(struct soap*, std::string *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerTostd__string(struct soap*, const char *, int, std::string *const*, const char *);
SOAP_FMAC3 std::string ** SOAP_FMAC4 soap_in_PointerTostd__string(struct soap*, const char*, std::string **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerTostd__string(struct soap*, std::string *const*, const char*, const char*);

#ifndef soap_write_PointerTostd__string
#define soap_write_PointerTostd__string(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_PointerTostd__string(soap, data), 0) || soap_put_PointerTostd__string(soap, data, "string", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 std::string ** SOAP_FMAC4 soap_get_PointerTostd__string(struct soap*, std::string **, const char*, const char*);

#ifndef soap_read_PointerTostd__string
#define soap_read_PointerTostd__string(soap, data) ( ((data) ? (soap_default_PointerTostd__string(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_PointerTostd__string(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#ifndef SOAP_TYPE_PointerToxsd__byte
#define SOAP_TYPE_PointerToxsd__byte (14)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_PointerToxsd__byte(struct soap*, char *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_PointerToxsd__byte(struct soap*, const char *, int, char *const*, const char *);
SOAP_FMAC3 char ** SOAP_FMAC4 soap_in_PointerToxsd__byte(struct soap*, const char*, char **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_PointerToxsd__byte(struct soap*, char *const*, const char*, const char*);

#ifndef soap_write_PointerToxsd__byte
#define soap_write_PointerToxsd__byte(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_PointerToxsd__byte(soap, data), 0) || soap_put_PointerToxsd__byte(soap, data, "xsd:byte", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 char ** SOAP_FMAC4 soap_get_PointerToxsd__byte(struct soap*, char **, const char*, const char*);

#ifndef soap_read_PointerToxsd__byte
#define soap_read_PointerToxsd__byte(soap, data) ( ((data) ? (soap_default_PointerToxsd__byte(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_PointerToxsd__byte(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
#endif

#define soap_default__QName(soap, a) soap_default_string(soap, a)

SOAP_FMAC3 void SOAP_FMAC4 soap_serialize__QName(struct soap*, char *const*);

#define soap__QName2s soap_string2s

SOAP_FMAC3 int SOAP_FMAC4 soap_out__QName(struct soap*, const char*, int, char*const*, const char*);

#define soap_s2_QName soap_s2string

SOAP_FMAC3 char * * SOAP_FMAC4 soap_in__QName(struct soap*, const char*, char **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put__QName(struct soap*, char *const*, const char*, const char*);

#ifndef soap_write__QName
#define soap_write__QName(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize__QName(soap, data), 0) || soap_put__QName(soap, data, "QName", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 char ** SOAP_FMAC4 soap_get__QName(struct soap*, char **, const char*, const char*);

#ifndef soap_read__QName
#define soap_read__QName(soap, data) ( ((data) ? (soap_default__QName(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get__QName(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_string(struct soap*, char **);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_string(struct soap*, char *const*);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_string(struct soap*, const char*, int, char*const*, const char*);
SOAP_FMAC3 char * * SOAP_FMAC4 soap_in_string(struct soap*, const char*, char **, const char*);
SOAP_FMAC3 int SOAP_FMAC4 soap_put_string(struct soap*, char *const*, const char*, const char*);

#ifndef soap_write_string
#define soap_write_string(soap, data) ( soap_free_temp(soap), soap_begin_send(soap) || (soap_serialize_string(soap, data), 0) || soap_put_string(soap, data, "string", NULL) || soap_end_send(soap), (soap)->error )
#endif

SOAP_FMAC3 char ** SOAP_FMAC4 soap_get_string(struct soap*, char **, const char*, const char*);

#ifndef soap_read_string
#define soap_read_string(soap, data) ( ((data) ? (soap_default_string(soap, (data)), 0) : 0) || soap_begin_recv(soap) || !soap_get_string(soap, (data), NULL, NULL) || soap_end_recv(soap), (soap)->error )
#endif


#ifndef SOAP_TYPE_std__vectorTemplateOfversion_dependencies_depends
#define SOAP_TYPE_std__vectorTemplateOfversion_dependencies_depends (18)
#endif
SOAP_FMAC3 void SOAP_FMAC4 soap_default_std__vectorTemplateOfversion_dependencies_depends(struct soap*, std::vector<version_dependencies_depends> *);
SOAP_FMAC3 void SOAP_FMAC4 soap_serialize_std__vectorTemplateOfversion_dependencies_depends(struct soap*, const std::vector<version_dependencies_depends> *);
SOAP_FMAC3 int SOAP_FMAC4 soap_out_std__vectorTemplateOfversion_dependencies_depends(struct soap*, const char*, int, const std::vector<version_dependencies_depends> *, const char*);
SOAP_FMAC3 std::vector<version_dependencies_depends> * SOAP_FMAC4 soap_in_std__vectorTemplateOfversion_dependencies_depends(struct soap*, const char*, std::vector<version_dependencies_depends> *, const char*);
SOAP_FMAC1 std::vector<version_dependencies_depends>  * SOAP_FMAC2 soap_instantiate_std__vectorTemplateOfversion_dependencies_depends(struct soap*, int, const char*, const char*, size_t*);

inline std::vector<version_dependencies_depends>  * soap_new_std__vectorTemplateOfversion_dependencies_depends(struct soap *soap, int n = -1) { return soap_instantiate_std__vectorTemplateOfversion_dependencies_depends(soap, n, NULL, NULL, NULL); }

#endif

/* End of vadH.h */
