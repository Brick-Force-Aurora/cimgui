
 bool     ImGui_ImplWin32_Init(void* hwnd);
 bool     ImGui_ImplWin32_InitForOpenGL(void* hwnd);
 void     ImGui_ImplWin32_Shutdown();
 void     ImGui_ImplWin32_NewFrame();
 void     ImGui_ImplWin32_EnableDpiAwareness();
 float    ImGui_ImplWin32_GetDpiScaleForHwnd(void* hwnd);       
 float    ImGui_ImplWin32_GetDpiScaleForMonitor(void* monitor); 
 void     ImGui_ImplWin32_EnableAlphaCompositing(void* hwnd);   