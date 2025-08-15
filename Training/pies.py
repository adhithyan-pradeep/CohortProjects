import tkinter as tk
from tkinter import messagebox
import mpmath

MAX_LIMIT = 100  # Set a max limit for decimal places

def generate_pi():
    try:
        n = int(entry.get())
        if n < 1 or n > MAX_LIMIT:
            messagebox.showerror("Error", f"Enter a number between 1 and {MAX_LIMIT}")
            return
        mpmath.dps = n + 1
        pi_value = str(mpmath.pi)[:n + 2]
        result_label.config(text=f"PI up to {n} decimal places:\n{pi_value}")
    except ValueError:
        messagebox.showerror("Error", "Invalid input! Please enter an integer.")

# Create GUI window
root = tk.Tk()
root.title("PI Generator")
root.geometry("400x300")

# UI Elements
tk.Label(root, text="Enter decimal places (Max 100):").pack(pady=5)
entry = tk.Entry(root)
entry.pack(pady=5)
tk.Button(root, text="Generate PI", command=generate_pi).pack(pady=5)
result_label = tk.Label(root, text="")
result_label.pack(pady=10)

# Run GUI
root.mainloop()
