import sys
import pygame
from pygame.locals import QUIT

pygame.init()
SURFACE = pygame.display.set_mode((400,300))
pygame.display.set_caption("Just Window")

def main():
    run = True
    while run:
        SURFACE.fill((255,255,255))

        for event in pygame.event.get():
            if event.type == QUIT:
                run = False
        pygame.display.update()
    pygame.quit()

if __name__ == "__main__":
    main()