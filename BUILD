cc_binary(
    name = "main",
    srcs = ["main.cc"],
    copts = ["-D_GLIBCXX_USE_CXX11_ABI=1", "-std=c++14"],
    deps = [
        "@libtorch//:torch",
    ],
)