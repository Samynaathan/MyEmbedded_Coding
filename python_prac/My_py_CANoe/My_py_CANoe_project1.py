from python_lib import CANoe
import random
from tkinter import *

# Create an instance of the CANoe class
canoe_instance = CANoe("D:\\shyam\\python_prac")
canoe_instance.open("S:\\my_canoe_projects\\Config_files\\Practice_config\\Practice_config.cfg", visible=True)

#------------------------------------------------------------------------------------------------------------------
def start_measurement():
    # Open the CANoe configuration file

    # Variables
    vehicle_speed = []
    periodicity = 500

    # This will be called periodically to simulate real-time updates without blocking the window
    def update_measurement():
        if is_running:
            # Generate random vehicle speed
            speed = random.randint(0, 250)
            vehicle_speed.append(speed)

            # Set the signal value in CANoe
            canoe_instance.set_signal_value("CAN", 1, "Engine_info", "Engine_speed", speed, False)

            # Wait for the periodic time (500ms) and call the update_measurement function again
            window.after(periodicity, update_measurement)

    # Start the measurement loop
    update_measurement()

#-----------------------------------------------------------------------------------------------
def Canoe_start_fun():
    global is_running
    is_running = True
    canoe_instance.start_measurement()  # Start the measurement
    start_measurement()  # Start the measurement loop

def Canoe_stop_fun():
    global is_running
    is_running = False  # Stop the measurement
    canoe_instance.stop_measurement()

# Create the main window
window = Tk()

# Set the window title
window.title("CANoe_Panel")

# Set the size of the window
window.geometry("400x300")  # Width x Height

# Create a headline label inside the window
headline = Label(window, text="My Py_CANoe panel", font=("Arial", 15, "italic"))
headline.pack(pady=20)  # Add some padding around the headline
#-----------------------------------------------------------------------------------------------------------------
# Load the start button image
start_image = PhotoImage(file="Start_button.png")
start_button = Button(window, image=start_image, command=Canoe_start_fun, height=15, width=15)
start_button.place(x=20, y=80)  # Position the button (adjust x, y as needed)

start_label = Label(window, text="Start", font=("Arial", 7))
start_label.place(x=18, y=100)
#------------------------------------------------------------------------------------------------------------------
# Load the stop button image
stop_image = PhotoImage(file="Stop_button.png")
stop_button = Button(window, image=stop_image, command=Canoe_stop_fun, height=15, width=15)
stop_button.place(x=40, y=80)  # Position the button (adjust x, y as needed)

stop_label = Label(window, text="Stop", font=("Arial", 7))
stop_label.place(x=38, y=100)
#------------------------------------------------------------------------------------------------------------------
# Variable to control the loop
is_running = False

# Run the application
window.mainloop()
