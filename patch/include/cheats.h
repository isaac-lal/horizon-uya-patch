#include <libuya/gameplay.h>

// User Settings
void disableCameraShake(void);

// General Game Rules
void disableWeaponPacks(void);
void spawnWeaponPackOnDeath(void);
void v2_Setting(int setting, int FirstPass);
int disableHealthBoxes(void);
void AutoRespawn(void);
int setGattlingTurretHealth(int value);
int deleteSiegeNodeTurrets(void);
int deleteNodeTurrets(void);
void setRespawnTimer(void);
void onGameplayLoad_disableMoby(GameplayHeaderDef_t * gameplay, int mobyId);
int keepBaseHealthPadActive(void);
void noPostHitInvinc(void);
void onGameplayLoad_disableWeaponCrates(GameplayHeaderDef_t * gameplay);
void onGameplayLoad_disableAmmoPickups(GameplayHeaderDef_t * gameplay);
void healthbars_Logic(float nameX, float nameY, u32 nameColor, char * nameStr, int strLen);
void healthbars(void);

// Party Game Rules
void survivor(void);
void chargebootForever(void);
void onGameplayLoad_playerSize(GameplayHeaderDef_t * gameplay);
void playerSize(void);

// Other
void disableRespawning(void);

// variable addresses
VariableAddress_t vaUpdateWeaponKill;
