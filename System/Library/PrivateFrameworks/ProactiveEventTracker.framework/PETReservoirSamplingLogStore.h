/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:56 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PETReservoirSamplingLogStore <NSObject>
@required
-(BOOL)lock;
-(void)unlock;
-(unsigned long long)currentLength;
-(/*function pointer*/void**)remap:(unsigned long long*)arg1;
-(/*function pointer*/void**)headerMap:(unsigned long long*)arg1;
-(BOOL)changeLength:(unsigned long long)arg1;
-(BOOL)appendData:(id)arg1 andReturnMapPointer:(*)arg2;
-(BOOL)attemptToRecreate;

@end

