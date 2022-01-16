import numpy as np


def main():
    data = np.loadtxt("simple.txt")
    n = 10000
    x = np.random.choice(data, (n, data.size), replace=True)
    print(x.shape)
    means = np.mean(x, axis=1)
    print(means.shape)
    print(np.quantile(means, 0.01) / 2 + np.quantile(means, 0.99) / 2,
          '+-', np.quantile(means, 0.99) / 2 - np.quantile(means, 0.01) / 2)


if __name__ == '__main__':
    main()
