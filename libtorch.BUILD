TORCH_LIBS = [
    "lib/libtorch.so",
    "lib/libtorch_cpu.so",
    "lib/libtorch_cuda.so",
    "lib/libtorch_cuda_cpp.so",
    "lib/libtorch_cuda_cu.so",
    "lib/libc10.so",
    "lib/libgomp-52f2fd74.so.1",
    "lib/libcudart-a7b20f20.so.11.0",
    "lib/libc10_cuda.so",
    "lib/libnvToolsExt-24de1d56.so.1",
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