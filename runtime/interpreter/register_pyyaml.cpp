#include <Python.h>
#include "builtin_registry.h"

extern "C" struct _frozen _PyImport_FrozenModules_pyyaml[];

REGISTER_TORCH_DEPLOY_BUILTIN(frozen_pyyaml, _PyImport_FrozenModules_pyyaml);
