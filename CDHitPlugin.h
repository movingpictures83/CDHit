#ifndef CDHITPLUGIN_H
#define CDHITPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class CDHitPlugin : public Plugin
{
public: 
 std::string toString() {return "CDHit";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
