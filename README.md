# ♻️ Smart Waste Sustainability Analyzer (C Program)

## 📌 Overview

This project is a command-line based sustainability analytics tool built using C programming.

It was inspired by my research presentation on **AI-Integrated Smart Food Waste Management**. The objective of this project is to simulate how food waste data can be analyzed and converted into sustainability metrics using structured programming concepts.

This program demonstrates how environmental modeling and logical analysis can be implemented using core C fundamentals.

---

## 🎯 Problem Statement

Food waste generated in institutions contributes significantly to environmental impact such as methane emissions, energy loss, and inefficient resource utilization.

This program analyzes daily food waste data and estimates:

- Waste trends  
- Environmental impact  
- Sustainability efficiency  
- Abnormal waste spikes  

---

## ⚙️ Features

✔ Accepts daily waste input (user-defined number of days)  
✔ Calculates total and average waste  
✔ Identifies highest and lowest waste values  
✔ Estimates carbon emission  
✔ Estimates energy recovery potential  
✔ Estimates compost generation  
✔ Computes Sustainability Efficiency Index (SEI)  
✔ Detects anomaly based on threshold logic  

---

## 🧠 Technical Concepts Used

- Arrays  
- Loops (for iteration)  
- Conditional statements  
- Basic mathematical modeling  
- Threshold-based anomaly detection  
- Structured output formatting  

---

## 🧮 Sustainability Formulas Used

**Carbon Emission**
```
C = W × k
```

**Energy Recovery**
```
E = W × η
```

**Compost Generation**
```
Compost = W × δ
```

**Sustainability Efficiency Index**
```
SEI = (Energy + Compost) / Total Waste
```

Where:

- `k` = carbon emission factor  
- `η` = energy recovery factor  
- `δ` = compost conversion factor  

---

## 🖥️ Sample Input

```
Enter number of days to analyze: 5

Day 1: 120
Day 2: 140
Day 3: 160
Day 4: 130
Day 5: 150
```

---

## 📊 Sample Output

```
Total Waste: 700 kg
Average Waste: 140 kg
Highest Waste: 160 kg
Lowest Waste: 120 kg

Total Carbon Emission: 1750 kg CO2 eq
Total Energy Recovery: 840 kWh
Total Compost Generation: 420 kg
Sustainability Efficiency Index (SEI): 1.80

High Waste Anomaly Detected on Day 3
```

---

## 🛠️ How to Run the Program

1. Save the file as:
```
smart_waste_analyzer.c
```

2. Compile using:
```
gcc smart_waste_analyzer.c -o analyzer
```

3. Run:
```
./analyzer
```

---

## 🚀 Future Improvements

- Modular function-based implementation  
- File handling for persistent data storage  
- Graph-based visualization (using external libraries)  
- Integration with IoT sensor data  
- Advanced predictive models  

---

## 👩‍💻 Author

**Renita A**  
UG Scholar – Computer Science and Engineering  
Kumaraguru College of Technology  

---

### 🌱 Week 3 of Building Consistently

This project is part of my weekly GitHub consistency journey where I build and publish one project every week to strengthen my programming fundamentals and problem-solving skills.
