// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the PROJECT5_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// PROJECT5_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef PROJECT5_EXPORTS
#define PROJECT5_API __declspec(dllexport)
#else
#define PROJECT5_API __declspec(dllimport)
#endif

// This class is exported from the dll
class PROJECT5_API CProject5 {
public:
	CProject5(void);
	// TODO: add your methods here.
};

extern PROJECT5_API int nProject5;

PROJECT5_API int fnProject5(void);
