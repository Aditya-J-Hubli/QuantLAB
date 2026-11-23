# QuantLAB

A lightweight C++ quantitative finance library and console calculator implementing the **Black-Scholes option pricing model** and core **Time Value of Money (TVM)** calculations.

## Features

* **Black-Scholes Option Pricing:** Calculate theoretical prices for European Call and Put options.
* **Time Value of Money (TVM):** Compute Present Value (PV), Future Value (FV), and related discounting/compounding metrics.
* **Modular Design:** Core financial equations are cleanly separated into `finance.h` and `finance.cpp` for easy reuse in other C++ projects.

## Project Structure

```text
QuantLAB/
├── QuantLAB.cpp        # Main entry point and CLI interface
├── QuantLAB.vcxproj    # Visual Studio project configuration
├── finance.h           # Header file declaring financial models and functions
└── finance.cpp         # Implementation of Black-Scholes and TVM formulas
```

## Getting Started

### Prerequisites
* Windows with **Visual Studio** (2019 or 2022) with the *Desktop development with C++* workload installed, **or** any standard C++ compiler (`g++`, `clang++`).

### Building with Visual Studio
1. Clone the repository:
   ```bash
   git clone https://github.com
   ```
2. Open `QuantLAB.vcxproj` in Visual Studio.
3. Select your build configuration (e.g., `Release` or `Debug`) and press **Ctrl + Shift + B** to build.
4. Press **Ctrl + F5** to run the executable.

### Building via Command Line (g++)
If you prefer compiling directly from the terminal:
```bash
g++ -std=c++17 QuantLAB.cpp finance.cpp -o QuantLAB
./QuantLAB
```

## Roadmap

* [ ] **Live Market Data Streaming:** Integrate WebSocket client support (e.g., Boost.Beast / WebSocket++ / IXWebSocket) for real-time tick and price feeds
* [ ] **Live Option Pricing:** Feed streaming spot prices directly into the Black-Scholes engine for real-time theoretical valuation
* [ ] **Option Greeks:** Calculate $\Delta$, $\Gamma$, $\Theta$, $\mathcal{V}$, and $\rho$
* [ ] **Implied Volatility Solver:** Implement numerical solvers (Newton-Raphson / Brent's method)
* [ ] **Monte Carlo Simulation:** Add stochastic pricing models for exotic/path-dependent options

## Contributing

Contributions, issues, and feature requests are welcome! Feel free to check the [issues page](https://github.com).
