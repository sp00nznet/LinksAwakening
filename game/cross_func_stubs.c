/* Auto-generated stub functions for cross-function local label references */
#include "gb_runtime.h"
#include "gb_cpu.h"
#include "rom_data.h"
#include "game_labels.h"

void AddEntitySpeedToPos_03_return(void) { /* cross-function local label stub */ }
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
void AddEntitySpeedToPos_04_return(void) { /* cross-function local label stub */ }
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
void AddEntitySpeedToPos_05_return(void) { /* cross-function local label stub */ }
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
void AddEntitySpeedToPos_06_return(void) { /* cross-function local label stub */ }
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
void AddEntitySpeedToPos_07_return(void) { /* cross-function local label stub */ }
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
void AddEntitySpeedToPos_15_return(void) { /* cross-function local label stub */ }
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
void AddEntitySpeedToPos_17_return(void) { /* cross-function local label stub */ }
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
void AddEntitySpeedToPos_18_return(void) { /* cross-function local label stub */ }
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
void AddEntitySpeedToPos_19_return(void) { /* cross-function local label stub */ }
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
void ApplyLinkGroundPhysics_part2_makeLinkFallInPit(void) { /* cross-function local label stub */ }
void ArrowRenderAndMove_skipLoadingSprites(void) { /* cross-function local label stub */ }
void ArrowRenderAndMove_skipRendering(void) { /* cross-function local label stub */ }
void BombExplosionVisuals_smallExplosion(void) { /* cross-function local label stub */ }
void CheckLinkCollisionWithProjectile_jr_003_6C54(void) {
    /* Jump-to-middle: set entity vulnerability flags to 0xFF */
    gb.regs.hl = 0xC2A0;
    gb.regs.hl = alu_add16(gb.regs.hl, gb.regs.bc);
    gb_write(gb.regs.hl, 0xFF);
}
void CheckLinkCollisionWithProjectile_return(void) { /* cross-function local label stub */ }
void CheckLinkInteractionWithEntity_06_label_006_647E(void) { /* cross-function local label stub */ }
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
void CopyIndoorsMacroObjectsToRoom_loop(void) { /* cross-function local label stub */ }
void CopyOutdoorsMacroObjectsToRoom_loop(void) { /* cross-function local label stub */ }
void CopyTilesToPieceOfHeartMeter_restoreBank0C(void) { /* cross-function local label stub */ }
void CrazyTracySellingHandler_buy(void) { /* cross-function local label stub */ }
void CrazyTracySellingHandler_openFinalDialog(void) { /* cross-function local label stub */ }
void CrazyTracySellingHandler_return(void) { /* cross-function local label stub */ }
void DecreaseEntityTransitionCountdown_return(void) { /* cross-function local label stub */ }
void DialogDrawNextCharacterHandler_choice(void) { /* cross-function local label stub */ }
void DialogDrawNextCharacterHandler_end(void) { /* cross-function local label stub */ }
void DialogDrawNextCharacterHandler_nextCharacter(void) { /* cross-function local label stub */ }
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
void DrawSaveSlot1MaxHearts_return(void) { /* cross-function local label stub */ }
void DropHeartContainer_05_evilEagle(void) { /* cross-function local label stub */ }
void EnemyCollidedWithSword_label_003_713B(void) {
    /* Jump-to-middle: copy entity position and render collision sprite */
    gb.regs.a = gb_read(0xFFEE);
    gb_write(0xFFD7, gb.regs.a);
    gb.regs.a = gb_read(0xFFEC);
    gb_write(0xFFD8, gb.regs.a);
    label_D15();
}
void EntityBounceOffWallX_return(void) { /* cross-function local label stub */ }
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
void EntityInitFlyingHopperBombs_setPosZ(void) { /* cross-function local label stub */ }
void EntityInitShopOwner_setDirectionLeft(void) { /* cross-function local label stub */ }
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
void GhiniEntityHandler_sharedGhiniBehavior(void) { /* cross-function local label stub */ }
void HardhatBeetleUpdateSpeed_return(void) { /* cross-function local label stub */ }
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
void KikiOpenDialog_return(void) { /* cross-function local label stub */ }
void KnightWalkingHandler_animate(void) { /* cross-function local label stub */ }
void LCDOn_return(void) { /* just ret */ }
void LeeverEmergingHandler_setSpriteVariant(void) { /* cross-function local label stub */ }
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
void LoadIndoorTiles_patchInventoryTiles(void) { /* cross-function local label stub */ }
void LoadInstrumentsBG_start(void) { /* cross-function local label stub */ }
void MadBomberState3Handler_throwBomb(void) { /* cross-function local label stub */ }
void MakeEffectObjectAppear_return(void) { /* cross-function local label stub */ }
void PickableCollectIfNeeded_collect(void) { /* cross-function local label stub */ }
void PickableHandleGrabbedByItemIfNeeded_return(void) { /* cross-function local label stub */ }
void PushLinkOutOfEntity_06_forcePush(void) { /* cross-function local label stub */ }
void RaisableBlockShiftedRightEntityHandler_update(void) { /* cross-function local label stub */ }
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
void RenderLoop_waitForNextFrame(void) { /* cross-function local label stub */ }
void ReplaceEvilEagleRiderHiddenTiles_copyData(void) { /* cross-function local label stub */ }
void ReplaceMarinTiles_sitting(void) { /* cross-function local label stub */ }
void ReplaceMarinTiles_standingUp(void) { /* cross-function local label stub */ }
void ReplaceTiles_04_replaceTiles(void) { /* cross-function local label stub */ }
void SetNextMusicTrack_setMusicTrack(void) {
    /* Jump-to-middle: skip fade timer, just set music track + increment state */
    gb.regs.a = gb.regs.c;
    gb_write(0xFFB0, gb.regs.a);
    IncrementRoomTransitionStateAndReturn();
}
void SetSpawnLocation_return(void) { /* cross-function local label stub */ }
void SmallFishHandler_sharedFishBehavior(void) { /* cross-function local label stub */ }
void TransitionToNextEndingScene_return(void) { /* cross-function local label stub */ }
void UseItem_return(void) { /* cross-function local label stub */ }
void func_001_7920_jr_001_7a63(void) { /* cross-function local label stub */ }
void func_004_6BE1_createSwordPokeVfx(void) { /* cross-function local label stub */ }
void func_007_4C43_openDialog(void) { /* cross-function local label stub */ }
void func_2165_return(void) { /* cross-function local label stub */ }
void label_002_61E7_inventoryFullyClosed2(void) { /* cross-function local label stub */ }
void label_140F_return(void) { /* cross-function local label stub */ }
void soundOpcode96_setD3CDAndParseNext(void) { /* cross-function local label stub */ }
void soundOpcode97_setDeAndParseNext(void) { /* cross-function local label stub */ }
void soundOpcode99_setD39EAndParseNext(void) { /* cross-function local label stub */ }
void soundOpcode9D_nextOpcode(void) { /* cross-function local label stub */ }

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
void ApplyLinkGroundMotion_noChecks(void) { }
void ApplyLinkMotionState_skipInitialCall(void) { }
void BombEntityHandler_BounceOffWalls(void) { }
void CheckLinkCollisionWithEnemy_collisionEvenInTheAir(void) { }
void CheckLinkCollisionWithProjectile_showSwordPokeVfx(void) { }
void DialogDrawNextCharacterHandler_endDialog(void) { }
void DidKillEnemy_label_3F5E(void) { }
void DidKillEnemy_label_3F78(void) { }
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
void HoleFillerIdleState_setSpeedByDirection(void) { }
void LoadEntityFromDefinition_didLoadEntity(void) { }
void LoadInstrumentsBG_leftSide(void) { }
void LoadInstrumentsBG_rightSide(void) { }
void MiniMoldormEntityHandler_sharedMoldormBehavior(void) { }
void MoveSelect_playMoveSelectionJingle(void) { }
void PushLinkOutOfEntity_18_forcePush(void) { }
void RenderLightning_playSfx(void) { }
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
void SnakeState0Handler_updateSpeed(void) { }
void UpdateFinalLinkPosition_horizontal(void) {
    /* Jump-to-middle: horizontal-only position update (Evil Eagle) */
    gb.regs.c = 0;
    gb_write(0xFFD7, gb.regs.a);
    ComputeLinkPosition();
}
void WreckingBallState2Handler_collided(void) { }
void Data_005_6601___1(void) { }
