/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef ON_DEMAND_SYSTEM_BAKE_CONFIG_H
#define ON_DEMAND_SYSTEM_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>

/* Headers of private dependencies */
#ifdef on_demand_system_EXPORT
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#if on_demand_system_EXPORTS && (defined(_MSC_VER) || defined(__MINGW32__))
  #define ON_DEMAND_SYSTEM_EXPORT __declspec(dllexport)
#elif on_demand_system_EXPORTS
  #define ON_DEMAND_SYSTEM_EXPORT __attribute__((__visibility__("default")))
#elif defined _MSC_VER
  #define ON_DEMAND_SYSTEM_EXPORT __declspec(dllimport)
#else
  #define ON_DEMAND_SYSTEM_EXPORT
#endif

#endif

