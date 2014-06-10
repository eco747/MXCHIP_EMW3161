/* RT-Thread config file */
#ifndef __RTTHREAD_CFG_H__
#define __RTTHREAD_CFG_H__

/* ���������Ƴ��� */
#define RT_NAME_MAX	8
/* Ĭ�϶��뷽ʽ */
#define RT_ALIGN_SIZE	4
/* ���֧�����ȼ��� */
#define RT_THREAD_PRIORITY_MAX	32
/* ÿ���tick���� */
#define RT_TICK_PER_SECOND	1000
/* ���������ջ��С */
#define IDLE_THREAD_STACK_SIZE	512
/* �Ƿ�ʹ���ں˵��� */
#define RT_DEBUG
/* �Ƿ�ʹ��ջ������ */
#define RT_USING_OVERFLOW_CHECK
/* �Ƿ�ʹ�ù��Ӻ��� */
#define RT_USING_HOOK
/* �Ƿ�ʹ�����timer */
#define RT_USING_TIMER_SOFT
/* timer�߳����ȼ� */
#define RT_TIMER_THREAD_PRIO	4
/* timer�߳�ջ��С */
#define RT_TIMER_THREAD_STACK_SIZE	512
/* timerÿ���tick���� */
#define RT_TIMER_TICK_PER_SECOND	100

/* �Ƿ�ʹ���ź��� */
#define RT_USING_SEMAPHORE
/* �Ƿ�ʹ�û����� */
#define RT_USING_MUTEX
/* �Ƿ�ʹ���¼� */
#define RT_USING_EVENT
/* �Ƿ�ʹ������ */
#define RT_USING_MAILBOX
/* �Ƿ�ʹ����Ϣ���� */
#define RT_USING_MESSAGEQUEUE

/* �Ƿ�ʹ���ڴ�� */
#define RT_USING_MEMPOOL
/* �Ƿ�ʹ���ڴ���� */
#define RT_USING_HEAP
/* �Ƿ�ʹ�ö�̬�ڴ���� */
#define RT_USING_MEMHEAP
/* �Ƿ�ʹ���Ż���С���ڴ���� */
#define RT_USING_SMALL_MEM

/* �Ƿ�ʹ���豸��� */
#define RT_USING_DEVICE
/* �Ƿ�ʹ��IPC�豸��� */
#define RT_USING_DEVICE_IPC
/* �Ƿ�ʹ�ô����豸��� */
#define RT_USING_SERIAL
/* �����豸���ջ�������С */
#define RT_UART_RX_BUFFER_SIZE    64
/* �Ƿ�ʹ��SPI�豸��� */
#define RT_USING_SPI
/* �Ƿ�ʹ��I2C�豸��� */
#define RT_USING_I2C
/* �Ƿ�ʹ��RTC��� */
//#define RT_USING_RTC
/* �Ƿ�ʹ�����ģ�� */
#define RT_USING_CONSOLE
/* �����������С */
#define RT_CONSOLEBUF_SIZE	128
/* ����������豸���� */
#define RT_CONSOLE_DEVICE_NAME	"uart2"

/* �Ƿ�ʹ��finsh������� */
#define RT_USING_FINSH
/* �Ƿ�ʹ��finsh����� */
#define FINSH_USING_SYMTAB
#define FINSH_USING_DESCRIPTION
/* finsh����ջ��С */
#define FINSH_THREAD_STACK_SIZE	4096
/* �Ƿ�ʹ��MSHģʽ */
//#define FINSH_USING_MSH

/* �Ƿ�ʹ��arm ��׼C�� */
#define RT_USING_ARM_LIBC

/* �Ƿ�ʹ��DFS�ļ�ϵͳ */
//#define RT_USING_DFS
/* �Ƿ�ʹ�ù���Ŀ¼ģʽ */
#define DFS_USING_WORKDIR
// <integer name="DFS_FILESYSTEM_TYPES_MAX" description="The maximal number of the supported file system type" default="4" />
#define DFS_FILESYSTEM_TYPES_MAX  4
// <integer name="DFS_FILESYSTEMS_MAX" description="The maximal number of mounted file system" default="4" />
#define DFS_FILESYSTEMS_MAX	4
// <integer name="DFS_FD_MAX" description="The maximal number of opened files" default="4" />
#define DFS_FD_MAX	         16
// <bool name="RT_USING_DFS_ELMFAT" description="Using ELM FatFs" default="true" />
#define RT_USING_DFS_ELMFAT
// <integer name="RT_DFS_ELM_DRIVES" description="The maximal number of drives of FatFs" default="4" />
#define RT_DFS_ELM_DRIVES    4
// <bool name="RT_DFS_ELM_REENTRANT" description="Support reentrant" default="true" />
#define RT_DFS_ELM_REENTRANT
// <integer name="RT_DFS_ELM_USE_LFN" description="Support long file name" default="0">
// <item description="LFN with static LFN working buffer">1</item>
// <item description="LFN with dynamic LFN working buffer on the stack">2</item>
// <item description="LFN with dynamic LFN working buffer on the heap">3</item>
// </integer>
#define RT_DFS_ELM_USE_LFN	3
// <integer name="RT_DFS_ELM_CODE_PAGE" description="OEM code page" default="936">
#define RT_DFS_ELM_CODE_PAGE	936
// <bool name="RT_DFS_ELM_CODE_PAGE_FILE" description="Using OEM code page file" default="false" />
#define RT_DFS_ELM_CODE_PAGE_FILE
// <integer name="RT_DFS_ELM_MAX_LFN" description="Maximal size of file name length" default="256" />
#define RT_DFS_ELM_MAX_LFN	256
// <integer name="RT_DFS_ELM_MAX_SECTOR_SIZE" description="Maximal size of sector" default="512" />
#define RT_DFS_ELM_MAX_SECTOR_SIZE  4096
// <bool name="RT_DFS_ELM_USE_ERASE" description="Enable erase feature for flash" default="true" />
#define RT_DFS_ELM_USE_ERASE
// <bool name="RT_USING_DFS_YAFFS2" description="Using YAFFS2" default="false" />
// #define RT_USING_DFS_YAFFS2
// <bool name="RT_USING_DFS_UFFS" description="Using UFFS" default="false" />
// #define RT_USING_DFS_UFFS
// <bool name="RT_USING_DFS_DEVFS" description="Using devfs for device objects" default="true" />
#define RT_USING_DFS_DEVFS

/* �Ƿ�ʹ��NFS */
#define RT_USING_DFS_NFS
/* NFS�˿���Ϣ */
#define RT_NFS_HOST_EXPORT  "192.168.1.20:/"
// </section>

// </RDTConfigurator>


#endif
