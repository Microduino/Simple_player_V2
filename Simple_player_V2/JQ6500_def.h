
#ifndef __JQ6500_DEF_H__
#define __JQ6500_DEF_H__

//音频播放风格
#define EQ_NORMAL    	0x00      //普通     
#define EQ_POP    		0x01      //POP
#define EQ_ROCK  		  0x02      //ROCK  
#define EQ_JAZZ      	0x03      //JAZZ
#define EQ_CLASSIC    0x04      //CLASSIC
#define EQ_BASE			  0x05      //BASE

//指定播放设备
#define DEVICE_U    	0x00      //U盘
#define DEVICE_TF    	0x01      //TF卡
#define DEVICE_AUX  	0x02      //AUX输入
#define DEVICE_SLEEP    0x03    //休眠
#define DEVICE_FLASH    0x04    //FLASH

//播放模式
#define MODE_ALL		0x00      //全部循环
#define MODE_FOL		0x01      //单曲循环
#define MODE_ONE		0x02      //顺序播放
#define MODE_RAM		0x03      //随机播放
#define	MODE_ONE_STOP	0x04    //单曲播放


#endif
//
// END OF FILE
//
