/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HalogenAudioDelegate <NSObject>
@required
-(int)recordCallBackFunc:(unsigned*)arg1 AudioTimeStamp:(const AudioTimeStamp*)arg2 busNum:(unsigned)arg3 numFrames:(unsigned)arg4 AudioBufferList:(AudioBufferList*)arg5;
-(int)playbackCallBackFunc:(unsigned*)arg1 AudioTimeStamp:(const AudioTimeStamp*)arg2 busNum:(unsigned)arg3 numFrames:(unsigned)arg4 AudioBufferList:(AudioBufferList*)arg5;

@end
