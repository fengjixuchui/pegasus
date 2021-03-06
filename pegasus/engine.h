#ifndef __DEFINE_PEGASUS_WINDBG_ENGINE
#define __DEFINE_PEGASUS_WINDBG_ENGINE

class WindbgEngine : public ExtExtension
{
public:
	WindbgEngine();
	virtual HRESULT Initialize(void);

	void arch();
	void find();
	void ut();
	void refstr();
	void refexe();
};

class EmulatorEngine : public ExtExtension
{
public:
	EmulatorEngine() {}

	void attach();

	void stepinto();
	void stepover();
};

class KernelMode : public ExtExtension
{
public:
	KernelMode() {}

	void lp();
	void kd_process();
	void kd_thread();

	void queryvm();
	void current();
};

#endif
