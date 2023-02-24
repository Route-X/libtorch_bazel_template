cc_binary(
    name = "main",
    srcs = ["main.cc"],
    copts = ["-D_GLIBCXX_USE_CXX11_ABI=1", "-std=c++17"],
    deps = [
        "@libtorch//:torch",
    ],
)