#pragma once

#include "components/simple_scene.h"
#include "components/transform.h"
#include <vector>
using namespace std;

namespace m1
{
    class Tema3 : public gfxc::SimpleScene
    {
     public:
         Tema3();
        ~Tema3();

        void Init() override;

     private:
        void FrameStart() override;
        void Update(float deltaTimeSeconds) override;
        void FrameEnd() override;

        void RenderSimpleMesh(Mesh *mesh, Shader *shader, const glm::mat4 &modelMatrix, const glm::vec3 &color = glm::vec3(1));

        void OnInputUpdate(float deltaTime, int mods) override;
        void OnKeyPress(int key, int mods) override;
        void OnKeyRelease(int key, int mods) override;
        void OnMouseMove(int mouseX, int mouseY, int deltaX, int deltaY) override;
        void OnMouseBtnPress(int mouseX, int mouseY, int button, int mods) override;
        void OnMouseBtnRelease(int mouseX, int mouseY, int button, int mods) override;
        void OnMouseScroll(int mouseX, int mouseY, int offsetX, int offsetY) override;
        void OnWindowResize(int width, int height) override;
        void Tema3::MyRenderSimpleMesh(Mesh* mesh, Shader* shader, const glm::mat4& modelMatrix, const glm::vec3& color);

        glm::vec3 lightPosition;
        glm::vec3 lightDirection;
        unsigned int materialShininess;
        float materialKd;
        float materialKs;

        struct gridcolors_t {
            float x;
            float y;
            float z;
        } gridcolors;

        struct dancers_t {
            float x;
            float y;
            float z;
            float colorx;
            float colory;
            float colorz;
            int moveX, moveY;
        } dancers;
        vector<dancers_t> dancersPos;
        vector<dancers_t> dancersPos_dup;

        vector<vector<gridcolors_t>> colors;
        int grid_size;
        int nrOfDancers;
        float distance;
        // TODO(student): If you need any other class variables, define them here.
        int typeOfLight;
    };
}   // namespace m1
