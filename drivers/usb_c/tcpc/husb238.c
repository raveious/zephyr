/*
 * Copyright (c) 2025 Ian Wakely
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <zephyr/drivers/i2c.h>
#include <zephyr/drivers/usb_c/usbc_tcpc.h>
#include "husb238_priv.h"

#define DT_DRV_COMPAT hynetek_husb238_tcpc
LOG_MODULE_REGISTER(tcpc_husb238, CONFIG_USBC_LOG_LEVEL);

struct husb238_cfg {
	const struct i2c_dt_spec bus;
};

int husb238_tcpc_init(const struct device *dev)
{
	const struct husb238_cfg *cfg = dev->config;

	if (!device_is_ready(cfg->bus.bus)) {
		return -EIO;
	}

	#ifdef CONFIG_USBC_TCPC_HUSB238_RESET_ON_INIT

	#endif

	return 0;
}

int husb238_tcpc_get_cc(const struct device *dev, enum tc_cc_voltage_state *cc1,
		      enum tc_cc_voltage_state *cc2)
{
}

int husb238_tcpc_set_cc(const struct device *dev, enum tc_cc_pull pull)
{
	ARG_UNUSED(dev);
	ARG_UNUSED(pull);

	return -ENOSYS;
}

void husb238_tcpc_set_vconn_discharge_cb(const struct device *dev, tcpc_vconn_discharge_cb_t cb)
{
	ARG_UNUSED(dev);
	ARG_UNUSED(cb);
}

void husb238_tcpc_set_vconn_cb(const struct device *dev, tcpc_vconn_control_cb_t vconn_cb)
{
	ARG_UNUSED(dev);
	ARG_UNUSED(vconn_cb);
}

int husb238_tcpc_get_rx_pending_msg(const struct device *dev, struct pd_msg *msg)
{
	ARG_UNUSED(dev);
	ARG_UNUSED(msg);

	return -ENOSYS;
}

int husb238_tcpc_set_cc_polarity(const struct device *dev, enum tc_cc_polarity polarity)
{
	ARG_UNUSED(dev);
	ARG_UNUSED(polarity);

	return -ENOSYS;
}

void husb238_tcpc_alert_handler_cb(const struct device *dev, void *data, enum tcpc_alert alert)
{
	ARG_UNUSED(dev);
	ARG_UNUSED(data);
	ARG_UNUSED(alert);
}

int husb238_tcpc_get_snk_ctrl(const struct device *dev)
{
}

int husb238_tcpc_set_snk_ctrl(const struct device *dev, bool enable)
{
}

int husb238_tcpc_set_alert_handler_cb(const struct device *dev, tcpc_alert_handler_cb_t handler,
				    void *data)
{
	ARG_UNUSED(dev);
	ARG_UNUSED(handler);
	ARG_UNUSED(data);

	return -ENOSYS;
}


static DEVICE_API(tcpc, husb238_driver_api) = {
	.init = husb238_tcpc_init,
	.get_cc = husb238_tcpc_get_cc,
	.set_cc = husb238_tcpc_set_cc,
	.set_vconn_discharge_cb = husb238_tcpc_set_vconn_discharge_cb,
	.set_vconn_cb = husb238_tcpc_set_vconn_cb,
	.get_rx_pending_msg = husb238_tcpc_get_rx_pending_msg,
	.set_cc_polarity = husb238_tcpc_set_cc_polarity,
	.alert_handler_cb = husb238_tcpc_alert_handler_cb,
	.get_snk_ctrl = husb238_tcpc_get_snk_ctrl,
	.set_snk_ctrl = husb238_tcpc_set_snk_ctrl,
	.set_alert_handler_cb = husb238_tcpc_set_alert_handler_cb,
};

static int husb238_dev_init(const struct device *dev)
{
	const struct husb238_cfg *cfg = dev->config;

	if (!device_is_ready(cfg->bus.bus)) {
		return -EIO;
	}

	return 0;
}

#define HUSB238_INSTANCE_DEFINE(inst)                                                              \
	static struct husb238_cfg drv_cfg_husb238##inst = {                                        \
		.bus = I2C_DT_SPEC_GET(DT_DRV_INST(inst)),                                         \
	};                                                                                         \
	DEVICE_DT_INST_DEFINE(inst, &husb238_dev_init, NULL, NULL,              \
			      &drv_cfg_husb238##inst, POST_KERNEL, CONFIG_USBC_TCPC_INIT_PRIORITY, \
			      &husb238_driver_api);

DT_INST_FOREACH_STATUS_OKAY(HUSB238_INSTANCE_DEFINE)
