# MotionLink/cursorcontrol/motiondata/UI
Moving Cursor on the video screen from motion data using Matlab and Simulink
Move computer cursor via smartphone gyroscope data through Simulink.

Content: Matlab code, Simulink model, final report.

# Aim
The aim of this assignment is to move the cursor on the computer screen using motion sensor data obtained from a smartphone's accelerometer.

# Experimental Setup
MATLAB Setup:

Install the Simulink Support Package for Android Devices through the MATLAB Add-On Explorer.

Install and configure the Android Studio SDK with MATLAB:

Download Android Studio from the official website.

Follow the installation steps and ensure the SDK is correctly configured in MATLAB's preferences.

Phone Configuration:

Enable Developer Mode on your Android device:

Go to Settings > About phone > Build number and tap it seven times to enable Developer options.

Install the appropriate drivers for your phone:

Ensure the necessary USB drivers are installed on your computer for proper recognition of the device.

Connect the phone to the computer using a USB cable.

In MATLAB, run the Test app to install the necessary support package on your phone.
Verify the installation by checking that the app appears on your device.
Issues Encountered

Compatibility Issues: Problems arise when collaborating between Simulink and Android Studio due to version mismatches, which can prevent the Test app from running.
SDK Tool Updates: Ensure SDK tools are up-to-date to avoid errors indicating that no files are detected when running the Test app.

Installation Challenges: If any issues arise during installation, a complete uninstallation may be necessary due to the large size of the files.
Technical Implementation

# Simulink Model Overview
The program was developed in MATLAB Simulink, utilizing a model named medical3.slx. The key components and their connections are as follows:

VR Sinc Model Block: Serves as a visualization tool for the cursor movement.

Mux Block: Combines multiple signals from the accelerometer.
3D Model: The 8_palline_color model represents the target points for the cursor movement.

# Signal Calibration

To enhance accuracy, the accelerometer readings (X, Y, Z) are subject to calibration:

# Calibration Matrix:
A calibration matrix (slexHARAndroidCalibrationMatrix.mat) is applied to adjust the sensor readings.
The matrix compensates for biases and improves the fidelity of the motion data.
Signal Processing Steps
Data Acquisition:

The accelerometer data is read continuously from the smartphone.
Each axis's readings are filtered to eliminate noise using a low-pass filter.
Low Pass Filter Design:

The low-pass filter is designed to allow low-frequency signals to pass while attenuating high-frequency noise.
A cutoff frequency is chosen to optimize the response to the accelerometer's sample rate, ensuring smooth cursor movement.
Gain Adjustment:

A gain value of 0.1 is applied to the filtered data to enhance the signal sensitivity.
This gain helps map the accelerometer outputs more effectively to cursor movements on the screen.

# Mapping to VR Sinc Block:

The processed accelerometer data is mapped to the VR Sinc Block to control the cursor.
The mapping is achieved through a combination of mathematical operations in Simulink, ensuring that movements of the phone correspond accurately to cursor movements.
Result Evaluation

After the simulation, the cursor was able to reach all target points successfully by moving the Android phone.

The performance was evaluated based on the accuracy of the cursor movement relative to the phone's motion.

# Conclusion
This implementation successfully demonstrates the use of motion sensor data from an Android device to control a cursor on a computer screen, showcasing the effectiveness of MATLAB Simulink in handling real-time data processing and visualization.
