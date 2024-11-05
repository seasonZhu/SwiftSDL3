import XCTest

@testable import SwiftSDL3

final class SwiftSDL3Tests: XCTestCase {
    func testRender() throws {

        guard SDL_Init(SDL_INIT_VIDEO) == true else {
            fatalError("SDL could not initialize! SDL_Error: \(String(cString: SDL_GetError()))")
        }
        SDL_SetHint(SDL_HINT_TRACKPAD_IS_TOUCH_ONLY, "1")

        let window = SwiftSDL3.SDL_CreateWindow(
            "he",
            800,
            600,
            //   SDL_WINDOW_OPENGL
            0
        )

        let renderer = SDL_CreateRenderer(window, nil)

        var rect = SDL_FRect(
            x: 0,
            y: 0,
            w: Float(100),
            h: Float(100)
        )
        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255)
        SDL_RenderRect(renderer, &rect)
        SDL_RenderPresent(renderer)
    }
}
