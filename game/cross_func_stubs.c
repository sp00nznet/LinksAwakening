/* Auto-generated stub functions for cross-function local label references */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void AddEntitySpeedToPos_03_return(void) { /* ret - no-op */ }
void AddEntitySpeedToPos_03_updatePosition(void) {
    /* Jump-to-middle: AddEntitySpeedToPos .updatePosition label
       At entry: hl = position table base, af pushed with speed, bc = entity index, d has carry */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto _positive;
    gb.regs.e = 0xF0;
  _positive:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
}
void AddEntitySpeedToPos_04_return(void) { /* ret - no-op */ }
void AddEntitySpeedToPos_04_updatePosition(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto _p; gb.regs.e = 0xF0; _p:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
}
void AddEntitySpeedToPos_05_return(void) { /* ret - no-op */ }
void AddEntitySpeedToPos_05_updatePosition(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto _p05; gb.regs.e = 0xF0; _p05:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
}
void AddEntitySpeedToPos_06_return(void) { /* ret - no-op */ }
void AddEntitySpeedToPos_06_updatePosition(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto _p06; gb.regs.e = 0xF0; _p06:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
}
void AddEntitySpeedToPos_07_return(void) { /* ret - no-op */ }
void AddEntitySpeedToPos_07_updatePosition(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto _p07; gb.regs.e = 0xF0; _p07:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
}
void AddEntitySpeedToPos_15_return(void) { /* ret - no-op */ }
void AddEntitySpeedToPos_15_updatePosition(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto _p15; gb.regs.e = 0xF0; _p15:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
}
void AddEntitySpeedToPos_17_return(void) { /* ret - no-op */ }
void AddEntitySpeedToPos_17_updatePosition(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto _p17; gb.regs.e = 0xF0; _p17:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
}
void AddEntitySpeedToPos_18_return(void) { /* ret - no-op */ }
void AddEntitySpeedToPos_18_updatePosition(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto _p18; gb.regs.e = 0xF0; _p18:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
}
void AddEntitySpeedToPos_19_return(void) { /* ret - no-op */ }
void AddEntitySpeedToPos_19_updatePosition(void) {
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.e = 0;
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto _p19; gb.regs.e = 0xF0; _p19:;
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    gb.regs.a = alu_or8(gb.regs.a, gb.regs.e);
    gb.regs.d = alu_rr(gb.regs.d);
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
}
void AnimateTiles_doWorldAnimations(void) {
    /* Jump-to-middle: AnimateTiles .doWorldAnimations label
       Check room transition / switch blocks / tile replacement, then animate tiles */
    gb.regs.hl = 0xC124;
    gb.regs.a = gb_read(0xD5C2);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) { DrawLinkSpriteAndReturn(); return; }
    gb.regs.a = gb_read(0xD7AD);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { UpdateSwitchBlockTiles(); DrawLinkSpriteAndReturn(); return; }
    gb.regs.a = gb_read(0xFFA5);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) { AnimateTiles_replaceTiles(); return; }
    /* tilesReplacementEnd: increment animation counter, dispatch */
    gb.regs.a = gb_read(0xFFA6);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFA6, gb.regs.a);
    AnimateTiles_jumpTable();
}
void AnimateTiles_replaceTiles(void) {
    /* Jump-to-middle: AnimateTiles .replaceTiles - dispatch on FFA5 value */
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) { ReplaceEvilEagleRiderVisibleTiles(); return; }
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_Z()) { ReplaceEvilEagleRiderHiddenTiles(); return; }
    alu_cp8(gb.regs.a, 3);
    if (GET_FLAG_Z()) { ReplaceTilesButtonPressed(); return; }
    alu_cp8(gb.regs.a, 4);
    if (GET_FLAG_Z()) { ReplaceTiles_04(); return; }
    alu_cp8(gb.regs.a, 8);
    if (GET_FLAG_Z()) { ReplaceTiles_08(); return; }
    alu_cp8(gb.regs.a, 9);
    if (GET_FLAG_Z()) { ReplaceSlimeKeyTilesByGoldenLeaf(); return; }
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_Z()) { ReplaceMagicPowderTilesByToadstool(); return; }
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) { ReplaceToadstoolTilesByMagicPowder(); return; }
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) { ReplaceDialogTilesByInstruments(); return; }
    alu_cp8(gb.regs.a, 0x0D);
    if (GET_FLAG_Z()) { ReplaceTradingItemTiles(); return; }
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_Z()) { gb_call_bank(23, AnimateCreditsIslandFadeTiles); return; }
    alu_cp8(gb.regs.a, 0x0F);
    if (GET_FLAG_Z()) { ReplaceMarinTiles_sitting(); return; }
    alu_cp8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) { ReplaceMarinTiles_standingUp(); return; }
    DrawLinkSpriteAndReturn();
}
void ApplyLinkGroundPhysics_part2_makeLinkFallInPit(void) {
    /* Jump-to-middle: trigger pit fall - set state, reset spin, play SFX */
    gb.regs.a = 6;
    gb_write(0xC11C, gb.regs.a);
    ResetSpinAttack();
    gb_write(0xC198, gb.regs.a);
    gb.regs.a = gb_read(0xC181);
    gb_write(0xDC73, gb.regs.a);
    gb.regs.a = 0x0C;
    gb_write(0xFFF3, gb.regs.a);
}
void ArrowRenderAndMove_skipLoadingSprites(void) {
    /* Jump-to-middle: render sprites then do arrow movement/collision */
    RenderActiveEntitySpritesPair();
    ArrowRenderAndMove_skipRendering();
}
void ArrowRenderAndMove_skipRendering(void) {
    /* Jump-to-middle: arrow movement, collision detection, bounce logic */
    ReturnIfNonInteractive_03();
    GetEntityTransitionCountdown();
    if (!GET_FLAG_Z()) { ArrowRockAfterHittingWall(); return; }
    UpdateEntityPosWithSpeed_03();
    ApplySwordIntersectionWithObjects();
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { EntityBounceOffWallX_return(); return; }
    GetEntityTransitionCountdown();
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto _fireballEnd;
    GetEntityPrivateCountdown1();
    gb_write(gb.regs.hl, 0x30);
    return;
  _fireballEnd:;
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_inc8(gb.regs.a);
    if (GET_FLAG_Z()) goto _skipSound;
    gb.regs.a = 7;
    gb_write(0xFFF2, gb.regs.a);
  _skipSound:;
    AlertSwordMoblins();
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0);
    if (!GET_FLAG_Z()) goto _enemyProjectileBounce;
    _playerArrowBounceY();
    gb.regs.hl = 0xC240;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    return;
  _enemyProjectileBounce:;
    EntityBounceOffWallY();
    EntityBounceOffWallX();
}
void BombExplosionVisuals_smallExplosion(void) {
    /* Jump-to-middle: render small explosion sprite, check interactivity */
    gb.regs.de = 0x506E;
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_03();
}
void CheckLinkCollisionWithProjectile_jr_003_6C54(void) {
    /* Jump-to-middle: set entity vulnerability flags to 0xFF */
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
}
void CheckLinkCollisionWithProjectile_return(void) { /* ret - no-op */ }
void CheckLinkInteractionWithEntity_06_label_006_647E(void) {
    /* Jump-to-middle: continue hitbox check after Y-distance comparison */
    if (!GET_FLAG_C()) goto _noInteraction;
    gb.regs.a = gb_read(0xFF98);
    gb.regs.hl = 0xFFEE;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) goto _noInteraction;
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb_read(0xFFEB);
    alu_cp8(gb.regs.a, 0x78);
    if (GET_FLAG_Z()) goto _jr_649F;
    gb_push16(gb.regs.de);
    GetEntityDirectionToLink_06();
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.a = alu_xor8(gb.regs.a, 1);
    alu_cp8(gb.regs.a, gb.regs.e);
    gb.regs.de = gb_pop16();
    if (!GET_FLAG_Z()) goto _noInteraction;
  _jr_649F:;
    gb.regs.hl = 0xC1AD;
    gb_write(gb.regs.hl, 1);
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC146;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC134;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto _noInteraction;
    gb.regs.a = gb_read(0xDC42);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto _noInteraction;
    gb.regs.a = gb_read(0xFFCC);
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    if (GET_FLAG_Z()) goto _noInteraction;
    alu_scf();
    return;
  _noInteraction:;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
}
void ConfigureNewEntity_attributes(void) {
    /* Jump-to-middle: load entity attributes from type tables (Gibdo->Stalfos etc.) */
    gb.regs.hl = 0xC3A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x4000;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC340;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x4006;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC350;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    ConfigureEntityHealth();
    gb.regs.hl = 0x4009;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC430;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    ConfigureEntityHitbox();
}
void CopyDataAndDrawLinkSprite_drawLinkSprite(void) {
    /* Jump-to-middle: CopyDataAndDrawLinkSprite .drawLinkSprite label */
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA5, gb.regs.a);
    gb.regs.a = 12;
    gb_write(0x2100, gb.regs.a);
    DrawLinkSpriteAndReturn();
}
void CopyDataToVRAM_restoreBankAndReturn(void) {
    /* Jump-to-middle: CopyDataToVRAM .restoreBankAndReturn label */
    gb.regs.a = gb.regs.h;
    gb_write(0x2100, gb.regs.a);
}
void CopyIndoorsMacroObjectsToRoom_loop(void) {
    /* Jump-to-middle: entry point is same as CopyIndoorsMacroObjectsToRoom */
    CopyIndoorsMacroObjectsToRoom();
}
void CopyOutdoorsMacroObjectsToRoom_loop(void) {
    /* Jump-to-middle: entry point is same as CopyOutdoorsMacroObjectsToRoom */
    CopyOutdoorsMacroObjectsToRoom();
}
void CopyTilesToPieceOfHeartMeter_restoreBank0C(void) {
    gb.regs.a = 0x0C;
    gb_write(0x2100, gb.regs.a);
}
void CrazyTracySellingHandler_buy(void) {
    /* Jump-to-middle: purchase medicine - deduct rupees, set inventory, open dialog */
    gb.regs.hl = 0xC2B0; /* wEntitiesPrivateState1Table */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.e = gb_read(gb.regs.hl);
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5F89; /* MedicinePriceDecimal (bank 6 ROM) */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xDB92); /* wSubstractRupeeBufferLow */
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xDB92, gb.regs.a);
    gb.regs.a = alu_rl(gb.regs.a); /* save carry in bit 0 */
    gb.regs.hl = 0x5F8D; /* Data_006_5F8D (bank 6 ROM) */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_rr(gb.regs.a); /* restore carry from bit 0 */
    gb.regs.a = gb_read(0xDB91); /* wSubstractRupeeBufferHigh */
    gb.regs.a = alu_adc8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xDB91, gb.regs.a);
    gb.regs.hl = 0xDB0D; /* wHasMedicine */
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = 0x1A;
    CrazyTracySellingHandler_openFinalDialog();
    IncrementEntityState();
    gb_write(gb.regs.hl, 0x04);
    GetEntityTransitionCountdown();
    gb_write(gb.regs.hl, 0x20);
    gb.regs.a = 0x01; /* JINGLE_TREASURE_FOUND */
    gb_write(0xFFF2, gb.regs.a);
}
void CrazyTracySellingHandler_openFinalDialog(void) {
    /* Jump-to-middle: open dialog with bottom box, reset entity state */
    OpenDialogInTable0();
    gb.regs.hl = 0xC19F; /* wDialogState */
    gb_write(gb.regs.hl, gb_read(gb.regs.hl) | 0x80); /* set DIALOG_BOX_BOTTOM_BIT */
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
}
void CrazyTracySellingHandler_return(void) { /* ret - no-op */ }
void DecreaseEntityTransitionCountdown_return(void) { /* ret - no-op */ }
void DialogDrawNextCharacterHandler_choice(void) {
    /* Jump-to-middle: set dialog state to DIALOG_CHOICE (0x0D) + play jingle */
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, 0x0D);
    gb_write(0xC19F, gb.regs.a);
    /* fallthrough to endDialog: play jingle */
    gb.regs.a = 0x15;
    gb_write(0xFFF2, gb.regs.a);
}
void DialogDrawNextCharacterHandler_end(void) {
    /* Jump-to-middle: set dialog state to DIALOG_END (0x0C) */
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, 0x0C);
    gb_write(0xC19F, gb.regs.a);
}
void DialogDrawNextCharacterHandler_nextCharacter(void) {
    /* Jump-to-middle: set dialog state to DIALOG_LETTER_IN_1 (0x06), reset scroll delay */
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0xF0);
    gb.regs.a = alu_or8(gb.regs.a, 6);
    gb_write(0xC19F, gb.regs.a);
    gb.regs.a = 0;
    gb_write(0xC172, gb.regs.a);
}
void DrawSaveSlot1MaxHearts_clamp(void) {
    /* Jump-to-middle: DrawSaveSlot1MaxHearts .clamp label
       At entry: a=slot index, hl=health addr, de=max hearts addr */
    gb_write(0xFFDB, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    alu_cp8(gb.regs.a, 3);
    if (!GET_FLAG_C()) goto _max;
    gb.regs.a = 3;
  _max:;
    alu_cp8(gb.regs.a, 0x0E);
    if (GET_FLAG_C()) goto _prep;
    gb.regs.a = 0x0E;
  _prep:;
    gb_write(gb.regs.de, gb.regs.a);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.a = alu_swap(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_C()) { BuildSaveSlotHeartsDrawCommand(); return; }
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFD9, gb.regs.a);
    BuildSaveSlotHeartsDrawCommand();
}
void DrawSaveSlot1MaxHearts_return(void) { /* ret - no-op */ }
void DropHeartContainer_05_evilEagle(void) {
    /* Jump-to-middle: spawn heart container at fixed Evil Eagle position */
    gb.regs.a = 0x36;
    SpawnNewEntity_trampoline();
    gb.regs.a = 0x48;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = 0x10;
    gb_write(0xFFD8, gb.regs.a);
    /* notEvilEagle: common heart container placement code */
    gb.regs.a = gb_read(0xFFD8);
    gb.regs.hl = 0xC210;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.hl = 0xC200;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xFFF9);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto _jr_75B4;
    gb.regs.hl = 0xC250;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xF0);
    jr_005_75C0(); return;
  _jr_75B4:;
    gb.regs.hl = 0xC320;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x10);
    gb.regs.hl = 0xC310;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 8);
    jr_005_75C0();
}
void EnemyCollidedWithSword_label_003_713B(void) {
    /* Jump-to-middle: copy entity position and render collision sprite */
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    label_D15();
}
void EntityBounceOffWallX_return(void) { /* ret - no-op */ }
void EntityBounceOffWallX_updateSpeed(void) {
    /* Jump-to-middle: negate and divide speed by 8 (3x arithmetic right shift) */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
}
void EntityInitFlyingHopperBombs_setPosZ(void) {
    /* Jump-to-middle: set entity Z position to 0x10, then set sprite variant */
    gb.regs.hl = 0xC310; /* wEntitiesPosZTable */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x10);
    SetEntitySpriteVariant();
}
void EntityInitShopOwner_setDirectionLeft(void) {
    /* Jump-to-middle: set entity facing direction to left */
    gb.regs.a = 0x01; /* DIRECTION_LEFT */
    SetEntityDirection();
}
void EntityShiftPosition_shiftBy8(void) {
    /* Jump-to-middle: add 8 to position low byte with carry to high byte */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_rla();
    gb.regs.l = gb.regs.e;
    gb.regs.h = gb.regs.d;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_rra();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb_write(gb.regs.hl, gb.regs.a);
}
void GhiniEntityHandler_sharedGhiniBehavior(void) {
    /* Jump-to-middle: check ghini state, dispatch visible or hiding logic */
    gb.regs.a = gb_read(0xFFF0);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) { GhiniVisibleHandler(); return; }
    gb.regs.a = 0xFF;
    SetEntitySpriteVariant();
    GetEntityXDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) return;
    GetEntityYDistanceToLink_04();
    gb.regs.a = alu_add8(gb.regs.a, 0x10);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) return;
    gb.regs.a = gb_read(0xC133);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    IncrementEntityState();
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.hl = 0xC300;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0x30);
}
void HardhatBeetleUpdateSpeed_return(void) { /* ret - no-op */ }
void InterruptVBlank_vblankDoneInterruptsEnabled(void) {
    /* Jump-to-middle: VBlank done - restore regs, signal VBlank complete */
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb.regs.c;
    gb_write(0xFF70, gb.regs.a);
    gb.regs.hl = gb_pop16();
    gb.regs.de = gb_pop16();
    gb.regs.bc = gb_pop16();
    gb.regs.a = 1;
    gb_write(0xFFD1, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb.regs.ime = true;
}
void KikiOpenDialog_return(void) { /* ret - no-op */ }
void KnightWalkingHandler_animate(void) {
    /* Jump-to-middle: animate knight walking sprite (inertia counter >> 3 & 1) */
    gb.regs.hl = 0xC3D0; /* wEntitiesInertiaTable */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_rra();
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 0x01);
    SetEntitySpriteVariant();
}
void LCDOn_return(void) { /* just ret */ }
void LeeverEmergingHandler_setSpriteVariant(void) {
    /* Jump-to-middle: map transition countdown to sprite variant via lookup table
       At entry: a = transition countdown value, hl = sprite variant lookup table */
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.a = alu_srl(gb.regs.a);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    SetEntitySpriteVariant();
}
void LoadAnimatedTilesFrame_de(void) {
    /* Jump-to-middle: LoadAnimatedTilesFrame .de - DE already set by caller */
    gb.regs.bc = 0x40;
    CopyData();
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = 32;
    gb_write(0x2100, gb.regs.a);
    gb.regs.b = 1;
    ConfigureAnimatedTilesCopy();
    if (!GET_FLAG_Z()) {
        gb_write(0x2100, gb.regs.a);
        CopyData();
    }
    gb.regs.a = 32;
    gb_write(0x2100, gb.regs.a);
    gb.regs.b = 0;
    ConfigureAnimatedTilesCopy();
    if (!GET_FLAG_Z()) {
        gb_write(0x2100, gb.regs.a);
        gb.regs.de = 0x96C0;
        CopyData();
    }
}
void LoadIndoorTiles_patchInventoryTiles(void) {
    /* Jump-to-middle: patch inventory tiles for toadstool/golden leaf/trading item */
    gb.regs.a = gb_read(0xDBF7);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) ReplaceMagicPowderTilesByToadstool();
    gb.regs.a = gb_read(0xDC4D);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto _jr_2D17;
    gb.regs.a = gb_read(0xFFF7);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) goto _goldenLeafEnd;
    alu_cp8(gb.regs.a, 0x0A);
    if (GET_FLAG_C()) goto _goldenLeafEnd;
  _jr_2D17:;
    gb.regs.a = gb_read(0xDBC1);
    alu_cp8(gb.regs.a, 6);
    if (GET_FLAG_C()) goto _goldenLeafEnd;
    ReplaceSlimeKeyTilesByGoldenLeaf();
  _goldenLeafEnd:;
    gb.regs.a = gb_read(0xDBBA);
    alu_cp8(gb.regs.a, 2);
    if (GET_FLAG_C()) return;
    gb.regs.a = 0x0D;
    gb_write(0xFFA5, gb.regs.a);
}
void LoadInstrumentsBG_start(void) {
    /* Jump-to-middle: loop through instruments, load tilemap for each
       At entry: c = end instrument index, e = start instrument index */
    gb.regs.a = gb.regs.c;
    gb_write(0xFFE0, gb.regs.a); /* hMultiPurpose9 = end index */
    gb.regs.d = 0x00;
  _loop:;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD7, gb.regs.a); /* hMultiPurpose0 = 0 */
    gb_write(0xFFD8, gb.regs.a); /* hMultiPurpose1 = 0 */
    gb_write(0xFFD9, gb.regs.a); /* hMultiPurpose2 = 0 */
    gb_write(0xFFDA, gb.regs.a); /* hMultiPurpose3 = 0 */
    gb.regs.hl = 0xDB65; /* wHasInstrument1 */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_bit(1, gb.regs.a);
    if (!GET_FLAG_Z()) goto _loadInstrumentTilemap;
    /* loadPlaceholderTilemap */
    gb.regs.c = 0x00;
    gb.regs.b = gb.regs.c;
    gb.regs.hl = 0x6BCF; /* Data_001_6BCF (bank 1 ROM) */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0x9D;
    gb_push16(gb.regs.hl);
    gb.regs.a = 0x7C;
    gb_write(0xFFD7, gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.hl = 0x6BD7; /* Data_001_6BD7 (bank 1 ROM) */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.hl = gb_pop16();
    goto _copyToBG;
  _loadInstrumentTilemap:;
    gb.regs.c = 0x00;
    gb.regs.b = gb.regs.c;
    gb.regs.hl = 0x6BCF;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.l = gb.regs.a;
    gb.regs.h = 0x9D;
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0x6BDF; /* Data_001_6BDF (bank 1 ROM) */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.a = alu_add8(gb.regs.a, 0x0F);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xFFDA, gb.regs.a);
    gb.regs.hl = gb_pop16();
  _copyToBG:;
    gb.regs.a = gb_read(0xFFD7);
    gb_write(gb.regs.hl, gb.regs.a);
    GetInstrumentNextBGAddress();
    gb.regs.a = gb_read(0xFFD8);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    GetInstrumentNextBGAddress();
    gb.regs.a = gb_read(0xFFD9);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.c = alu_inc8(gb.regs.c);
    GetInstrumentNextBGAddress();
    gb.regs.a = gb_read(0xFFDA);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.e = alu_inc8(gb.regs.e);
    gb.regs.a = gb.regs.e;
    gb.regs.hl = 0xFFE0; /* hMultiPurpose9 */
    alu_cp8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto _loop;
}
void MadBomberState3Handler_throwBomb(void) {
    /* Jump-to-middle: configure thrown bomb entity (de = bomb entity index) */
    gb.regs.hl = 0xC320; /* wEntitiesSpeedZTable */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x18);
    gb.regs.hl = 0xC2E0; /* wEntitiesTransitionCountdownTable */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x40);
    gb.regs.hl = 0xC440; /* wEntitiesPrivateState4Table */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x01);
    gb_push16(gb.regs.bc);
    gb.regs.c = gb.regs.e;
    gb.regs.b = gb.regs.d;
    gb.regs.a = 0x10;
    ApplyVectorTowardsLink_trampoline();
    gb.regs.bc = gb_pop16();
    gb.regs.a = 0x08; /* JINGLE_FALL_DOWN */
    gb_write(0xFFF2, gb.regs.a);
}
void MakeEffectObjectAppear_return(void) { /* ret - no-op */ }
void PickableCollectIfNeeded_collect(void) {
    /* Jump-to-middle: collect item with sound effects and dispatch */
    gb.regs.hl = 0xC460;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    DidKillEnemy_label_3F78();
    gb.regs.a = gb_read(0xFFEB);
    gb.regs.a = alu_sub8(gb.regs.a, 0x2D);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) goto _heartOrRupeeEnd;
    gb.regs.hl = 0xFFF2;
    gb_write(gb.regs.hl, 0x14);
    goto _sfxEnd;
  _heartOrRupeeEnd:;
    gb.regs.hl = 0xFFF3;
    gb_write(gb.regs.hl, 1);
  _sfxEnd:;
    switch(gb.regs.a) {
        case 0x00: PickDroppableHeart(); return;
        case 0x01: PickDroppableRupee(); return;
        case 0x02: PickDroppableFairy(); return;
        case 0x03: PickDroppableKey(); return;
        case 0x04: PickSword(); return;
        case 0x05: return;
        case 0x06: PickPieceOfPower(); return;
        case 0x07: PickGuardianAcorn(); return;
        case 0x08: PickHeartPiece(); return;
        case 0x09: PickHeartContainer(); return;
        case 0x0A: PickDroppableArrows(); return;
        case 0x0B: PickDroppableBombs(); return;
        case 0x0C: PickSirensInstrument(); return;
        case 0x0D: PickToadstoolOrDungeonKey(); return;
        case 0x0E: PickDroppableMagicPowder(); return;
        case 0x0F: PickToadstoolOrDungeonKey(); return;
        case 0x10: PickSecretSeashell(); return;
    }
}
void PickableHandleGrabbedByItemIfNeeded_return(void) { /* ret - no-op */ }
void PushLinkOutOfEntity_06_forcePush(void) {
    /* Jump-to-middle: force push Link away, reset boots, clear hookshot state */
    CopyLinkFinalPositionToPosition();
    ResetPegasusBoots();
    gb.regs.a = gb_read(0xC1A6); /* wHookshotEntityIndexPlusOne */
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC39F; /* wEntitiesTypeTable - 1 */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x03); /* ENTITY_HOOKSHOT_CHAIN */
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC28F; /* wEntitiesStateTable - 1 */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x00);
}
void RaisableBlockShiftedRightEntityHandler_update(void) {
    /* Jump-to-middle: render block, handle raising/falling, shove Link */
    gb.regs.de = 0x4E9D; /* RaisableBlockSpriteVariants (bank 6 ROM) */
    RenderActiveEntitySpritesPair();
    ReturnIfNonInteractive_06();
    gb.regs.a = gb_read(0xFFBA); /* hMovingBlockMoverState */
    alu_cp8(gb.regs.a, 0x02);
    if (GET_FLAG_Z()) goto _shoveLink;
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto _moverNotGrabbed;
    /* Block is being raised */
    gb.regs.hl = 0xC3D0; /* wEntitiesInertiaTable */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x0A);
    if (!GET_FLAG_Z()) return;
    gb_write(gb.regs.hl, gb.regs.b);
    gb.regs.a = 0x11; /* NOISE_SFX_RUMBLE */
    gb_write(0xFFF4, gb.regs.a);
    gb.regs.hl = 0xC310; /* wEntitiesPosZTable */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x20);
    if (!GET_FLAG_C()) return;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    return;
  _moverNotGrabbed:;
    gb.regs.hl = 0xC310; /* wEntitiesPosZTable */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto _onGround;
    gb.regs.a = gb_read(0xFFE7); /* hFrameCounter */
    gb.regs.a = alu_and8(gb.regs.a, 0x0F);
    if (!GET_FLAG_Z()) goto _shoveLink;
    gb_write(gb.regs.hl, alu_dec8(gb_read(gb.regs.hl)));
  _shoveLink:;
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x04);
    if (!GET_FLAG_C()) return;
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) return;
    gb.regs.a = 0x08;
    gb_write(0xC13E, gb.regs.a); /* wIgnoreLinkCollisionsCountdown */
    gb.regs.a = 0x10;
    GetVectorTowardsLink_trampoline();
    gb.regs.a = gb_read(0xFFD7);
    gb_write(0xFF9B, gb.regs.a); /* hLinkSpeedY */
    gb.regs.a = gb_read(0xFFD8);
    gb_write(0xFF9A, gb.regs.a); /* hLinkSpeedX */
    return;
  _onGround:;
    CheckLinkCollisionWithEnemy_trampoline();
    if (!GET_FLAG_C()) return;
    PushLinkOutOfEntity_06_forcePush();
}
void RenderActiveEntitySpritesPair_paletteFlip1End(void) {
    /* Jump-to-middle: restore entity index, call OAM sprite helpers */
    gb.regs.a = gb_read(0xC123);
    gb.regs.c = gb.regs.a;
    gb.regs.b = 0;
    gb_call_bank(21, func_015_795D);
    label_3C71();
}
void RenderActiveEntitySpritesRect_withDestination(void) {
    /* Jump-to-middle: full sprite rect rendering loop */
    gb.regs.e = gb.regs.l;
    gb.regs.d = gb.regs.h;
    gb.regs.hl = gb_pop16();
    gb.regs.a = gb.regs.c;
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xC123);
    gb.regs.c = gb.regs.a;
    SkipDisabledEntityDuringRoomTransition();
    gb.regs.a = gb_read(0xFFD7);
    gb.regs.c = gb.regs.a;
  _rect_loop:;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl++; gb.regs.de++;
    gb_push16(gb.regs.bc);
    gb.regs.a = gb_read(0xC155);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl++; gb.regs.de++;
    gb.regs.a = gb_read(0xFFF5);
    gb.regs.c = gb.regs.a;
    gb.regs.a = gb_read(gb.regs.hl++);
    gb_push16(gb.regs.af);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.c);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, 0xFF);
    if (!GET_FLAG_Z()) goto _jp_3D28;
    gb.regs.de--;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.de++;
  _jp_3D28:;
    gb.regs.bc = gb_pop16();
    gb.regs.de++;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_xor8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.de, gb.regs.a);
    gb.regs.hl++;
    gb.regs.a = gb_read(0xFFFE);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto _pfEnd;
    gb.regs.a = gb_read(0xFFED);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto _pfEnd;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, 0xF8);
    gb.regs.a = alu_or8(gb.regs.a, 4);
    gb_write(gb.regs.de, gb.regs.a);
  _pfEnd:;
    gb.regs.de++;
    gb.regs.c = alu_dec8(gb.regs.c);
    if (!GET_FLAG_Z()) goto _rect_loop;
    gb.regs.a = gb_read(0xC123);
    gb.regs.c = gb.regs.a;
    gb_call_bank(21, func_015_795D);
    ReloadSavedBank();
}
void RenderLoop_waitForNextFrame(void) {
    /* Jump-to-middle: enter render loop at wait-for-frame, then start main loop */
    gb_call_bank(31, func_01F_7F80);
    gb.regs.a = 0x0C;
    AdjustBankNumberForGBC();
    SwitchBank();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFFD, gb.regs.a);
    gb_halt();
    do {
        gb.regs.a = gb_read(0xFFD1);
        gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    } while (GET_FLAG_Z());
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFD1, gb.regs.a);
    RenderLoop(); /* enters infinite render loop */
}
void ReplaceEvilEagleRiderHiddenTiles_copyData(void) {
    /* Jump-to-middle: copy tile data, clear replace flag, restore bank, draw Link */
    gb.regs.de = 0x8480; /* vTiles0 + $480 */
    gb.regs.bc = 0x0010;
    CopyData();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xFFA5, gb.regs.a); /* hReplaceTiles = 0 */
    gb.regs.a = 0x0C;
    gb_write(0x2100, gb.regs.a);
    DrawLinkSpriteAndReturn();
}
void ReplaceMarinTiles_sitting(void) {
    /* Jump-to-middle: load Marin sitting tiles from bank 0x12 */
    gb.regs.a = 18;
    gb.regs.hl = 0x6080;
    /* .copyTiles */
    gb_write(0x2100, gb.regs.a);
    gb.regs.de = 0x8400;
    gb.regs.bc = 0x40;
    CopyDataAndDrawLinkSprite();
}
void ReplaceMarinTiles_standingUp(void) {
    /* Jump-to-middle: alias for ReplaceMarinTiles (same address) */
    ReplaceMarinTiles();
}
void ReplaceTiles_04_replaceTiles(void) {
    /* Jump-to-middle: adjust bank for GBC, set destination, copy 4 tiles */
    AdjustBankNumberForGBC();
    gb_write(0x2100, gb.regs.a);
    gb.regs.de = 0x9140; /* vTiles2 + $140 */
    Copy4TilesAndDrawLinkSprite();
}
void SetNextMusicTrack_setMusicTrack(void) {
    /* Jump-to-middle: skip fade timer, just set music track + increment state */
    gb.regs.a = gb.regs.c;
    gb_write(0xFFB0, gb.regs.a);
    IncrementRoomTransitionStateAndReturn();
}
void SetSpawnLocation_return(void) { /* ret - no-op */ }
void SmallFishHandler_sharedFishBehavior(void) {
    /* Jump-to-middle: shared fish behavior with state dispatch */
    ReturnIfNonInteractive_04();
    UpdateEntityPosWithSpeed_04();
    gb.regs.a = gb_read(0xFFF0);
    switch(gb.regs.a) {
        case 0x00: func_004_6463(); return;
        case 0x01: func_004_649B(); return;
        case 0x02: func_004_64F2(); return;
        case 0x03: func_004_652D(); return;
        case 0x04: func_004_657A(); return;
        case 0x05: func_004_6689(); return;
    }
}
void TransitionToNextEndingScene_return(void) { /* ret - no-op */ }
void UseItem_return(void) { /* ret - no-op */ }
void func_001_7920_jr_001_7a63(void) {
    /* Jump-to-middle: intro screen animation counter increment */
    gb.regs.hl = 0xD212;
    gb_write(gb.regs.hl, alu_inc8(gb_read(gb.regs.hl)));
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 6);
    if (!GET_FLAG_Z()) goto _jr_7a82;
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.a = gb_read(0xD211);
    gb.regs.a = alu_inc8(gb.regs.a);
    alu_cp8(gb.regs.a, 9);
    if (!GET_FLAG_Z()) goto _jr_7a7f;
    func_001_7BC3();
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(0xD211, gb.regs.a);
    /* Jump to func_001_7920_jr_001_797D would continue the animation,
       but as a stub we just return */
    return;
  _jr_7a7f:;
    gb_write(0xD211, gb.regs.a);
  _jr_7a82:;
    gb.regs.hl = 0x7551;
    gb.regs.a = gb_read(0xD211);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.a = alu_sla(gb.regs.a);
    gb.regs.b = 0;
    gb.regs.c = gb.regs.a;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.de = 0x8C00;
    gb.regs.bc = 8;
    CopyData();
}
void func_004_6BE1_createSwordPokeVfx(void) {
    /* Jump-to-middle: store entity pos to hMultiPurpose0/1, add sword poke VFX */
    gb.regs.a = gb_read(0xFFEE); /* hActiveEntityPosX */
    gb_write(0xFFD7, gb.regs.a); /* hMultiPurpose0 */
    gb.regs.a = gb_read(0xFFEC); /* hActiveEntityVisualPosY */
    gb_write(0xFFD8, gb.regs.a); /* hMultiPurpose1 */
    gb.regs.a = 0x05; /* TRANSCIENT_VFX_SWORD_POKE */
    AddTranscientVfx();
}
void func_007_4C43_openDialog(void) {
    /* Jump-to-middle: copy e to a and open bear dialog */
    gb.regs.a = gb.regs.e;
    BearOpenDialog();
}
void func_2165_return(void) { /* ret - no-op */ }
void label_002_61E7_inventoryFullyClosed2(void) {
    /* Jump-to-middle: check dialog state after inventory close, update HUD */
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F); /* strip DIALOG_BOX_BOTTOM_FLAG */
    if (GET_FLAG_Z()) goto _dialogClosed_inv;
    alu_cp8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) goto _dialogClosed_inv;
    alu_cp8(gb.regs.a, 0x0D);
    if (!GET_FLAG_Z()) return;
  _dialogClosed_inv:;
    UpdateRupeesCount();
    UpdateHealth();
}
void label_140F_return(void) { /* ret - no-op */ }
void soundOpcode96_setD3CDAndParseNext(void) {
    /* Jump-to-middle: write A to 0xD3CD and parse next sound opcode */
    gb_write(0xD3CD, gb.regs.a);
    IncChannelDefinitionPointer();
    ParseSoundOpcode();
}
void soundOpcode97_setDeAndParseNext(void) {
    /* Jump-to-middle: write A to [DE] and parse next sound opcode */
    gb_write(gb.regs.de, gb.regs.a);
    IncChannelDefinitionPointer();
    ParseSoundOpcode();
}
void soundOpcode99_setD39EAndParseNext(void) {
    /* Jump-to-middle: write A to 0xD39E and parse next sound opcode */
    gb_write(0xD39E, gb.regs.a);
    IncChannelDefinitionPointer();
    ParseSoundOpcode();
}
void soundOpcode9D_nextOpcode(void) {
    /* Jump-to-middle: increment channel pointer and parse next opcode */
    IncChannelDefinitionPointer();
    ParseSoundOpcode();
}

/* Additional cross-function stubs found during linking */
void _bounceSpeedAdjust(void) {
    /* Halve and negate entity speed, then set thrown direction to 0xFF */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    /* fallthrough to .func_76E7: set wEntitiesThrownDirectionTable[bc] = 0xFF */
    gb.regs.hl = 0xC5D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
}
void _decrementConsecutiveBytes(void) {
    /* Fill 16 consecutive bytes at hl with value a */
    gb.regs.c = 0x10;
    do {
        gb_write(gb.regs.hl++, gb.regs.a);
        gb.regs.c = alu_dec8(gb.regs.c);
    } while (!GET_FLAG_Z());
}
void _doAudioStep(void) {
    gb_call_bank(27, PlayMusicTrack_1B);
    gb_call_bank(30, PlayMusicTrack_1E);
}
void _executeTilesetLoadHandler(void) {
    /* Replicates .executeTilesetLoadHandler: lookup tileset handler and call it.
       Original: ld e,a; callsb GetTilesetHandlerAddress; jp hl
       The jp hl is a tail call - handler returns to LoadRequestedGfx's caller.
       In C, the handler returns here, then goto clearFlagsAndReturn runs. */
    uint8_t id = gb.regs.a;
    switch(id) {
        case 0x01: LoadRoomTilemap(); return;
        case 0x02: FillBGMapWhite(); return;
        case 0x03: LoadBaseTiles(); return;
        case 0x04: LoadMenuTiles(); return;
        case 0x05: LoadBaseOverworldTiles(); return;
        case 0x06: LoadIndoorTiles(); return;
        case 0x07: LoadBaseOverworldTiles(); return;
        case 0x08: FillBGMapBlack(); return;
        case 0x09: LoadRoomSpecificTiles(); return;
        case 0x0A: return; /* LoadRequestedGfx.return - no-op */
        case 0x0B: LoadWorldMapTiles(); return;
        case 0x0C: return; /* LoadRequestedGfx.return - no-op */
        case 0x0D: LoadSaveMenuTiles(); return;
        case 0x0E: LoadWorldMapBGMap_trampoline(); return;
        case 0x0F: LoadTileset0F_trampoline(); return;
        case 0x10: LoadIntroSequenceTiles(); return;
        case 0x11: LoadTitleScreenTiles(); return;
        case 0x12: LoadChristinePortraitTiles(); return;
        case 0x13: LoadMarinBeachTiles(); return;
        case 0x14: LoadFaceShrineReliefTiles(); return;
        case 0x15: LoadTileset15(); return;
        case 0x16: LoadCreditsLinkOnSeaLargeTiles(); return;
        case 0x17: LoadCreditsSunAboveTiles(); return;
        case 0x18: LoadCreditsLinkOnSeaCloseTiles(); return;
        case 0x19: LoadCreditsLinkSeatedOnLogTiles(); return;
        case 0x1A: LoadCreditsLinkFaceCloseUpTiles(); return;
        case 0x1B: LoadCreditsRollTiles(); return;
        case 0x1C: LoadCreditsLinkFaceCloseUpTiles(); return;
        case 0x1D: LoadCreditsKoholintViewsTiles(); return;
        case 0x1E: LoadCreditsKoholintDisappearingTiles(); return;
        case 0x1F: LoadCreditsStairsTiles(); return;
        case 0x20: LoadSchulePaintingTiles(); return;
        case 0x21: LoadEaglesTowerTopTiles(); return;
        case 0x22: LoadCreditsMarinPortraitTiles_trampoline(); return;
        case 0x23: LoadThanksForPlayingTiles_trampoline(); return;
        default: return; /* Unknown tileset ID */
    }
}
void _func_76E7(void) {
    /* Set wEntitiesThrownDirectionTable[bc] = 0xFF */
    gb.regs.hl = 0xC5D0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
}
void _label_1508(void) {
    /* Roc's Feather jump: set Z velocity, boost with Pegasus Boots if running */
    gb.regs.a = 0x20;
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = gb_read(0xC14A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xFF9E);
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x1108;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9A, gb.regs.a);
    gb.regs.hl = 0x110C;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb_write(0xFF9B, gb.regs.a);
}
void _playerArrowBounceY(void) {
    /* Jump-to-middle: set hl=C250 (speed Y table), bounce logic */
    gb.regs.hl = 0xC250;
    /* Fall through to bounce: negate and halve speed */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
}
void _shiftBy8(void) {
    /* Same as EntityShiftPosition_shiftBy8: add 8 to pos low byte with carry */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_add8(gb.regs.a, 8);
    gb_write(gb.regs.hl, gb.regs.a);
    alu_rla();
    gb.regs.l = gb.regs.e;
    gb.regs.h = gb.regs.d;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    alu_rra();
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_adc8(gb.regs.a, 0);
    gb_write(gb.regs.hl, gb.regs.a);
}
void _updateRoomStatusAndDrawRockyGround(void) {
    /* Update room status for bombed rocky ground and create draw command */
    gb.regs.de = 0x62FE;
    gb_push16(gb.regs.de);
    gb.regs.hl = 0xD8B5;
    gb.regs.a = gb_read(0xFFF6);
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_or8(gb.regs.a, 4);
    gb_write(gb.regs.hl, gb.regs.a);
    gb_write(0xFFF8, gb.regs.a);
    label_003_51F5();
}
void _updateSpeed(void) { }
void AnimateTiles_jumpTable(void) {
    /* Replicates code at AnimateTiles label .jumpTable */
    gb.regs.a = gb_read(0xFFA4);
    switch(gb.regs.a) {
        case 0x00: SkipTilesGroupAnimation(); return;
        case 0x01: AnimateCounterTilesGroup(); return;
        case 0x02: AnimateTideTilesGroup(); return;
        case 0x03: AnimateVillageTilesGroup(); return;
        case 0x04: AnimateDungeon1TilesGroup(); return;
        case 0x05: AnimateUndergroundTilesGroup(); return;
        case 0x06: AnimateLavaTilesGroup(); return;
        case 0x07: AnimateDungeon2TilesGroup(); return;
        case 0x08: AnimateWarpTilesGroup(); return;
        case 0x09: AnimateWaterCurrentsTilesGroup(); return;
        case 0x0A: AnimateWaterfallTilesGroup(); return;
        case 0x0B: AnimateSlowWaterfallTilesGroup(); return;
        case 0x0C: AnimateWaterDungeonTilesGroup(); return;
        case 0x0D: AnimateLightBeamTilesGroup(); return;
        case 0x0E: AnimateCrystalBlockTilesGroup(); return;
        case 0x0F: AnimateBubblesTilesGroup(); return;
        case 0x10: AnimateWeatherVaneTilesGroup(); return;
        case 0x11: AnimatePhotoTilesGroup(); return;
    }
}
void ApplyLinkGroundMotion_noChecks(void) {
    /* Jump-to-middle: ground motion physics, joypad input, reset pegasus boots */
    func_21E1();
    gb.regs.a = gb_read(0xFFA3);
    gb.regs.a = alu_sub8(gb.regs.a, 2);
    gb_write(0xFFA3, gb.regs.a);
    gb.regs.a = -1;
    gb_write(0xC120, gb.regs.a);
    gb.regs.a = gb_read(0xC10A);
    gb.regs.hl = 0xC14A;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto _joypadVerticalEnd;
    gb.regs.a = gb_read(0xD475);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) goto _jr_451E;
    gb.regs.a = gb_read(0xC1AD);
    alu_cp8(gb.regs.a, 0x80);
    if (!GET_FLAG_Z()) goto _jr_4523;
  _jr_451E:;
    ClearLinkPositionIncrement();
    goto _joypadVerticalEnd;
  _jr_4523:;
    gb.regs.a = gb_read(0xFFCB);
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto _joypadHorizontalEnd;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x68B1;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF9A);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto _joypadHorizontalEnd;
    gb.regs.e = 1;
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto _jr_453D;
    gb.regs.e = 0xFF;
  _jr_453D:;
    gb.regs.a = gb_read(0xFF9A);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xFF9A, gb.regs.a);
  _joypadHorizontalEnd:;
    gb.regs.a = gb_read(0xFFCB);
    alu_rra();
    alu_rra();
    gb.regs.a = alu_and8(gb.regs.a, 3);
    if (GET_FLAG_Z()) goto _joypadVerticalEnd;
    gb.regs.e = gb.regs.a;
    gb.regs.d = 0;
    gb.regs.hl = 0x44E7;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    if (GET_FLAG_Z()) goto _joypadVerticalEnd;
    gb.regs.e = 1;
    alu_bit(7, gb.regs.a);
    if (!GET_FLAG_Z()) goto _jr_455E;
    gb.regs.e = -1;
  _jr_455E:;
    gb.regs.a = gb_read(0xFF9B);
    gb.regs.a = alu_add8(gb.regs.a, gb.regs.e);
    gb_write(0xFF9B, gb.regs.a);
  _joypadVerticalEnd:;
    gb.regs.a = gb_read(0xFFA2);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto _jr_456C;
    gb.regs.a = alu_and8(gb.regs.a, 0x80);
    if (GET_FLAG_Z()) return;
  _jr_456C:;
    ResetPegasusBoots();
    gb_write(0xFFA2, gb.regs.a);
    gb_write(0xC149, gb.regs.a);
    gb_write(0xFFA3, gb.regs.a);
    gb_write(0xC146, gb.regs.a);
    gb_write(0xC152, gb.regs.a);
    gb_write(0xC153, gb.regs.a);
    gb_write(0xC10A, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) return;
    ApplyLinkGroundPhysics();
    gb.regs.a = gb_read(0xFFB8);
    alu_cp8(gb.regs.a, 0x61);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC181);
    alu_cp8(gb.regs.a, 5);
    if (GET_FLAG_Z()) { shallowWaterVfx(); return; }
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0x0B);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0x50);
    if (GET_FLAG_Z()) return;
    alu_cp8(gb.regs.a, 0x51);
    if (GET_FLAG_Z()) return;
    gb.regs.a = 7;
    gb_write(0xFFF4, gb.regs.a);
}
void ApplyLinkMotionState_skipInitialCall(void) {
    /* Jump-to-middle: motion state handler, sword charge sparkle, magic rod */
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) return;
    gb.regs.a = gb_read(0xC16A);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) goto _label_17DB;
    gb.regs.bc = 0xC010;
    gb.regs.a = gb_read(0xC145);
    gb.regs.hl = 0xC13B;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFF98);
    gb_write(0xFFD8, gb.regs.a);
    gb.regs.hl = 0xFFDA;
    gb_write(gb.regs.hl, 0);
    gb.regs.a = gb_read(0xC122);
    alu_cp8(gb.regs.a, 0x28);
    if (GET_FLAG_C()) goto _label_17C6;
    gb.regs.a = gb_read(0xFFE7);
    alu_rla();
    alu_rla();
    gb.regs.a = alu_and8(gb.regs.a, 0x10);
    gb_write(gb.regs.hl, gb.regs.a);
  _label_17C6:;
    gb.regs.a = gb_read(0xC139);
    gb.regs.h = gb.regs.a;
    gb.regs.a = gb_read(0xC13A);
    gb.regs.l = gb.regs.a;
    gb.regs.a = gb_read(0xC136);
    gb_write(0xFFD9, gb.regs.a);
    gb.regs.a = gb_read(0xFF99);
    alu_cp8(gb.regs.a, 0x88);
    if (!GET_FLAG_C()) return;
    func_1819(); return;
  _label_17DB:;
    gb.regs.a = gb_read(0xC19B);
    gb_push16(gb.regs.af);
    alu_bit(7, gb.regs.a);
    if (GET_FLAG_Z()) goto _magicRodEnd;
    gb_call_bank(2, label_002_5310);
    gb.regs.a = gb_read(0xC19B);
    gb.regs.a = alu_and8(gb.regs.a, 0x7F);
    alu_cp8(gb.regs.a, 0x0C);
    if (!GET_FLAG_Z()) goto _magicRodEnd;
    gb.regs.hl = 0xC19F;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto _magicRodEnd;
    func_157C();
    gb.regs.a = 4;
    SpawnPlayerProjectile();
    if (GET_FLAG_C()) goto _magicRodEnd;
    gb.regs.a = 0x0D;
    gb_write(0xFFF4, gb.regs.a);
    gb_call_bank(2, label_002_538B);
  _magicRodEnd:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    gb_write(0xC19B, gb.regs.a);
}
void BombEntityHandler_BounceOffWalls(void) {
    /* Jump-to-middle: check collision table, bounce off walls X and Y */
    gb.regs.hl = 0xC2A0; /* wEntitiesCollisionsTable */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x03);
    if (!GET_FLAG_Z()) EntityBounceOffWallX();
    gb.regs.a = gb_read(0xFFF9); /* hIsSideScrolling */
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (!GET_FLAG_Z()) return;
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.a = alu_and8(gb.regs.a, 0x0C);
    if (GET_FLAG_Z()) return;
    EntityBounceOffWallY();
}
void CheckLinkCollisionWithEnemy_collisionEvenInTheAir(void) {
    /* Jump-to-middle: hitbox collision check between Link and entity */
    gb.regs.a = gb_read(0xC11C);
    alu_cp8(gb.regs.a, 2);
    if (!GET_FLAG_C()) { CheckLinkCollisionWithProjectile_return(); return; }
    gb_push16(gb.regs.bc);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.c = alu_sla(gb.regs.c);
    gb.regs.hl = 0xD580;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.bc = gb_pop16();
    gb.regs.a = gb_read(0xFFEE);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xFF98;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto _jr_6C98;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  _jr_6C98:;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.af);
    gb.regs.hl++;
    gb.regs.a = 4;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_C()) { jr_003_6CCB(); return; }
    gb.regs.hl++;
    gb.regs.a = gb_read(0xFFEC);
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb_push16(gb.regs.hl);
    gb.regs.hl = 0xFF99;
    gb.regs.a = alu_sub8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.a = alu_sub8(gb.regs.a, 8);
    alu_cp8(gb.regs.a, 0x80);
    if (GET_FLAG_C()) goto _jr_6CB5;
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
  _jr_6CB5:;
    gb.regs.hl = gb_pop16();
    gb_push16(gb.regs.af);
    gb.regs.hl++;
    gb.regs.a = 4;
    gb.regs.a = alu_add8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.e = gb.regs.a;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    alu_cp8(gb.regs.a, gb.regs.e);
    if (!GET_FLAG_C()) { jr_003_6CCB(); return; }
    /* fallthrough: collision detected */
    func_003_6CC0();
}
void CheckLinkCollisionWithProjectile_showSwordPokeVfx(void) {
    /* Jump-to-middle: display sword poke VFX at entity position */
    gb_write(0xFFD8, gb.regs.a); /* hMultiPurpose1 = Y pos */
    gb.regs.a = gb_read(0xFFEE); /* hActiveEntityPosX */
    gb_write(0xFFD7, gb.regs.a); /* hMultiPurpose0 = X pos */
    gb.regs.a = 0x05; /* TRANSCIENT_VFX_SWORD_POKE */
    AddTranscientVfx();
}
void DialogDrawNextCharacterHandler_endDialog(void) {
    /* Jump-to-middle: play dialog break jingle */
    gb.regs.a = 0x15; /* JINGLE_DIALOG_BREAK */
    gb_write(0xFFF2, gb.regs.a); /* hJingle */
}
void DidKillEnemy_label_3F5E(void) {
    /* Jump-to-middle: track kill in load order table, increment kill count */
    gb.regs.hl = 0xC460; /* wEntitiesLoadOrderTable */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0xFF);
    if (GET_FLAG_Z()) { UnloadEntity(); return; }
    gb_push16(gb.regs.af);
    gb.regs.a = gb_read(0xDBB5); /* wKillCount */
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(0xDBB5, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.hl); /* hl still = C460+bc */
    gb.regs.hl = 0xDBB6; /* wKillOrder */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
    /* fall through to label_3F78 */
    DidKillEnemy_label_3F78();
}
void DidKillEnemy_label_3F78(void) {
    /* Jump-to-middle: mark entity cleared in room, then unload */
    alu_cp8(gb.regs.a, 0x08);
    if (!GET_FLAG_C()) { UnloadEntity(); return; }
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x3F48; /* data_3F48 bitmask table */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFF6); /* hMapRoom */
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.a = gb_read(gb.regs.hl); /* bitmask for entity slot */
    gb.regs.hl = 0xCF00; /* wEntitiesClearedRooms */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb_write(gb.regs.hl, gb.regs.a);
    UnloadEntity();
}
void ExecuteDrawCommands_noRoomTransition(void) {
    /* Replicates code at ExecuteDrawCommands label .noRoomTransition
       Original assembly loops: read header, if non-zero call DrawCommandToVRAM, repeat */
  ExecuteDrawCommands_noRoomTransition_loop:;
    gb.regs.a = gb_read(gb.regs.de);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    NoRoomTransitionDrawLoop();
    goto ExecuteDrawCommands_noRoomTransition_loop;
}
void func_017_7EA4(void) { }
void func_017_7F57(void) { }
void func_91D_jp_92E(void) {
    /* Jump-to-middle: func_91D .jp_92E - push af then shared BG attribute code */
    gb_push16(gb.regs.af);
    /* .jp_92F: shared code */
    gb_call_bank(26, GetBGAttributesAddressForObject);
    gb.regs.a = gb_read(0xFFDF);
    gb_write(0x2100, gb.regs.a);
    gb.regs.hl = 0xDD39;
    gb.regs.a = gb_read(0xDD38);
    gb.regs.e = gb.regs.a;
    gb.regs.a = alu_add8(gb.regs.a, 0x0A);
    gb_write(0xDD38, gb.regs.a);
    gb.regs.d = 0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(0xFFE0);
    gb.regs.d = gb.regs.a;
    gb.regs.a = gb_read(0xFFE1);
    gb.regs.e = gb.regs.a;
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de--;
    gb.regs.a = gb_read(0xFFCF);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(0xFFD0);
    gb.regs.a = alu_inc8(gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = 0x81;
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.de++;
    gb.regs.de++;
    gb.regs.a = gb_read(gb.regs.de);
    gb_write(gb.regs.hl++, gb.regs.a);
    gb.regs.a = alu_xor8(gb.regs.a, gb.regs.a);
    gb_write(gb.regs.hl++, gb.regs.a);
    RestoreStackedBankAndReturn();
}
void GhiniVisibleHandler_move(void) { }
void HoleFillerIdleState_setSpeedByDirection(void) {
    /* Jump-to-middle: set entity X/Y speed from direction lookup tables
       At entry: d=0, e=direction, bc=entity index */
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x5127; /* HoleFillerDirectionToXSpeedTable (bank 7) */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240; /* wEntitiesSpeedXTable */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x512B; /* HoleFillerDirectionToYSpeedTable (bank 7) */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
}
void LoadEntityFromDefinition_didLoadEntity(void) {
    /* Jump-to-middle: configure new entity and prepare for room transition */
    gb_call_bank(3, ConfigureNewEntity_helper);
    gb_call_bank(1, PrepareEntityPositionForRoomTransition);
    gb.regs.a = 0x16; /* BANK(OverworldEntitiesPointersTable) */
    gb_write(0x2100, gb.regs.a);
}
void LoadInstrumentsBG_leftSide(void) { }
void LoadInstrumentsBG_rightSide(void) { }
void MiniMoldormEntityHandler_sharedMoldormBehavior(void) { }
void MoveSelect_playMoveSelectionJingle(void) {
    /* Jump-to-middle: play menu selection move jingle, preserve af */
    gb_push16(gb.regs.af);
    gb.regs.a = 0x0A; /* JINGLE_MOVE_SELECTION */
    gb_write(0xFFF2, gb.regs.a); /* hJingle */
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
}
void PushLinkOutOfEntity_18_forcePush(void) {
    /* Jump-to-middle: force push Link away, reset boots, clear hookshot state */
    CopyLinkFinalPositionToPosition();
    ResetPegasusBoots();
    gb.regs.a = gb_read(0xC1A6); /* wHookshotEntityIndexPlusOne */
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
    gb.regs.e = gb.regs.a;
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0xC39F; /* wEntitiesTypeTable - 1 */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cp8(gb.regs.a, 0x03); /* ENTITY_HOOKSHOT_CHAIN */
    if (!GET_FLAG_Z()) return;
    gb.regs.hl = 0xC28F; /* wEntitiesStateTable - 1 */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb_write(gb.regs.hl, 0x00);
}
void RenderLightning_playSfx(void) {
    /* Jump-to-middle: set lightning visible countdown + play explosion SFX */
    gb.regs.a = 0x1C;
    gb_write(0xD000, gb.regs.a); /* wIntroLightningVisibleCountdown */
    PlayBombExplosionSfx();
}
void ReturnIfNonInteractive_03_allowInactiveEntity(void) {
    /* Jump-to-middle: check if game is interactive (Variant A: with credits) */
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto _skip03;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto _creditsEnd03;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto _skip03;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto _skip03;
  _creditsEnd03:;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.hl = 0xC1A8;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto _skip03;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
  _skip03:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
}
void ReturnIfNonInteractive_04_allowInactiveEntity(void) {
    /* Jump-to-middle: check if game is interactive (Variant B: no credits) */
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto _skip04;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto _skip04;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto _skip04;
    gb.regs.hl = 0xC1A8;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto _skip04;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
  _skip04:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
}
void ReturnIfNonInteractive_05_allowInactiveEntity(void) {
    /* Jump-to-middle: check if game is interactive (Variant B: no credits) */
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto _skip05;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto _skip05;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto _skip05;
    gb.regs.hl = 0xC1A8;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto _skip05;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
  _skip05:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
}
void ReturnIfNonInteractive_06_allowInactiveEntity(void) {
    /* Jump-to-middle: check if game is interactive (Variant A: with credits) */
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto _skip06;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto _creditsEnd06;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto _skip06;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto _skip06;
  _creditsEnd06:;
    gb.regs.hl = 0xC1A8;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto _skip06;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
  _skip06:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
}
void ReturnIfNonInteractive_07_allowInactiveEntity(void) {
    /* Jump-to-middle: check if game is interactive (Variant B: no credits) */
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto _skip07;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto _skip07;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto _skip07;
    gb.regs.hl = 0xC1A8;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto _skip07;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
  _skip07:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
}
void ReturnIfNonInteractive_15_allowInactiveEntity(void) {
    /* Jump-to-middle: check if game is interactive (Variant A: with credits) */
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto _skip15;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto _creditsEnd15;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto _skip15;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto _skip15;
  _creditsEnd15:;
    gb.regs.hl = 0xC1A8;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto _skip15;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
  _skip15:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
}
void ReturnIfNonInteractive_18_allowInactiveEntity(void) {
    /* Jump-to-middle: check if game is interactive (Variant B: no credits) */
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto _skip18;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto _skip18;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto _skip18;
    gb.regs.hl = 0xC1A8;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto _skip18;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
  _skip18:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
}
void ReturnIfNonInteractive_19_allowInactiveEntity(void) {
    /* Jump-to-middle: check if game is interactive (Variant A: with credits) */
    gb.regs.a = gb_read(0xDC3D);
    alu_cp8(gb.regs.a, 7);
    if (GET_FLAG_Z()) goto _skip19;
    alu_cp8(gb.regs.a, 1);
    if (GET_FLAG_Z()) goto _creditsEnd19;
    alu_cp8(gb.regs.a, 0x0B);
    if (!GET_FLAG_Z()) goto _skip19;
    gb.regs.a = gb_read(0xC16B);
    alu_cp8(gb.regs.a, 4);
    if (!GET_FLAG_Z()) goto _skip19;
  _creditsEnd19:;
    gb.regs.hl = 0xC1A8;
    gb.regs.a = gb_read(0xC19F);
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    gb.regs.hl = 0xC14F;
    gb.regs.a = alu_or8(gb.regs.a, gb_read(gb.regs.hl));
    if (!GET_FLAG_Z()) goto _skip19;
    gb.regs.a = gb_read(0xC124);
    gb.regs.a = alu_and8(gb.regs.a, gb.regs.a);
    if (GET_FLAG_Z()) return;
  _skip19:;
    gb.regs.af = gb_pop16(); gb.regs.f &= 0xF0;
}
void SnakeState0Handler_updateSpeed(void) {
    /* Jump-to-middle: set entity X/Y speed from snake direction tables
       At entry: d=0(?), e=direction, bc=entity index */
    gb.regs.d = gb.regs.b;
    gb.regs.hl = 0x688B; /* SnakeXSpeeds table (bank 7) */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    gb.regs.hl = 0xC240; /* wEntitiesSpeedXTable */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, gb.regs.a);
    gb.regs.hl = 0x688F; /* SnakeYSpeeds table (bank 7) */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.de);
    gb.regs.a = gb_read(gb.regs.hl);
    GetEntitySpeedYAddress();
    gb_write(gb.regs.hl, gb.regs.a);
}
void UpdateFinalLinkPosition_horizontal(void) {
    /* Jump-to-middle: horizontal-only position update (Evil Eagle) */
    gb.regs.c = 0;
    gb_write(0xFFD7, gb.regs.a);
    ComputeLinkPosition();
}
void WreckingBallState2Handler_collided(void) {
    /* Jump-to-middle: play sword poke jingle, negate+halve both speed axes */
    gb.regs.a = 0x07; /* JINGLE_SWORD_POKING */
    gb_write(0xFFF2, gb.regs.a); /* hJingle */
    gb.regs.hl = 0xC240; /* wEntitiesSpeedXTable */
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
    GetEntitySpeedYAddress();
    gb.regs.a = gb_read(gb.regs.hl);
    alu_cpl();
    gb.regs.a = alu_inc8(gb.regs.a);
    gb.regs.a = alu_sra(gb.regs.a);
    gb_write(gb.regs.hl, gb.regs.a);
}
void Data_005_6601___1(void) { }
