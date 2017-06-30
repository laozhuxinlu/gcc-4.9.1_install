
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_protocol_file_Connection__
#define __gnu_java_net_protocol_file_Connection__

#pragma interface

#include <java/net/URLConnection.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace protocol
        {
          namespace file
          {
              class Connection;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace net
    {
        class URL;
    }
    namespace security
    {
        class Permission;
    }
  }
}

class gnu::java::net::protocol::file::Connection : public ::java::net::URLConnection
{

public:
  Connection(::java::net::URL *);
  static ::java::lang::String * unquote(::java::lang::String *);
  virtual void connect();
public: // actually package-private
  virtual JArray< jbyte > * getDirectoryListing();
public:
  virtual ::java::io::InputStream * getInputStream();
  virtual ::java::io::OutputStream * getOutputStream();
  virtual jlong getLastModified();
  virtual ::java::lang::String * getHeaderField(::java::lang::String *);
  virtual jint getContentLength();
  virtual ::java::security::Permission * getPermission();
private:
  static ::java::lang::String * DEFAULT_PERMISSION;
  ::java::io::File * __attribute__((aligned(__alignof__( ::java::net::URLConnection)))) file;
  JArray< jbyte > * directoryListing;
  ::java::io::InputStream * inputStream;
  ::java::io::OutputStream * outputStream;
  ::java::io::FilePermission * permission;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_protocol_file_Connection__
