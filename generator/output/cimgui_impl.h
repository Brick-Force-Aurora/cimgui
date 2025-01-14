#ifdef CIMGUI_USE_DX9

typedef struct IDirect3DDevice9 IDirect3DDevice9;
struct IDirect3DDevice9;CIMGUI_API bool ImGui_ImplDX9_Init(IDirect3DDevice9* device);
CIMGUI_API void ImGui_ImplDX9_Shutdown(void);
CIMGUI_API void ImGui_ImplDX9_NewFrame(void);
CIMGUI_API void ImGui_ImplDX9_RenderDrawData(ImDrawData* draw_data);
CIMGUI_API bool ImGui_ImplDX9_CreateDeviceObjects(void);
CIMGUI_API void ImGui_ImplDX9_InvalidateDeviceObjects(void);

#endif
#ifdef CIMGUI_USE_DX11

typedef struct ID3D11Device ID3D11Device;
typedef struct ID3D11DeviceContext ID3D11DeviceContext;
typedef struct ID3D11SamplerState ID3D11SamplerState;
struct ID3D11Device;
struct ID3D11DeviceContext;
struct ID3D11SamplerState;
typedef struct ImGui_ImplDX11_RenderState ImGui_ImplDX11_RenderState;
struct ImGui_ImplDX11_RenderState
{
    ID3D11Device*           Device;
    ID3D11DeviceContext*    DeviceContext;
    ID3D11SamplerState*     SamplerDefault;
};CIMGUI_API bool ImGui_ImplDX11_Init(ID3D11Device* device,ID3D11DeviceContext* device_context);
CIMGUI_API void ImGui_ImplDX11_Shutdown(void);
CIMGUI_API void ImGui_ImplDX11_NewFrame(void);
CIMGUI_API void ImGui_ImplDX11_RenderDrawData(ImDrawData* draw_data);
CIMGUI_API bool ImGui_ImplDX11_CreateDeviceObjects(void);
CIMGUI_API void ImGui_ImplDX11_InvalidateDeviceObjects(void);

#endif
#ifdef CIMGUI_USE_WIN32
CIMGUI_API bool ImGui_ImplWin32_Init(void* hwnd);
CIMGUI_API bool ImGui_ImplWin32_InitForOpenGL(void* hwnd);
CIMGUI_API void ImGui_ImplWin32_Shutdown(void);
CIMGUI_API void ImGui_ImplWin32_NewFrame(void);
CIMGUI_API void ImGui_ImplWin32_EnableDpiAwareness(void);
CIMGUI_API float ImGui_ImplWin32_GetDpiScaleForHwnd(void* hwnd);
CIMGUI_API float ImGui_ImplWin32_GetDpiScaleForMonitor(void* monitor);
CIMGUI_API void ImGui_ImplWin32_EnableAlphaCompositing(void* hwnd);

#endif
