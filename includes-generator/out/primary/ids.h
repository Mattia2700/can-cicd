#ifndef IDS_H
#define IDS_H

#define NETWORK_VERSION 1

/* TOPIC STEER */
#define TOPIC_STEER_MASK 00000011111
#define TOPIC_STEER_FILTER 00000000000
#define TLM_STATUS_UPDATE 00100000000
#define CAR_STATUS_UPDATE 00000000000

/* TOPIC ECUnSTEER */
#define TOPIC_ECUnSTEER_MASK 00000011111
#define TOPIC_ECUnSTEER_FILTER 00000000001
#define HV_VOLTAGE 01100000001
#define HV_CURRENT 01100100001
#define HV_TEMP 01101000001
#define HV_ERROR 00100000001

/* TOPIC TLM */
#define TOPIC_TLM_MASK 00000011111
#define TOPIC_TLM_FILTER 00000000010
#define SET_TLM_STATUS 00100000010

/* TOPIC PEDALS */
#define TOPIC_PEDALS_MASK 00000011111
#define TOPIC_PEDALS_FILTER 00000000011
#define SET_PEDALS_RANGE 00000000011

/* TOPIC BMS_HV */
#define TOPIC_BMS_HV_MASK 00000011111
#define TOPIC_BMS_HV_FILTER 00000000100
#define SET_TS_STATUS 00000000100

/* TOPIC ECU */
#define TOPIC_ECU_MASK 00000011111
#define TOPIC_ECU_FILTER 00000000101
#define TS_STATUS_UPDATE 00000000101
#define STEER_STATUS_UPDATE 00000100101
#define SET_CAR_STATUS 00001000101
#define ASK_CAR_STATUS 00001100101

#endif

