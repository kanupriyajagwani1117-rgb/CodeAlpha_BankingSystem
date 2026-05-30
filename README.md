# 🏦 Console Banking System

A lightweight, interactive command-line application built in C++ that simulates basic ATM and banking operational cycles. Leveraging Object-Oriented Programming (OOP) concepts, the system encapsulates account records inside a modular class context to safely process secure deposits, withdrawal checks, and real-time balance calculations.

---

## 🚀 Features

* **Data Encapsulation:** Protects internal account variables (`balance`) within an explicit class boundary structure.
* **Smart Transaction Rules:** Actively tracks withdrawal requests to prevent accidental account overdraws using standard logic gates.
* **Interactive Control Dashboard:** Utilizes clean `switch-case` branches to map menu selections to dynamic member functions effortlessly.
* **Cross-Platform Compatibility:** Replaces standard Unicode currency signs with the universally supported text marker (`Rs =`), bypassing character-set rendering errors across legacy Windows, macOS, and Linux terminal configurations.

---

## ⚙️ Core Banking Operations

The engine runs directly through localized logic states inside a unified execution sequence:
1. **Initialization:** The application requests an initial baseline balance from the user at runtime.
2. **Operational Menu Selection:** An interactive prompt displays available transactional options.
3. **Execution Branching:**
   * **Deposit (`1`):** Increments account tracking memory by the user-defined amount.
   * **Withdrawal (`2`):** Validates the request value against current records; applies the deduction if sufficient funds exist.
   * **Inquiry (`3`):** Bypasses transaction modification protocols entirely.
4. **Summary Statement:** Generates a real-time terminal balance summary before safely cleaning up.

---

## 🛠️ Installation & Compilation

To run this application, make sure you have a standard C++ compiler toolchain (like `g++` or `clang`) set up.

### 1. Save the Source Code
Save the provided code to your machine in a file named `BankingSystem.cpp`.

### 2. Compile via Command Line
Open your workspace terminal and build the binary program using:
```bash
g++ -std=c++11 BankingSystem.cpp -o BankingSystem
