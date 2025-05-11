#include <zephyr/device.h>
#include <zephyr/drivers/gpio.h>
#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>

/* GPIO where the Pico W onboard LED is connected - GPIO 25 */
#define LED_GPIO_NODE DT_NODELABEL(gpio0)
#define LED_GPIO_PIN 0

int main(void)
{
    const struct device *gpio_dev;
    int ret;

    printk("Hello World! Pico running Zephyr on %s\n", CONFIG_BOARD);

    /* Get GPIO device */
    gpio_dev = DEVICE_DT_GET(LED_GPIO_NODE);
    if (!device_is_ready(gpio_dev))
    {
        printk("Error: GPIO device is not ready\n");
        return 1;
    }

    /* Configure the LED pin */
    ret = gpio_pin_configure(gpio_dev, LED_GPIO_PIN, GPIO_OUTPUT_ACTIVE);
    if (ret < 0)
    {
        printk("Error %d: Failed to configure LED pin\n", ret);
        return 1;
    }

    printk("LED blinking started\n");

    /* Blink the LED forever */
    while (1)
    {
        gpio_pin_toggle(gpio_dev, LED_GPIO_PIN);
        k_sleep(K_MSEC(500)); /* Sleep for 500 milliseconds */
    }

    return 0;
}
