workspace(name = "bazel_libtorch_template")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "libtorch",
    strip_prefix = "libtorch",
    sha256 = "1d1fcfb433fa14de1229b78bd173f88adea6aea3c565dc39f17e4a3664e216b1",
    type = "zip",
    urls = ["https://download.pytorch.org/libtorch/cu113/libtorch-cxx11-abi-shared-with-deps-1.10.1%2Bcu113.zip"],
    build_file = "@//:libtorch.BUILD"
)



