@echo off
rem Quick start: checks prerequisites, asks for your ROM, builds the game and
rem leaves "Link's Awakening DX (recomp).cmd" to play. Safe to rerun.
powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0tools\setup.ps1" %*
if not defined RECOMP_LAUNCHER pause
