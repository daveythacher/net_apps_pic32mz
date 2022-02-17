/*******************************************************************************
  System Configuration Header

  File Name:
    configuration.h

  Summary:
    Build-time configuration header for the system defined by this project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    This configuration header must not define any prototypes or data
    definitions (or include any files that do).  It only provides macro
    definitions for build-time configuration options

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section Includes other configuration headers necessary to completely
    define this configuration.
*/

#include "user.h"
#include "device.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: System Configuration
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: System Service Configuration
// *****************************************************************************
// *****************************************************************************
/* TIME System Service Configuration Options */
#define SYS_TIME_INDEX_0                            (0)
#define SYS_TIME_MAX_TIMERS                         (5)
#define SYS_TIME_HW_COUNTER_WIDTH                   (32)
#define SYS_TIME_HW_COUNTER_PERIOD                  (4294967295U)
#define SYS_TIME_HW_COUNTER_HALF_PERIOD             (SYS_TIME_HW_COUNTER_PERIOD>>1)
#define SYS_TIME_CPU_CLOCK_FREQUENCY                (200000000)
#define SYS_TIME_COMPARE_UPDATE_EXECUTION_CYCLES    (620)

#define SYS_CONSOLE_INDEX_0                       0





#define SYS_CMD_ENABLE
#define SYS_CMD_DEVICE_MAX_INSTANCES       SYS_CONSOLE_DEVICE_MAX_INSTANCES
#define SYS_CMD_PRINT_BUFFER_SIZE          2500
#define SYS_CMD_BUFFER_DMA_READY



#define SYS_DEBUG_ENABLE
#define SYS_DEBUG_GLOBAL_ERROR_LEVEL       SYS_ERROR_DEBUG
#define SYS_DEBUG_BUFFER_DMA_READY
#define SYS_DEBUG_USE_CONSOLE



/* File System Service Configuration */

#define SYS_FS_MEDIA_NUMBER               1
#define SYS_FS_VOLUME_NUMBER              1

#define SYS_FS_AUTOMOUNT_ENABLE           false
#define SYS_FS_MAX_FILES                  1
#define SYS_FS_MAX_FILE_SYSTEM_TYPE       1
#define SYS_FS_MEDIA_MAX_BLOCK_SIZE       512
#define SYS_FS_MEDIA_MANAGER_BUFFER_SIZE  2048
#define SYS_FS_USE_LFN                    1
#define SYS_FS_FILE_NAME_LEN              255
#define SYS_FS_CWD_STRING_LEN             1024







#define SYS_CONSOLE_DEVICE_MAX_INSTANCES   			1
#define SYS_CONSOLE_UART_MAX_INSTANCES 	   			2
#define SYS_CONSOLE_USB_CDC_MAX_INSTANCES 	   		0
#define SYS_CONSOLE_PRINT_BUFFER_SIZE        		2500




// *****************************************************************************
// *****************************************************************************
// Section: Driver Configuration
// *****************************************************************************
// *****************************************************************************
/* Memory Driver Global Configuration Options */
#define DRV_MEMORY_INSTANCES_NUMBER          1

/* Memory Driver Instance 0 Configuration */
#define DRV_MEMORY_INDEX_0                   0
#define DRV_MEMORY_CLIENTS_NUMBER_IDX0       1
#define DRV_MEMORY_BUFFER_QUEUE_SIZE_IDX0    1
#define DRV_MEMORY_DEVICE_START_ADDRESS      0x9d100000
#define DRV_MEMORY_DEVICE_MEDIA_SIZE         1024UL
#define DRV_MEMORY_DEVICE_MEDIA_SIZE_BYTES   (DRV_MEMORY_DEVICE_MEDIA_SIZE * 1024)
#define DRV_MEMORY_DEVICE_PROGRAM_SIZE       2048
#define DRV_MEMORY_DEVICE_ERASE_SIZE         16384



/*** ENCX24J600 Driver Configuration ***/
/*** Driver Compilation and static configuration options. ***/
#define TCPIP_IF_ENCX24J600

#define DRV_ENCX24J600_INSTANCES_NUMBER 1
#define DRV_ENCX24J600_CLIENT_INSTANCES_IDX0		1
#define DRV_ENCX24J600_MAC_TX_DESCRIPTORS_IDX0		3
#define DRV_ENCX24J600_MAC_RX_DESCRIPTORS_IDX0		3
#define DRV_ENCX24J600_MAX_RX_BUFFER_IDX0		1536
#define DRV_ENCX24J600_RX_BUFFER_SIZE_IDX0		16384
#define DRV_ENCX24J600_MAX_FRAME_SIZE_IDX0		1536
	
#define DRV_ENCX24J600_ETHERNET_TYPE_IDX0 TCPIP_ETH_OPEN_AUTO
	
#define DRV_ENCX24J600_DUPLEX_MODE_IDX0 TCPIP_ETH_OPEN_AUTO
#define DRV_ENCX24J600_SPI_CS_IDX0		SYS_PORT_PIN_RE9




/* SPI Driver Common Configuration Options */
#define DRV_SPI_INSTANCES_NUMBER              1

/* SPI Driver Instance 0 Configuration Options */
#define DRV_SPI_INDEX_0                       0
#define DRV_SPI_CLIENTS_NUMBER_IDX0           1
#define DRV_SPI_QUEUE_SIZE_IDX0               10



/*** MIIM Driver Configuration ***/
#define DRV_MIIM_ETH_MODULE_ID              _ETH_BASE_ADDRESS
#define DRV_MIIM_INSTANCES_NUMBER           1
#define DRV_MIIM_INSTANCE_OPERATIONS        4
#define DRV_MIIM_INSTANCE_CLIENTS           2
#define DRV_MIIM_CLIENT_OP_PROTECTION   false
#define DRV_MIIM_COMMANDS   false
#define DRV_MIIM_DRIVER_OBJECT              DRV_MIIM_OBJECT_BASE_Default
#define DRV_MIIM_DRIVER_INDEX               DRV_MIIM_INDEX_0              





// *****************************************************************************
// *****************************************************************************
// Section: Middleware & Other Library Configuration
// *****************************************************************************
// *****************************************************************************


/*** DNS Client Configuration ***/
#define TCPIP_STACK_USE_DNS
#define TCPIP_DNS_CLIENT_SERVER_TMO					60
#define TCPIP_DNS_CLIENT_TASK_PROCESS_RATE			200
#define TCPIP_DNS_CLIENT_CACHE_ENTRIES				5
#define TCPIP_DNS_CLIENT_CACHE_ENTRY_TMO			0
#define TCPIP_DNS_CLIENT_CACHE_PER_IPV4_ADDRESS		5
#define TCPIP_DNS_CLIENT_CACHE_PER_IPV6_ADDRESS		1
#define TCPIP_DNS_CLIENT_ADDRESS_TYPE			    IP_ADDRESS_TYPE_IPV4
#define TCPIP_DNS_CLIENT_CACHE_DEFAULT_TTL_VAL		1200
#define TCPIP_DNS_CLIENT_LOOKUP_RETRY_TMO			2
#define TCPIP_DNS_CLIENT_MAX_HOSTNAME_LEN			64
#define TCPIP_DNS_CLIENT_MAX_SELECT_INTERFACES		4
#define TCPIP_DNS_CLIENT_DELETE_OLD_ENTRIES			true
#define TCPIP_DNS_CLIENT_CONSOLE_CMD               	true
#define TCPIP_DNS_CLIENT_USER_NOTIFICATION   false



/*** ICMPv4 Server Configuration ***/
#define TCPIP_STACK_USE_ICMP_SERVER
#define TCPIP_ICMP_ECHO_ALLOW_BROADCASTS    false

/*** ICMPv4 Client Configuration ***/
#define TCPIP_STACK_USE_ICMP_CLIENT
#define TCPIP_ICMP_ECHO_REQUEST_TIMEOUT        500
#define TCPIP_ICMP_TASK_TICK_RATE              33
#define TCPIP_STACK_MAX_CLIENT_ECHO_REQUESTS   4
#define TCPIP_ICMP_COMMAND_ENABLE              true
#define TCPIP_STACK_COMMANDS_ICMP_ECHO_REQUESTS         4
#define TCPIP_STACK_COMMANDS_ICMP_ECHO_REQUEST_DELAY    1000
#define TCPIP_STACK_COMMANDS_ICMP_ECHO_TIMEOUT          5000
#define TCPIP_STACK_COMMANDS_ICMP_ECHO_REQUEST_BUFF_SIZE    2000
#define TCPIP_STACK_COMMANDS_ICMP_ECHO_REQUEST_DATA_SIZE    100


/*** HTTP NET Configuration ***/
#define TCPIP_STACK_USE_HTTP_NET_SERVER
#define TCPIP_HTTP_NET_MAX_HEADER_LEN		    		15
#define TCPIP_HTTP_NET_CACHE_LEN		        		"600"
#define TCPIP_HTTP_NET_TIMEOUT		            		45
#define TCPIP_HTTP_NET_MAX_CONNECTIONS		    		4
#define TCPIP_HTTP_NET_DEFAULT_FILE		        		"index.htm"
#define TCPIP_HTTP_NET_FILENAME_MAX_LEN			        25
#define TCPIP_HTTP_NET_WEB_DIR		        		    "/mnt/mchpSite1/"
#define TCPIP_HTTP_NET_USE_POST
#define TCPIP_HTTP_NET_USE_COOKIES
#define TCPIP_HTTP_NET_USE_AUTHENTICATION
#define TCPIP_HTTP_NET_MAX_DATA_LEN		        		100
#define TCPIP_HTTP_NET_SKT_TX_BUFF_SIZE		    		1024
#define TCPIP_HTTP_NET_SKT_RX_BUFF_SIZE		    		1024
#define TCPIP_HTTP_NET_LISTEN_PORT		    		    80
#define TCPIP_HTTP_NET_CONFIG_FLAGS                       \
                                                        TCPIP_HTTP_NET_MODULE_FLAG_SECURE_DEFAULT |\
                                                        TCPIP_HTTP_NET_MODULE_FLAG_DEFAULT
#define TCPIP_HTTP_NET_TASK_RATE					    33
#define TCPIP_HTTP_NET_RESPONSE_BUFFER_SIZE				300
#define TCPIP_HTTP_NET_COOKIE_BUFFER_SIZE				200
#define TCPIP_HTTP_NET_FIND_PEEK_BUFF_SIZE				512
#define TCPIP_HTTP_NET_FILE_PROCESS_BUFFER_SIZE         512
#define TCPIP_HTTP_NET_FILE_PROCESS_BUFFERS_NUMBER      4
#define TCPIP_HTTP_NET_FILE_PROCESS_BUFFER_RETRIES      10
#define TCPIP_HTTP_NET_CHUNKS_NUMBER                    10
#define TCPIP_HTTP_NET_CHUNK_RETRIES                    10
#define TCPIP_HTTP_NET_MAX_RECURSE_LEVEL				3
#define TCPIP_HTTP_NET_DYNVAR_PROCESS           		1
#define TCPIP_HTTP_NET_DYNVAR_DESCRIPTORS_NUMBER		10
#define TCPIP_HTTP_NET_DYNVAR_MAX_LEN					50
#define TCPIP_HTTP_NET_DYNVAR_ARG_MAX_NUMBER			4
#define TCPIP_HTTP_NET_DYNVAR_PROCESS_RETRIES			10
#define TCPIP_HTTP_NET_SSI_PROCESS           			1
#define TCPIP_HTTP_NET_SSI_ATTRIBUTES_MAX_NUMBER        4
#define TCPIP_HTTP_NET_SSI_STATIC_ATTTRIB_NUMBER        2
#define TCPIP_HTTP_NET_SSI_CMD_MAX_LEN                  100
#define TCPIP_HTTP_NET_SSI_VARIABLES_NUMBER             13
#define TCPIP_HTTP_NET_SSI_VARIABLE_NAME_MAX_LENGTH     10
#define TCPIP_HTTP_NET_SSI_VARIABLE_STRING_MAX_LENGTH   10
#define TCPIP_HTTP_NET_SSI_ECHO_NOT_FOUND_MESSAGE       "SSI Echo - Not Found: "
#define TCPIP_HTTP_NET_CONNECTION_TIMEOUT          	0
#define TCPIP_HTTP_NET_MALLOC_FUNC                  malloc
#define TCPIP_HTTP_NET_FREE_FUNC                    free
#define TCPIP_HTTP_NET_CONSOLE_CMD           		false


/*** TCPIP MAC Configuration ***/
#define TCPIP_EMAC_TX_DESCRIPTORS				    8
#define TCPIP_EMAC_RX_DESCRIPTORS				    8
#define TCPIP_EMAC_RX_DEDICATED_BUFFERS				4
#define TCPIP_EMAC_RX_INIT_BUFFERS				    0
#define TCPIP_EMAC_RX_LOW_THRESHOLD				    1
#define TCPIP_EMAC_RX_LOW_FILL				        2
#define TCPIP_EMAC_MAX_FRAME		    			1536
#define TCPIP_EMAC_LINK_MTU		    			    1500
#define TCPIP_EMAC_RX_BUFF_SIZE		    			1536
#define TCPIP_EMAC_RX_FRAGMENTS		    			1

#define TCPIP_EMAC_RX_FILTERS                       \
                                                    TCPIP_MAC_RX_FILTER_TYPE_BCAST_ACCEPT |\
                                                    TCPIP_MAC_RX_FILTER_TYPE_MCAST_ACCEPT |\
                                                    TCPIP_MAC_RX_FILTER_TYPE_UCAST_ACCEPT |\
                                                    TCPIP_MAC_RX_FILTER_TYPE_UCAST_OTHER_ACCEPT |\
                                                    TCPIP_MAC_RX_FILTER_TYPE_RUNT_REJECT |\
                                                    TCPIP_MAC_RX_FILTER_TYPE_CRC_ERROR_REJECT |\
                                                    0
#define TCPIP_EMAC_ETH_OPEN_FLAGS       			\
                                                    TCPIP_ETH_OPEN_AUTO |\
                                                    TCPIP_ETH_OPEN_FDUPLEX |\
                                                    TCPIP_ETH_OPEN_HDUPLEX |\
                                                    TCPIP_ETH_OPEN_100 |\
                                                    TCPIP_ETH_OPEN_10 |\
                                                    TCPIP_ETH_OPEN_MDIX_AUTO |\
                                                    TCPIP_ETH_OPEN_RMII |\
                                                    0

#define TCPIP_INTMAC_MODULE_ID		    			_ETH_BASE_ADDRESS
#define TCPIP_INTMAC_PERIPHERAL_CLK  				100000000

#define DRV_ETHMAC_INTERRUPT_SOURCE				_ETHERNET_VECTOR

#define DRV_ETHMAC_INTERRUPT_MODE        			true

#define TCPIP_EMAC_AUTO_FLOW_CONTROL_ENABLE        	false



/*** TCP Configuration ***/
#define TCPIP_TCP_MAX_SEG_SIZE_TX		        	1460
#define TCPIP_TCP_SOCKET_DEFAULT_TX_SIZE			512
#define TCPIP_TCP_SOCKET_DEFAULT_RX_SIZE			512
#define TCPIP_TCP_DYNAMIC_OPTIONS             			true
#define TCPIP_TCP_START_TIMEOUT_VAL		        	1000
#define TCPIP_TCP_DELAYED_ACK_TIMEOUT		    		100
#define TCPIP_TCP_FIN_WAIT_2_TIMEOUT		    		5000
#define TCPIP_TCP_KEEP_ALIVE_TIMEOUT		    		10000
#define TCPIP_TCP_CLOSE_WAIT_TIMEOUT		    		0
#define TCPIP_TCP_MAX_RETRIES		            		5
#define TCPIP_TCP_MAX_UNACKED_KEEP_ALIVES			6
#define TCPIP_TCP_MAX_SYN_RETRIES		        	3
#define TCPIP_TCP_AUTO_TRANSMIT_TIMEOUT_VAL			40
#define TCPIP_TCP_WINDOW_UPDATE_TIMEOUT_VAL			200
#define TCPIP_TCP_MAX_SOCKETS		                10
#define TCPIP_TCP_TASK_TICK_RATE		        	5
#define TCPIP_TCP_MSL_TIMEOUT		        	    0
#define TCPIP_TCP_QUIET_TIME		        	    0
#define TCPIP_TCP_COMMANDS   false
#define TCPIP_TCP_EXTERN_PACKET_PROCESS   false
#define TCPIP_TCP_DISABLE_CRYPTO_USAGE		        	    true



/*** DHCP Configuration ***/
#define TCPIP_STACK_USE_DHCP_CLIENT
#define TCPIP_DHCP_TIMEOUT                          10
#define TCPIP_DHCP_TASK_TICK_RATE                   5
#define TCPIP_DHCP_HOST_NAME_SIZE                   20
#define TCPIP_DHCP_CLIENT_CONNECT_PORT              68
#define TCPIP_DHCP_SERVER_LISTEN_PORT               67
#define TCPIP_DHCP_CLIENT_CONSOLE_CMD               true

#define TCPIP_DHCP_USE_OPTION_TIME_SERVER           0
#define TCPIP_DHCP_TIME_SERVER_ADDRESSES            0
#define TCPIP_DHCP_USE_OPTION_NTP_SERVER            0
#define TCPIP_DHCP_NTP_SERVER_ADDRESSES             0
#define TCPIP_DHCP_ARP_LEASE_CHECK_TMO              1000
#define TCPIP_DHCP_WAIT_ARP_FAIL_CHECK_TMO          10



/*** ARP Configuration ***/
#define TCPIP_ARP_CACHE_ENTRIES                 		5
#define TCPIP_ARP_CACHE_DELETE_OLD		        	true
#define TCPIP_ARP_CACHE_SOLVED_ENTRY_TMO			1200
#define TCPIP_ARP_CACHE_PENDING_ENTRY_TMO			60
#define TCPIP_ARP_CACHE_PENDING_RETRY_TMO			2
#define TCPIP_ARP_CACHE_PERMANENT_QUOTA		    		50
#define TCPIP_ARP_CACHE_PURGE_THRESHOLD		    		75
#define TCPIP_ARP_CACHE_PURGE_QUANTA		    		1
#define TCPIP_ARP_CACHE_ENTRY_RETRIES		    		3
#define TCPIP_ARP_GRATUITOUS_PROBE_COUNT			1
#define TCPIP_ARP_TASK_PROCESS_RATE		        	2000
#define TCPIP_ARP_PRIMARY_CACHE_ONLY		        	true
#define TCPIP_ARP_COMMANDS true



	/*** tcpip_cmd Configuration ***/
	#define TCPIP_STACK_COMMAND_ENABLE



/* Network Configuration Index 0 */
#define TCPIP_NETWORK_DEFAULT_INTERFACE_NAME_IDX0	"ENCX24J600"

#define TCPIP_NETWORK_DEFAULT_HOST_NAME_IDX0				"MCHPENCX24_E"
#define TCPIP_NETWORK_DEFAULT_MAC_ADDR_IDX0				0

#define TCPIP_NETWORK_DEFAULT_IP_ADDRESS_IDX0			"192.168.100.12"
#define TCPIP_NETWORK_DEFAULT_IP_MASK_IDX0			"255.255.255.0"
#define TCPIP_NETWORK_DEFAULT_GATEWAY_IDX0			"192.168.100.1"
#define TCPIP_NETWORK_DEFAULT_DNS_IDX0				"192.168.100.1"
#define TCPIP_NETWORK_DEFAULT_SECOND_DNS_IDX0			"0.0.0.0"
#define TCPIP_NETWORK_DEFAULT_POWER_MODE_IDX0			"full"
#define TCPIP_NETWORK_DEFAULT_INTERFACE_FLAGS_IDX0			\
													TCPIP_NETWORK_CONFIG_DHCP_CLIENT_ON |\
													TCPIP_NETWORK_CONFIG_DNS_CLIENT_ON |\
													TCPIP_NETWORK_CONFIG_IP_STATIC
													
#define TCPIP_NETWORK_DEFAULT_MAC_DRIVER_IDX0			DRV_ENCX24J600_MACObject



/* Network Configuration Index 1 */
#define TCPIP_NETWORK_DEFAULT_INTERFACE_NAME_IDX1	"ETHMAC"
#define TCPIP_IF_ETHMAC

#define TCPIP_NETWORK_DEFAULT_HOST_NAME_IDX1				"MCHPBOARD_E"
#define TCPIP_NETWORK_DEFAULT_MAC_ADDR_IDX1				0

#define TCPIP_NETWORK_DEFAULT_IP_ADDRESS_IDX1			"192.168.100.10"
#define TCPIP_NETWORK_DEFAULT_IP_MASK_IDX1			"255.255.255.0"
#define TCPIP_NETWORK_DEFAULT_GATEWAY_IDX1			"192.168.100.1"
#define TCPIP_NETWORK_DEFAULT_DNS_IDX1				"192.168.100.1"
#define TCPIP_NETWORK_DEFAULT_SECOND_DNS_IDX1			"0.0.0.0"
#define TCPIP_NETWORK_DEFAULT_POWER_MODE_IDX1			"full"
#define TCPIP_NETWORK_DEFAULT_INTERFACE_FLAGS_IDX1			\
													TCPIP_NETWORK_CONFIG_DHCP_CLIENT_ON |\
													TCPIP_NETWORK_CONFIG_DNS_CLIENT_ON |\
													TCPIP_NETWORK_CONFIG_IP_STATIC
													
#define TCPIP_NETWORK_DEFAULT_MAC_DRIVER_IDX1			DRV_ETHMAC_PIC32MACObject



/*** IPv4 Configuration ***/
#define TCPIP_IPV4_ARP_SLOTS                        10
#define TCPIP_IPV4_EXTERN_PACKET_PROCESS   false

#define TCPIP_IPV4_COMMANDS true

#define TCPIP_IPV4_FORWARDING_ENABLE    true 

#define TCPIP_IPV4_FWD_TX_SLOTS                        6
#define TCPIP_IPV4_FORWARDING_TABLE_ASCII     true
#define TCPIP_IPV4_FORWARDING_DYNAMIC_API     true

#define TCPIP_IPV4_FWD_FLAGS                        \
                                                    TCPIP_IPV4_FWD_FLAG_ASCII_TABLE |\
                                                    TCPIP_IPV4_FWD_FLAG_ENABLED

#define TCPIP_IPV4_FORWARDING_TABLE_MAX_SIZE        10
#define TCPIP_IPV4_FORWARDING_TABLE_ENTRIES         3

#define TCPIP_IPV4_FORWARDING_STATS     true






/*** TCPIP Heap Configuration ***/
#define TCPIP_STACK_USE_INTERNAL_HEAP
#define TCPIP_STACK_DRAM_SIZE                       95536
#define TCPIP_STACK_DRAM_RUN_LIMIT                  2048

#define TCPIP_STACK_MALLOC_FUNC                     malloc

#define TCPIP_STACK_CALLOC_FUNC                     calloc

#define TCPIP_STACK_FREE_FUNC                       free



#define TCPIP_STACK_HEAP_USE_FLAGS                   TCPIP_STACK_HEAP_FLAG_ALLOC_UNCACHED

#define TCPIP_STACK_HEAP_USAGE_CONFIG                TCPIP_STACK_HEAP_USE_DEFAULT

#define TCPIP_STACK_SUPPORTED_HEAPS                  1




// *****************************************************************************
// *****************************************************************************
// Section: TCPIP Stack Configuration
// *****************************************************************************
// *****************************************************************************

#define TCPIP_STACK_USE_IPV4
#define TCPIP_STACK_USE_TCP
#define TCPIP_STACK_USE_UDP

#define TCPIP_STACK_TICK_RATE		        		5
#define TCPIP_STACK_SECURE_PORT_ENTRIES             10

#define TCPIP_STACK_ALIAS_INTERFACE_SUPPORT   false

#define TCPIP_PACKET_LOG_ENABLE     0

/* TCP/IP stack event notification */
#define TCPIP_STACK_USE_EVENT_NOTIFICATION
#define TCPIP_STACK_USER_NOTIFICATION   false
#define TCPIP_STACK_DOWN_OPERATION   true
#define TCPIP_STACK_IF_UP_DOWN_OPERATION   true
#define TCPIP_STACK_MAC_DOWN_OPERATION  true
#define TCPIP_STACK_INTERFACE_CHANGE_SIGNALING   false
#define TCPIP_STACK_CONFIGURATION_SAVE_RESTORE   true
#define TCPIP_STACK_EXTERN_PACKET_PROCESS   false







/*** UDP Configuration ***/
#define TCPIP_UDP_MAX_SOCKETS		                	10
#define TCPIP_UDP_SOCKET_DEFAULT_TX_SIZE		    	512
#define TCPIP_UDP_SOCKET_DEFAULT_TX_QUEUE_LIMIT    	 	3
#define TCPIP_UDP_SOCKET_DEFAULT_RX_QUEUE_LIMIT			3
#define TCPIP_UDP_USE_POOL_BUFFERS   false
#define TCPIP_UDP_USE_TX_CHECKSUM             			true
#define TCPIP_UDP_USE_RX_CHECKSUM             			true
#define TCPIP_UDP_COMMANDS   false
#define TCPIP_UDP_EXTERN_PACKET_PROCESS   false


                                                  
#define TCPIP_INTMAC_PHY_CONFIG_FLAGS              	( 0 \
                                                    | DRV_ETHPHY_CFG_AUTO \
                                                    )

#define TCPIP_INTMAC_PHY_LINK_INIT_DELAY  			500
#define TCPIP_INTMAC_PHY_ADDRESS		    			0
#define DRV_ETHPHY_INSTANCES_NUMBER					1
#define DRV_ETHPHY_CLIENTS_NUMBER					1
#define DRV_ETHPHY_INDEX		        			1
#define DRV_ETHPHY_PERIPHERAL_ID					1
#define DRV_ETHPHY_NEG_INIT_TMO		    			1
#define DRV_ETHPHY_NEG_DONE_TMO		    			2000
#define DRV_ETHPHY_RESET_CLR_TMO					500


/* MPLAB Harmony Net Presentation Layer Definitions*/
#define NET_PRES_NUM_INSTANCE 1
#define NET_PRES_NUM_SOCKETS 10



#define TCPIP_STACK_NETWORK_INTERAFCE_COUNT  	2







// *****************************************************************************
// *****************************************************************************
// Section: Application Configuration
// *****************************************************************************
// *****************************************************************************


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // CONFIGURATION_H
/*******************************************************************************
 End of File
*/
