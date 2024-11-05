// swift-tools-version: 6.0
// The swift-tools-version declares the minimum version of Swift required to build this package.
import PackageDescription

var sources: [String] = []
var exclude: [String] = []

// common
sources += [
    "src/SDL_assert.c",
    "src/SDL_error.c",
    "src/SDL_guid.c",
    "src/SDL_hashtable.c",
    "src/SDL_hints.c",
    "src/SDL_list.c",
    "src/SDL_log.c",
    "src/SDL_properties.c",
    "src/SDL_utils.c",
    "src/SDL.c",
    "src/atomic",
    "src/camera",
    "src/cpuinfo",
    "src/events",
    "src/process",
    "src/storage",
    "src/time",
    "src/dynapi/SDL_dynapi.c",
    "src/core/SDL_core_unsupported.c",
    "src/dialog/SDL_dialog_utils.c",
]

// filesystem
sources += [
    "src/filesystem/"
]
exclude += [
    "src/filesystem/gdk"
]

// main
sources += [
    "src/main/SDL_main_callbacks.c",
    "src/main/SDL_runapp.c",
    "src/main/generic/",
]

// stdlib
sources += [
    "src/stdlib/SDL_crc16.c",
    "src/stdlib/SDL_crc32.c",
    "src/stdlib/SDL_getenv.c",
    "src/stdlib/SDL_iconv.c",
    "src/stdlib/SDL_malloc.c",
    "src/stdlib/SDL_memcpy.c",
    "src/stdlib/SDL_memmove.c",
    "src/stdlib/SDL_memset.c",
    // "src/stdlib/SDL_mslibc_x64.masm",
    "src/stdlib/SDL_mslibc.c",
    "src/stdlib/SDL_murmur3.c",
    "src/stdlib/SDL_qsort.c",
    "src/stdlib/SDL_random.c",
    "src/stdlib/SDL_stdlib.c",
    "src/stdlib/SDL_string.c",
    "src/stdlib/SDL_strtokr.c",
]

// video
sources += [
    "src/video/SDL_blit_0.c",
    "src/video/SDL_blit_1.c",
    "src/video/SDL_blit_A.c",
    "src/video/SDL_blit_auto.c",
    "src/video/SDL_blit_copy.c",
    "src/video/SDL_blit_N.c",
    "src/video/SDL_blit_slow.c",
    "src/video/SDL_blit.c",
    "src/video/SDL_bmp.c",
    "src/video/SDL_clipboard.c",
    "src/video/SDL_egl.c",
    "src/video/SDL_fillrect.c",
    "src/video/SDL_pixels.c",
    "src/video/SDL_rect.c",
    "src/video/SDL_RLEaccel.c",
    "src/video/SDL_stretch.c",
    "src/video/SDL_surface.c",
    "src/video/SDL_video.c",
    "src/video/SDL_vulkan_utils.c",
    "src/video/SDL_yuv.c",
    "src/video/dummy/",
    "src/video/offscreen/",
    "src/video/SDL_video_unsupported.c",
]

// yuv2rgb
sources += [
    "src/video/yuv2rgb/yuv_rgb_lsx.c",
    "src/video/yuv2rgb/yuv_rgb_sse.c",
    "src/video/yuv2rgb/yuv_rgb_std.c",
]

// timer
sources += [
    "src/timer/SDL_timer.c"
]

// thread
sources += [
    "src/thread/SDL_thread.c"
]

// render
sources += [
    "src/render/SDL_render.c",
    "src/render/SDL_yuv_sw.c",
    "src/render/software/",

    "src/render/gpu/SDL_pipeline_gpu.c",
    "src/render/gpu/SDL_render_gpu.c",
    "src/render/gpu/SDL_shaders_gpu.c",
]

// sensor
sources += [
    "src/sensor/SDL_sensor.c",
    "src/sensor/dummy/",
]

// haptic
sources += [
    "src/haptic/SDL_haptic.c"
]

// joystick
sources += [
    "src/joystick/"
]
exclude += [
    "src/joystick/check_8bitdo.sh",
    "src/joystick/sort_controllers.py",
]

// audio
sources += [
    "src/audio/SDL_audio.c",
    "src/audio/SDL_audiocvt.c",
    "src/audio/SDL_audiodev.c",
    "src/audio/SDL_audiotypecvt.c",
    "src/audio/SDL_audioqueue.c",
    "src/audio/SDL_audioresample.c",
    "src/audio/SDL_mixer.c",
    "src/audio/SDL_wave.c",
    "src/audio/dummy/",
    "src/audio/disk/",
]

// hidapi
sources += [
    "src/hidapi/SDL_hidapi.c"
]
exclude += [
    "src/hidapi/testgui"
]

// power
sources += [
    "src/power/SDL_power.c"
]

// locale
sources += [
    "src/locale/SDL_locale.c"
]

// file
sources += [
    "src/file/SDL_iostream.c"
]

// gpu
sources += [
    "src/gpu/SDL_gpu.c",
    "src/gpu/metal/",
    "src/gpu/vulkan/",
]
exclude += [
    "src/gpu/metal/compile_shaders.sh",
    "src/gpu/metal/Metal_Blit.metal",
]

// misc
sources += [
    "src/misc/SDL_url.c"
]

// macOS specific
sources += [
    "src/filesystem/cocoa",
    "src/video/cocoa",
    "src/timer/unix",
    "src/dialog/cocoa",
    "src/thread/pthread",
    "src/loadso/dlopen",
    "src/render/opengl",
    "src/render/opengles2",
    "src/render/metal",
    "src/haptic/darwin",
    "src/joystick/darwin",
    "src/audio/coreaudio",
    "src/power/macos",
    "src/locale/macos",
    "src/misc/macos",
]
exclude += [
    "src/render/metal/build-metal-shaders.sh",
    "src/render/metal/SDL_shaders_metal.metal",
]

let package = Package(
    name: "SwiftSDL3",
    platforms: [
        .macOS(.v10_14)
        // .iOS(.v12),
        // .tvOS(.v12),
        // .watchOS(.v5),
    ],
    products: [
        // Products define the executables and libraries a package produces, making them visible to other packages.
        .library(
            name: "SwiftSDL3",
            targets: ["SwiftSDL3"]
        )
    ],
    targets: [
        .target(
            name: "SwiftSDL3",
            exclude: exclude,
            sources: sources,
            resources: [],
            cSettings: [
                .headerSearchPath("include/build_config"),
                .headerSearchPath("src"),
                .define("SDL_USE_BUILTIN_OPENGL_DEFINITIONS"),
            ],
            linkerSettings: [
                .linkedLibrary("iconv")
            ]
        ),
        .executableTarget(
            name: "Example",
            dependencies: [
                "SwiftSDL3"
            ]
        ),
        .testTarget(
            name: "SwiftSDL3Tests",
            dependencies: ["SwiftSDL3"]
        ),
    ]
)
