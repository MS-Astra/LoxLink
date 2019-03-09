#ifndef MMM_CAN_H
#define MMM_CAN_H

#include "FreeRTOS.h"
#include "event_groups.h"
#include "queue.h"
#include "stm32f1xx_hal_conf.h"

#include "LoxCanMessage.hpp"

#ifdef __cplusplus
extern "C" {
#endif

extern CAN_HandleTypeDef gCan;
extern StaticQueue_t gCanReceiveQueue;

void MMM_CAN_Init();
void MMM_CAN_Send(const LoxCanMessage &msg);
void MMM_CAN_FilterAllowAll(uint32_t filterBank);
void MMM_CAN_FilterLoxNAT(uint32_t filterBank, uint8_t loxLink_or_Tree_ID, uint8_t natAddress, uint8_t fromServerFlag, uint32_t filterFIFOAssignment);

#ifdef __cplusplus
}
#endif

#endif