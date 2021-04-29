/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:11 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWObjectRingBuffer.h>

@interface BWObjectRingBufferThreadSafe : BWObjectRingBuffer {

	OpaqueFigReentrantMutexRef _lock;

}
-(id)description;
-(void)dealloc;
-(id)initWithCapacity:(int)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(void)clear;
-(void)setCapacity:(int)arg1 ;
-(SCD_Struct_BW7)lastTime;
-(void)enumerateObjectsStartingAt:(SCD_Struct_BW7)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)appendObject:(id)arg1 forTime:(SCD_Struct_BW7)arg2 ;
-(SCD_Struct_BW7)firstTime;
-(void)reverseEnumerateObjectsStartingAt:(SCD_Struct_BW7)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)extractTimeRangeFrom:(SCD_Struct_BW7)arg1 until:(SCD_Struct_BW7)arg2 into:(id)arg3 times:(id)arg4 ;
-(void)flushEntriesEarlierThan:(SCD_Struct_BW7)arg1 ;
@end

