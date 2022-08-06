// Naming pattern: SleeveType_Camo_Pattern
// Combat ATACS - Short Sleeves
class CLASS(Uniform_Combat_RS_ATACS_ATX): CLASS(Uniform_Base) {
    scope = 2;
    author = "Tibernius, Mike";
    displayName = CSTRING(Uniform_Combat_RS_ATACS_ATX);
    picture = QPATHTOF(UI\uniform_combat_rs_atacs_atx.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Combat_RS_ATACS_ATX);
    };
};
class CLASS(Uniform_Combat_RS_ATACS_AUX): CLASS(Uniform_Base) {
    scope = 2;
    author = "Tibernius, Mike";
    displayName = CSTRING(Uniform_Combat_RS_ATACS_AUX);
    picture = QPATHTOF(UI\uniform_combat_rs_atacs_aux.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Combat_RS_ATACS_AUX);
    };
};
class CLASS(Uniform_Combat_RS_ATACS_IX): CLASS(Uniform_Base) {
    scope = 2;
    author = "Tibernius, Mike";
    displayName = CSTRING(Uniform_Combat_RS_ATACS_IX);
    picture = QPATHTOF(UI\uniform_combat_rs_atacs_ix.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Combat_RS_ATACS_IX);
    };
};
class CLASS(Uniform_Combat_RS_ATACS_LEX): CLASS(Uniform_Base) {
    scope = 2;
    author = "Tibernius, Mike";
    displayName = CSTRING(Uniform_Combat_RS_ATACS_LEX);
    picture = QPATHTOF(UI\uniform_combat_rs_atacs_lex.paa);

    class ItemInfo: ItemInfo {
        uniformClass = QCLASS(Unit_Combat_RS_ATACS_LEX);
    };
};
