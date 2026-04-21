#pragma once
#include <cstdint>
#include <Windows.h>
#include <iostream>
#include <d3d12.h>

EXTERN_C const IID IID_ID3D12Device = { 0x189819f1, 0x1db6, 0x4b57, {0xbe, 0x54, 0x18, 0x21, 0x33, 0x9b, 0x85, 0xf7} };

uint64_t D3D12XboxSetProcessDebugFlags(uint32_t flags);
uint32_t D3D12XboxGetProcessDebugFlags();
uint64_t D3D12GetDebugInterface(int64_t* guid, uint64_t* outInterface);
void D3D12XboxCreateDevice(uint64_t adapter, uint64_t* createInfo, uint64_t unknownParam, uint64_t* outDevicePtr);
void D3D12CreateDevice(uint64_t adapter, uint64_t unused, uint64_t flags, uint64_t* outDevice);
void D3D12XboxUnloadDriverModule();
uint64_t D3D12SerializeRootSignature();
uint64_t D3D12SerializeVersionedRootSignature();
uint64_t D3D12CreateRootSignatureDeserializer();
uint64_t D3D12CreateVersionedRootSignatureDeserializer();
uint64_t D3D10CreateBlob(uint64_t size, uint64_t flavor, uint64_t signature, uint64_t outBlob);
uint64_t D3DMapEsramMemory(int type, uint64_t addr, uint32_t size, uint64_t flags);
uint64_t DXGIXPresentArray();
uint64_t DXGIXGetFrameStatistics();
uint64_t DXGIXSetVLineNotification();
uint64_t DXGIXSetFrameNotification();
void D3DConfigureVirtualMemory(uint32_t* config);
uint64_t D3DAllocateGraphicsMemory();
uint64_t D3DFreeGraphicsMemory();
uint32_t D3DUploadCustomMicrocode(int type, int64_t srcA, int64_t srcB, int64_t srcC, int64_t srcD, int64_t srcE, int64_t srcF);
void D3DFlushEntireCpuCache();
uint64_t InternalDriverCallX();
uint64_t PixGetPixieEntryPoints(uint32_t* buffer);