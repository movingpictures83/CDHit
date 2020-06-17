#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "CDHitPlugin.h"

void CDHitPlugin::input(std::string file) {
 inputfile = file;
}

void CDHitPlugin::run() {}

void CDHitPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "cd-hit";
myCommand += " ";
myCommand += "-i";
myCommand += " ";
myCommand += inputfile + " ";
myCommand += "-o";
myCommand += " ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<CDHitPlugin> CDHitPluginProxy = PluginProxy<CDHitPlugin>("CDHit", PluginManager::getInstance());
