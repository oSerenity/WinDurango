#include "d3d12_x.h"

uint64_t D3D12XboxSetProcessDebugFlags(uint32_t flags) {
    std::cout << "Unimplemented - D3D12XboxSetProcessDebugFlags!\n";
    return 0;
}

uint32_t D3D12XboxGetProcessDebugFlags() {
    std::cout << "Unimplemented - D3D12XboxGetProcessDebugFlags!\n";
    return 0;
}

uint64_t D3D12GetDebugInterface(int64_t* guid, uint64_t* outInterface) {
    std::cout << "Unimplemented - D3D12GetDebugInterface!\n";
    return 0;
}

void D3D12XboxCreateDevice(uint64_t adapter, uint64_t* createInfo, uint64_t unknownParam, uint64_t* outDevicePtr) {
    std::cout << "Unimplemented - D3D12XboxCreateDevice!\n";
}

void D3D12CreateDevice(uint64_t adapter, uint64_t unused, uint64_t flags, uint64_t* outDevice) {
    std::cout << "Unimplemented - D3D12CreateDevice!\n";
}

void D3D12XboxUnloadDriverModule() {
    std::cout << "Unimplemented - D3D12XboxUnloadDriverModule!\n";
}

uint64_t D3D12SerializeRootSignature() {
    std::cout << "Unimplemented - D3D12SerializeRootSignature!\n";
    return 0;
}

uint64_t D3D12SerializeVersionedRootSignature() {
    std::cout << "Unimplemented - D3D12SerializeVersionedRootSignature!\n";
    return 0;
}

uint64_t D3D12CreateRootSignatureDeserializer() {
    std::cout << "Unimplemented - D3D12CreateRootSignatureDeserializer!\n";
    return 0;
}

uint64_t D3D12CreateVersionedRootSignatureDeserializer() {
    std::cout << "Unimplemented - D3D12CreateVersionedRootSignatureDeserializer!\n";
    return 0;
}

uint64_t D3D10CreateBlob(uint64_t size, uint64_t flavor, uint64_t signature, uint64_t outBlob) {
    std::cout << "Unimplemented - D3D10CreateBlob!\n";
    return 0;
}

uint64_t D3DMapEsramMemory(int type, uint64_t addr, uint32_t size, uint64_t flags) {
    std::cout << "Unimplemented - D3DMapEsramMemory!\n";
    return 0;
}

uint64_t DXGIXPresentArray() {
    std::cout << "Unimplemented - DXGIXPresentArray!\n";
    return 0;
}

uint64_t DXGIXGetFrameStatistics() {
    std::cout << "Unimplemented - DXGIXGetFrameStatistics!\n";
    return 0;
}

uint64_t DXGIXSetVLineNotification() {
    std::cout << "Unimplemented - DXGIXGetFrameStatistics!\n";
    return 0;
}

uint64_t DXGIXSetFrameNotification() {
    std::cout << "Unimplemented - DXGIXSetFrameNotification!\n";
    return 0;
}

void D3DConfigureVirtualMemory(uint32_t* config) {
    std::cout << "Unimplemented - D3DConfigureVirtualMemory!\n";
}

uint64_t D3DAllocateGraphicsMemory() {
    std::cout << "Unimplemented - D3DAllocateGraphicsMemory!\n";
    return 0;
}

uint64_t D3DFreeGraphicsMemory() {
    std::cout << "Unimplemented - D3DAllocateGraphicsMemory!\n";
    return 0;
}

uint32_t D3DUploadCustomMicrocode(int type, int64_t srcA, int64_t srcB, int64_t srcC, int64_t srcD, int64_t srcE, int64_t srcF) {
    std::cout << "Unimplemented - D3DUploadCustomMicrocode!\n";
    return 0;
}

void D3DFlushEntireCpuCache() {
    std::cout << "Unimplemented - D3DFlushEntireCpuCache!\n";
}

uint64_t InternalDriverCallX() {
    std::cout << "Unimplemented - InternalDriverCallX!\n";
    return 0;
}

uint64_t PixGetPixieEntryPoints(uint32_t* buffer) {
    std::cout << "Unimplemented - InternalDriverCallX!\n";
    return 0;
}