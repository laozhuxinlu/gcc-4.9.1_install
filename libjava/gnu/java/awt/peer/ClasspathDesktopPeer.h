
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_peer_ClasspathDesktopPeer__
#define __gnu_java_awt_peer_ClasspathDesktopPeer__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace peer
        {
            class ClasspathDesktopPeer;
            class GnomeDesktopPeer;
            class KDEDesktopPeer;
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Desktop$Action;
      namespace peer
      {
          class DesktopPeer;
      }
    }
    namespace net
    {
        class URI;
    }
  }
}

class gnu::java::awt::peer::ClasspathDesktopPeer : public ::java::lang::Object
{

public: // actually protected
  ClasspathDesktopPeer();
public:
  virtual jboolean isSupported(::java::awt::Desktop$Action *);
  virtual void browse(::java::net::URI *);
  virtual void edit(::java::io::File *);
  virtual void mail(::java::net::URI *);
  virtual void mail();
  virtual void open(::java::io::File *);
  virtual void print(::java::io::File *);
public: // actually protected
  virtual ::java::lang::String * getCommand(::java::lang::String *);
  virtual void checkPermissions();
  virtual void checkPermissions(::java::io::File *, jboolean);
  virtual void checkPrintPermissions(::java::io::File *);
  virtual jboolean supportCommand(::java::lang::String *);
public:
  static ::java::awt::peer::DesktopPeer * getDesktop();
public: // actually package-private
  static JArray< jint > * $SWITCH_TABLE$java$awt$Desktop$Action();
public: // actually protected
  static ::java::lang::String * _DEFAULT_BROWSER;
  static ::java::lang::String * _BROWSE;
  static ::java::lang::String * _MAIL;
  static ::java::lang::String * _EDIT;
  static ::java::lang::String * _PRINT;
  static ::java::lang::String * _OPEN;
  static ::gnu::java::awt::peer::KDEDesktopPeer * kde;
  static ::gnu::java::awt::peer::GnomeDesktopPeer * gnome;
  static ::gnu::java::awt::peer::ClasspathDesktopPeer * classpath;
  ::java::util::prefs::Preferences * __attribute__((aligned(__alignof__( ::java::lang::Object)))) prefs;
private:
  static JArray< jint > * $SWITCH_TABLE$java$awt$Desktop$Action__;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_peer_ClasspathDesktopPeer__
