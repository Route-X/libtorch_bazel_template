#include <torch/torch.h>
#include <torch/script.h>
#include <iostream>
#include <iomanip>

int main()
{
  std::cout << "Hello LibTorch!" << std::endl;
  std::cout << std::fixed << std::setprecision(4);

  // Check cuda availability somehow solves the issue:
  // terminate called after throwing an instance of 'c10::Error'
  // what():  CUDA error: driver shutting down
  // https://github.com/pytorch/pytorch/issues/35736#issuecomment-688078143
  torch::cuda::is_available();

  std::cout << "---- Basic Autograd Example 1 -----" << std::endl;

  torch::Tensor x = torch::tensor(1.0, torch::requires_grad());
  torch::Tensor w = torch::tensor(2.0, torch::requires_grad());
  torch::Tensor b = torch::tensor(3.0, torch::requires_grad());

  // Build a computational graph
  auto y = w * x + b;

  // Compute the gradients
  y.backward();

  std::cout << x.grad().item<float>() << std::endl;
  std::cout << w.grad().item<float>() << std::endl;
  std::cout << b.grad().item<float>() << std::endl;
  // Output:
  // 2
  // 1
  // 1

  std::cout << "---- Basic Autograd Example 2 ----" << std::endl;

  x = torch::randn({10, 3});
  y = torch::randn({10, 2});

  // Build a fully connected layer
  torch::nn::Linear linear(3, 2);
  std::cout << "w: " << linear->weight << std::endl;
  std::cout << "b: " << linear->bias << std::endl;

  torch::nn::MSELoss criterion;
  torch::optim::SGD optimizer(linear->parameters(), torch::optim::SGDOptions(0.01));

  auto pred = linear->forward(x);

  auto loss = criterion(pred, y);
  std::cout << "Loss: " << loss.item<double>() << std::endl;

  loss.backward();

  std::cout << "dL/dw: " << linear->weight.grad() << std::endl;
  std::cout << "dL/db: " << linear->bias.grad() << std::endl;

  optimizer.step();

  pred = linear->forward(x);
  loss = criterion(pred, y);
  std::cout << "Loss after 1 optimization step: " << loss.item<double>() << std::endl;
}