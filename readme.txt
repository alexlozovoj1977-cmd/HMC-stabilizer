# Harmonic Phase Stabilizer Core (EGM / φ-HMC)
Ultra-light DSP module for suppressing 1/f-like phase noise and adding physically-correct harmonic modulation to real or I/Q signals.  
Implements the `cos(A * sin(φ))` and `exp(j A sin(φ))` laws used in analog tape, SDR Doppler compensation, drone telemetry stabilization, and scientific instrumentation.

[![DOI](https://zenodo.org/badge/DOI/10.5281/zenodo.17644861.svg)](https://doi.org/10.5281/zenodo.17644861)

---

## 🚀 Features
- 4–6 FLOPs per sample  
- Real and complex I/Q versions  
- Zero allocations, zero dependencies  
- Perfect block-to-block phase continuity  
- Portable: C99, C++17, Python/NumPy  
- Works on STM32, ESP32, embedded SDR, FPGA soft-cores  
- Ideal for SDR, drones, FPV links, telemetry, audio wow/flutter, instrumentation

---

## 📦 Structure

