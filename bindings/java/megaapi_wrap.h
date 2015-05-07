/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.10
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_mega_WRAP_H_
#define SWIG_mega_WRAP_H_

class SwigDirector_MegaGfxProcessor : public mega::MegaGfxProcessor, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MegaGfxProcessor(JNIEnv *jenv);
    virtual bool readBitmap(char const *path);
    virtual int getWidth();
    virtual int getHeight();
    virtual int getBitmapDataSize(int width, int height, int px, int py, int rw, int rh);
    virtual bool getBitmapData(char *bitmapData, size_t size);
    virtual void freeBitmap();
    virtual ~SwigDirector_MegaGfxProcessor();
public:
    bool swig_overrides(int n) {
      return (n < 6 ? swig_override[n] : false);
    }
protected:
    bool swig_override[6];
};

class SwigDirector_MegaLogger : public mega::MegaLogger, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MegaLogger(JNIEnv *jenv);
    virtual void log(char const *time, int loglevel, char const *source, char const *message);
    virtual ~SwigDirector_MegaLogger();
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};

class SwigDirector_MegaTreeProcessor : public mega::MegaTreeProcessor, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MegaTreeProcessor(JNIEnv *jenv);
    virtual bool processMegaNode(mega::MegaNode *node);
    virtual ~SwigDirector_MegaTreeProcessor();
public:
    bool swig_overrides(int n) {
      return (n < 1 ? swig_override[n] : false);
    }
protected:
    bool swig_override[1];
};

class SwigDirector_MegaRequestListener : public mega::MegaRequestListener, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MegaRequestListener(JNIEnv *jenv);
    virtual void onRequestStart(mega::MegaApi *api, mega::MegaRequest *request);
    virtual void onRequestFinish(mega::MegaApi *api, mega::MegaRequest *request, mega::MegaError *e);
    virtual void onRequestUpdate(mega::MegaApi *api, mega::MegaRequest *request);
    virtual void onRequestTemporaryError(mega::MegaApi *api, mega::MegaRequest *request, mega::MegaError *error);
    virtual ~SwigDirector_MegaRequestListener();
public:
    bool swig_overrides(int n) {
      return (n < 4 ? swig_override[n] : false);
    }
protected:
    bool swig_override[4];
};

class SwigDirector_MegaTransferListener : public mega::MegaTransferListener, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MegaTransferListener(JNIEnv *jenv);
    virtual void onTransferStart(mega::MegaApi *api, mega::MegaTransfer *transfer);
    virtual void onTransferFinish(mega::MegaApi *api, mega::MegaTransfer *transfer, mega::MegaError *error);
    virtual void onTransferUpdate(mega::MegaApi *api, mega::MegaTransfer *transfer);
    virtual void onTransferTemporaryError(mega::MegaApi *api, mega::MegaTransfer *transfer, mega::MegaError *error);
    virtual ~SwigDirector_MegaTransferListener();
    virtual bool onTransferData(mega::MegaApi *api, mega::MegaTransfer *transfer, char *buffer, size_t size);
public:
    bool swig_overrides(int n) {
      return (n < 5 ? swig_override[n] : false);
    }
protected:
    bool swig_override[5];
};

class SwigDirector_MegaGlobalListener : public mega::MegaGlobalListener, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MegaGlobalListener(JNIEnv *jenv);
    virtual void onUsersUpdate(mega::MegaApi *api, mega::MegaUserList *users);
    virtual void onNodesUpdate(mega::MegaApi *api, mega::MegaNodeList *nodes);
    virtual void onReloadNeeded(mega::MegaApi *api);
    virtual ~SwigDirector_MegaGlobalListener();
public:
    bool swig_overrides(int n) {
      return (n < 3 ? swig_override[n] : false);
    }
protected:
    bool swig_override[3];
};

class SwigDirector_MegaListener : public mega::MegaListener, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_MegaListener(JNIEnv *jenv);
    virtual void onRequestStart(mega::MegaApi *api, mega::MegaRequest *request);
    virtual void onRequestFinish(mega::MegaApi *api, mega::MegaRequest *request, mega::MegaError *e);
    virtual void onRequestUpdate(mega::MegaApi *api, mega::MegaRequest *request);
    virtual void onRequestTemporaryError(mega::MegaApi *api, mega::MegaRequest *request, mega::MegaError *error);
    virtual void onTransferStart(mega::MegaApi *api, mega::MegaTransfer *transfer);
    virtual void onTransferFinish(mega::MegaApi *api, mega::MegaTransfer *transfer, mega::MegaError *error);
    virtual void onTransferUpdate(mega::MegaApi *api, mega::MegaTransfer *transfer);
    virtual void onTransferTemporaryError(mega::MegaApi *api, mega::MegaTransfer *transfer, mega::MegaError *error);
    virtual void onUsersUpdate(mega::MegaApi *api, mega::MegaUserList *users);
    virtual void onNodesUpdate(mega::MegaApi *api, mega::MegaNodeList *nodes);
    virtual void onReloadNeeded(mega::MegaApi *api);
    virtual ~SwigDirector_MegaListener();
public:
    bool swig_overrides(int n) {
      return (n < 11 ? swig_override[n] : false);
    }
protected:
    bool swig_override[11];
};


#endif
