#ifndef I2C_BUS_H
#define I2C_BUS_H
#define MAX_DEVICES 10
typedef struct
{
    int address;
    void *device;
} Device;
typedef struct
{
    int scl;
    int sda;
    Device devices[MAX_DEVICES];
    int count;
} I2CBus;
void bus_init(I2CBus *bus);
void register_device(I2CBus *bus,int address,void *device);
#endif
