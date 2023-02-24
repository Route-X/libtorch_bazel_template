TORCH_LIBS = [
    "lib/libc10_cuda.so",
    "lib/libc10.so",
    "lib/libcublas-f6acd947.so.11",
    "lib/libcublasLt-2e7ea254.so.11",
    "lib/libcudart-e409450e.so.11.0",
    "lib/libgomp-52f2fd74.so.1",
    "lib/libnvToolsExt-847d78f2.so.1",
    "lib/libtorch_cpu.so",
    "lib/libtorch_cuda_cpp.so",
    "lib/libtorch_cuda_cu.so",
    "lib/libtorch_cuda.so",
    "lib/libtorch.so",
]

cc_library(
    name = "torch",
    srcs = TORCH_LIBS,
    hdrs = glob(["include/**/*.h"]),
    includes = [
        "include",
        "include/torch/csrc/api/include",
    ],
    visibility = ["//visibility:public"]
)