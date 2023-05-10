#include "Drawing.hpp"
#include "../Components/Includes.hpp"

#include "../ImGui/imgui.h"
#include "../ImGui/imgui_impl_win32.h"
#include "../ImGui/imgui_impl_dx11.h"
Drawing::Drawing(const std::string& name, const std::string& description, uint32_t states) : Module(name, description, states) {}
Drawing::~Drawing() {}





