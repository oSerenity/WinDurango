/*
================================================================================
DISCLAIMER AND LICENSE REQUIREMENT
(Same license terms as Logger.h — WinDurango common logger.)
================================================================================
*/

#pragma once

namespace LoggerCrash {

// Registers an unhandled-exception filter and std::terminate handler.
// Safe to call more than once. Uses a process-wide named mapping so the last
// checkpoint is visible even if a different DLL handles the crash filter.
void Install();

// Records last-known-good state (thread id + text). Uses shared memory so any
// loaded WinDurango DLL sees the same checkpoint.
void Checkpoint(const char* text);

// Optional short label (e.g. "winrt_x") stored next to checkpoints for logs.
void SetModuleHint(const char* dllName);

} // namespace LoggerCrash
