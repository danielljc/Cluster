#pragma once

#include <imgui.h>

class Cluster;

class ClusterUI
{
public:
    ClusterUI(Cluster& app) : app(app) {}

    void initialize();
    void update(float dt);

private:
    void imageTooltip(ImTextureID tex, ImVec2 tex_size, float region_size);

    // update 10 times per second
    static constexpr float GRAPH_FREQUENCY = 0.1f;
    // show 100 values
    static constexpr size_t GRAPH_HISTORY = 100;

    Cluster& app;

    float mTime = 0.0f;
};