#include "SDL.h"

int main(int argc, char* argv[]) {
    SDL_Init(SDL_INIT_VIDEO); // Inicializa a SDL2

    SDL_Window* window = SDL_CreateWindow(
        "Quadrado Vermelho com SDL2",                  // título
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,  // posição da janela
        640, 480,                                      // largura e altura da janela
        SDL_WINDOW_SHOWN
    );

    // Verifica se a janela foi criada com sucesso
    if (window == nullptr) {
        SDL_Log("Erro ao criar a janela: %s", SDL_GetError());
        return -1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        SDL_Log("Erro ao criar o renderer: %s", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        return -1;
    }

    // Define a cor de fundo para preto
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // RGBA
    SDL_RenderClear(renderer); // Limpa a tela com a cor de fundo

    // Define a cor de renderização para vermelho
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // RGBA

    // Define o retângulo a ser desenhado
    SDL_Rect rect;
    rect.x = 250;  // posição x do retângulo
    rect.y = 190;  // posição y do retângulo
    rect.w = 200;  // largura do retângulo
    rect.h = 200;  // altura do retângulo

    // Desenha o retângulo (quadrado) vermelho
    SDL_RenderFillRect(renderer, &rect);

    // Atualiza a tela
    SDL_RenderPresent(renderer);

    // Espera por 5 segundos
    SDL_Delay(50000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
