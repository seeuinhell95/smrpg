#if defined _smrpg_database_included
  #endinput
#endif
#define _smrpg_database_included

#include <smrpg>

/**
 * Resets all players in the database to level 1 again.
 * There is a difference between wiping the whole database (bHardReset=true) or just resetting all levels to 0 and keep the other settings (fade screen on levelup, visual effects for upgrade X).
 * It's recommened to do a "soft" reset and keep the settings.
 *
 * @param sReason       The reason for the reset. This is stored in a "reset_reason" setting, which can be retrieved with SMRPG_GetSetting.
 * @param bHardReset	Delete all player related information from the database? This will remove all settings the player might have set too.
 * @return True if the stats were reset, false otherwise (database connection problems or smrpg_save_data disabled).
 */
native bool:SMRPG_ResetAllPlayers(const String:sReason[], bool:bHardReset=false);

/**
 * Flushes the current stats of all players from the cache into the database, making them persistent.
 * This obeys the settings for smrpg_enable and smrpg_save_data.
 *
 * @noreturn
 */
native SMRPG_FlushDatabase();