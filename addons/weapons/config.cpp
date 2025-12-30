#include "script_component.hpp"

#include "config_list.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = { WEAPON_LIST };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"sob_main"};
        author = AUTHOR;
        authors[] = {""};
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

    #include "Cfgammo.hpp"
    #include "CfgMagazines.hpp"
    #include "CfgWeapons.hpp"