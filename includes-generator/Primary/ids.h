#ifndef IDS_H
#define IDS_H

#define NETWORK_VERSION 1.1f

/* TOPIC ACUnSTEER */
#define TOPIC_ACUnSTEER_MASK 0b00000011111
#define TOPIC_ACUnSTEER_FILTER 0b00000000000
#define HV_VOLTAGE 0b01100000000
#define HV_CURRENT 0b01100100000
#define HV_TEMP 0b01101000000
#define HV_ERROR 0b00100000000

/* TOPIC BMS_HV */
#define TOPIC_BMS_HV_MASK 0b00000011111
#define TOPIC_BMS_HV_FILTER 0b00000000001
#define SET_TS_STATUS 0b00000000001

/* TOPIC TLM */
#define TOPIC_TLM_MASK 0b00000011111
#define TOPIC_TLM_FILTER 0b00000000010
#define SET_TLM_STATUS 0b00100000010

/* TOPIC PEDALS */
#define TOPIC_PEDALS_MASK 0b00000011111
#define TOPIC_PEDALS_FILTER 0b00000000011
#define SET_PEDALS_RANGE 0b00000000011

/* TOPIC STEER */
#define TOPIC_STEER_MASK 0b00000011111
#define TOPIC_STEER_FILTER 0b00000000100
#define TLM_STATUS 0b00100000100
#define CAR_STATUS 0b00000000100

/* TOPIC ACU */
#define TOPIC_ACU_MASK 0b00000011111
#define TOPIC_ACU_FILTER 0b00000000101
#define TS_STATUS 0b00000000101
#define STEER_STATUS 0b00000100101
#define SET_CAR_STATUS 0b00001000101
#define GET_CAR_STATUS 0b00001100101

#endif
