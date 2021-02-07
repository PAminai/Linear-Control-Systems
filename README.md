# Linear Control Systems

The goal of this experiment is to observe the transient response to a step input. The step function can be applied by a switch button to the input of RLC circuit shown below. 

![RLC Circuit](https://github.com/PAminai/Linear-Control-Systems/blob/main/Figures/Circuit.jpg)

The experiment is done by following modes. You can watch folloing videos which explain the process of doing each moedes.
1. [Open Loop Circuit](https://drive.google.com/file/d/1OE4JFg5xxvIaEPbVWiGb9daZHWWuhP8U/view?usp=sharing)
2. [Close Loop Circuit](https://drive.google.com/file/d/1cj2MYVkfRylpmGOx7GooLaXQM8Sw5FnG/view?usp=sharing)

The output is connected to analog Pin of Arduino. The Transiesnt respons is plotted on serial plotter of Arduino IDE. As it is show on the figure below, the transient response is **overdamping** in the open loop mosde.

![Transient Response](https://github.com/PAminai/Linear-Control-Systems/blob/main/Figures/Overdamp%20Response.JPG)

The arduino code for plotting transient response is available at **Transient Response.ino** file above.
