// CkJsonObject.h: interface for the CkJsonObject class.
//
//////////////////////////////////////////////////////////////////////

// This header is generated for Chilkat v9.5.0

#ifndef _CkJsonObject_H
#define _CkJsonObject_H
	
#include "chilkatDefs.h"

#include "CkString.h"
#include "CkMultiByteBase.h"

class CkJsonArray;



#if !defined(__sun__) && !defined(__sun)
#pragma pack (push, 8)
#endif
 

// CLASS: CkJsonObject
class CK_VISIBLE_PUBLIC CkJsonObject  : public CkMultiByteBase
{
    private:

	// Don't allow assignment or copying these objects.
	CkJsonObject(const CkJsonObject &);
	CkJsonObject &operator=(const CkJsonObject &);

    public:
	CkJsonObject(void);
	virtual ~CkJsonObject(void);

	static CkJsonObject *createNew(void);
	void CK_VISIBLE_PRIVATE inject(void *impl);

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	

	// BEGIN PUBLIC INTERFACE

	// ----------------------
	// Properties
	// ----------------------
	// If true then the Emit method outputs in the most compact form possible (a
	// single-line with no extra whitespace). If false, then emits with whitespace
	// and indentation to make the JSON human-readable.
	bool get_EmitCompact(void);
	// If true then the Emit method outputs in the most compact form possible (a
	// single-line with no extra whitespace). If false, then emits with whitespace
	// and indentation to make the JSON human-readable.
	void put_EmitCompact(bool newVal);

	// If true then the Emit method uses CRLF line-endings when emitting the
	// non-compact (pretty-print) format. If false, then bare-LF's are emitted. (The
	// compact format emits to a single line with no end-of-line characters.) Windows
	// systems traditionally use CRLF line-endings, whereas Linux, Mac OS X, and other
	// systems traditionally use bare-LF line-endings. The default value is true.
	bool get_EmitCrLf(void);
	// If true then the Emit method uses CRLF line-endings when emitting the
	// non-compact (pretty-print) format. If false, then bare-LF's are emitted. (The
	// compact format emits to a single line with no end-of-line characters.) Windows
	// systems traditionally use CRLF line-endings, whereas Linux, Mac OS X, and other
	// systems traditionally use bare-LF line-endings. The default value is true.
	void put_EmitCrLf(bool newVal);

	// The value of the "i" index to be used when evaluating a JSON path.
	int get_I(void);
	// The value of the "i" index to be used when evaluating a JSON path.
	void put_I(int newVal);

	// The value of the "j" index to be used when evaluating a JSON path.
	int get_J(void);
	// The value of the "j" index to be used when evaluating a JSON path.
	void put_J(int newVal);

	// The value of the "k" index to be used when evaluating a JSON path.
	int get_K(void);
	// The value of the "k" index to be used when evaluating a JSON path.
	void put_K(int newVal);

	// The number of name/value members in this JSON object.
	int get_Size(void);



	// ----------------------
	// Methods
	// ----------------------
	// Inserts a new and empty JSON array member to the position indicated by ARG1. To
	// prepend, pass an ARG1 of 0. To append, pass an ARG1 of -1. Indexing is 0-based
	// (the 1st member is at index 0).
	bool AddArrayAt(int index, const char *name);


	// Inserts a new boolean member to the position indicated by ARG1. To prepend, pass
	// an ARG1 of 0. To append, pass an ARG1 of -1. Indexing is 0-based (the 1st member
	// is at index 0).
	bool AddBoolAt(int index, const char *name, bool value);


	// Inserts a new integer member to the position indicated by ARG1. To prepend, pass
	// an ARG1 of 0. To append, pass an ARG1 of -1. Indexing is 0-based (the 1st member
	// is at index 0).
	bool AddIntAt(int index, const char *name, int value);


	// Inserts a new null member to the position indicated by ARG1. To prepend, pass an
	// ARG1 of 0. To append, pass an ARG1 of -1. Indexing is 0-based (the 1st member is
	// at index 0).
	bool AddNullAt(int index, const char *name);


	// Inserts a new numeric member to the position indicated by ARG1. The ARG3 is an
	// integer, float, or double already converted to a string in the format desired by
	// the application. To prepend, pass an ARG1 of 0. To append, pass an ARG1 of -1.
	// Indexing is 0-based (the 1st member is at index 0).
	bool AddNumberAt(int index, const char *name, const char *numericStr);


	// Inserts a new and empty JSON object member to the position indicated by ARG1. To
	// prepend, pass an ARG1 of 0. To append, pass an ARG1 of -1. Indexing is 0-based
	// (the 1st member is at index 0).
	bool AddObjectAt(int index, const char *name);


	// Inserts a new string member to the position indicated by ARG1. To prepend, pass
	// an ARG1 of 0. To append, pass an ARG1 of -1. Indexing is 0-based (the 1st member
	// is at index 0).
	bool AddStringAt(int index, const char *name, const char *value);


	// Returns the JSON array that is the value of the Nth member. Indexing is 0-based
	// (the 1st member is at index 0).
	// The caller is responsible for deleting the object returned by this method.
	CkJsonArray *ArrayAt(int index);


	// Returns the JSON array at the specified ARG1.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonArray *ArrayOf(const char *jsonPath);


	// Returns the boolean value of the Nth member. Indexing is 0-based (the 1st member
	// is at index 0).
	bool BoolAt(int index);


	// Returns the boolean at the specified ARG1.
	bool BoolOf(const char *jsonPath);


	// Deletes the member at having the name specified by ARG1.
	bool Delete(const char *name);


	// Deletes the member at index ARG1. Indexing is 0-based (the 1st member is at
	// index 0).
	bool DeleteAt(int index);


	// Writes the JSON document (rooted at the caller) and returns as a string.
	bool Emit(CkString &outStr);

	// Writes the JSON document (rooted at the caller) and returns as a string.
	const char *emit(void);

	// Returns the root of the JSON document. The root can be obtained from any JSON
	// object within the JSON document. The entire JSON document remains in memory as
	// long as at least one JSON object is referenced by the application. When the last
	// reference is removed, the entire JSON document is automatically dellocated.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *GetDocRoot(void);


	// Returns the index of the member having the given ARG1. Returns -1 if the name is
	// not found.
	int IndexOf(const char *name);


	// Returns the integer value of the Nth member. Indexing is 0-based (the 1st member
	// is at index 0).
	int IntAt(int index);


	// Returns the integer at the specified ARG1.
	int IntOf(const char *jsonPath);


	// Returns the boolean value of the member having the specified ARG1.
	bool IsNullAt(int index);


	// Returns true if the value at the specified ARG1 is null. Otherwise returns
	// false.
	bool IsNullOf(const char *jsonPath);


	// Parses a JSON string and loads it into this JSON object to provide DOM-style
	// access.
	bool Load(const char *json);


	// Loads a JSON file into this JSON object. The ARG1 is the file path to the JSON
	// file.
	bool LoadFile(const char *path);


	// Returns the name of the Nth member. Indexing is 0-based (the 1st member is at
	// index 0).
	bool NameAt(int index, CkString &outStr);

	// Returns the name of the Nth member. Indexing is 0-based (the 1st member is at
	// index 0).
	const char *nameAt(int index);

	// Returns the JSON object that is the value of the Nth member. Indexing is 0-based
	// (the 1st member is at index 0).
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *ObjectAt(int index);


	// Returns the JSON object at the specified ARG1.
	// The caller is responsible for deleting the object returned by this method.
	CkJsonObject *ObjectOf(const char *jsonPath);


	// Renames the member named ARG1 to ARG2.
	bool Rename(const char *oldName, const char *newName);


	// Renames the member at ARG1 to ARG2.
	bool RenameAt(int index, const char *name);


	// Sets the boolean value of the Nth member. Indexing is 0-based (the 1st member is
	// at index 0).
	bool SetBoolAt(int index, bool value);


	// Sets the boolean value at the specified ARG1.
	bool SetBoolOf(const char *jsonPath, bool value);


	// Sets the integer value of the Nth member. Indexing is 0-based (the 1st member is
	// at index 0).
	bool SetIntAt(int index, int value);


	// Sets the integer at the specified ARG1.
	bool SetIntOf(const char *jsonPath, int value);


	// Sets the value of the Nth member to null. Indexing is 0-based (the 1st member is
	// at index 0).
	bool SetNullAt(int index);


	// Sets the value at the specified ARG1 to null.
	bool SetNullOf(const char *jsonPath);


	// Sets the numeric value of the Nth member. The ARG2 is an integer, float, or
	// double already converted to a string in the format desired by the application.
	// Indexing is 0-based (the 1st member is at index 0).
	bool SetNumberAt(int index, const char *value);


	// Sets the numeric value at the specified ARG1. The ARG2 is an integer, float, or
	// double already converted to a string in the format desired by the application.
	bool SetNumberOf(const char *jsonPath, const char *value);


	// Sets the string value of the Nth member. Indexing is 0-based (the 1st member is
	// at index 0).
	bool SetStringAt(int index, const char *value);


	// Sets the string value at the specified ARG1.
	bool SetStringOf(const char *jsonPath, const char *value);


	// Returns the size of the array at the given ARG1. Returns -1 if the ARG1 does not
	// evaluate to an existent JSON array.
	int SizeOfArray(const char *jsonPath);


	// Returns the string value of the Nth member. Indexing is 0-based (the 1st member
	// is at index 0).
	bool StringAt(int index, CkString &outStr);

	// Returns the string value of the Nth member. Indexing is 0-based (the 1st member
	// is at index 0).
	const char *stringAt(int index);

	// Returns the string value at the specified ARG1.
	bool StringOf(const char *jsonPath, CkString &outStr);

	// Returns the string value at the specified ARG1.
	const char *stringOf(const char *jsonPath);





	// END PUBLIC INTERFACE


};
#if !defined(__sun__) && !defined(__sun)
#pragma pack (pop)
#endif


	
#endif
