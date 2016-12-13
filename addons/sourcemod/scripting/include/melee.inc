#if defined _melee_included_
  #endinput
#endif
#define _melee_included_

public SharedPlugin:__pl_melee = 
{
	name = "melee",
	file = "melee.smx",
	required = 0
};

/**
 * Set melee mode
 *
 * @param Enabled 	True or false, whether melee should be on or off.
 * @param Verbose   	Print melee state when finished.
 * @return		none
 */
native SetMeleeMode(bool:bEnabled, bVerbose=true);

/**
 * Get melee mode
 *
 * @return	True or false, whether melee mode is enabled.
 */
native bool:GetMeleeMode();

/**
 * Triggered when melee mode changes.
 *
 * @param Enabled 	True or false, whether melee is on or off.
 * @return		none
 */
forward OnSetMeleeMode(bool:bEnabled);

/**
 * Triggered when a random melee arena round starts.
 *
 * @return		none
 */
forward OnMeleeArena();
