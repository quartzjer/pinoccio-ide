#ifndef _CONFIG_H_
#define _CONFIG_H_

/*****************************************************************************
*****************************************************************************/
#define APP_MESH_ADDR             3
#define APP_MESH_PANID            0x4567
#define APP_MESH_CHANNEL          0x1a  // channel 26, at the end of the 2.4GHz spectrum
#define APP_MESH_SECURITY_KEY     "TestSecurityKey0"

//#define NWK_ENABLE_SECURITY
//#define NWK_ENABLE_ROUTING
//#define PHY_ENABLE_ENERGY_DETECTION

#define NWK_BUFFERS_AMOUNT                  3
#define NWK_MAX_ENDPOINTS_AMOUNT            2
#define NWK_DUPLICATE_REJECTION_TABLE_SIZE  10
#define NWK_DUPLICATE_REJECTION_TTL         3000 // ms
#define NWK_ROUTE_TABLE_SIZE                100
#define NWK_ROUTE_DEFAULT_SCORE             3
#define NWK_ACK_WAIT_TIME                   800  // ms

#endif // _CONFIG_H_