workspace(name = "bazel_libtorch_template")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "libtorch",
    strip_prefix = "libtorch",
    sha256 = "8642c6657ae802730ac1f4b4ae4ad980eee2515765447e470b83b48ccd2292de",
    type = "zip",
    urls = ["https://download.pytorch.org/libtorch/cu117/libtorch-cxx11-abi-shared-with-deps-1.13.1%2Bcu117.zip"],
    build_file = "@//:libtorch.BUILD"
)



