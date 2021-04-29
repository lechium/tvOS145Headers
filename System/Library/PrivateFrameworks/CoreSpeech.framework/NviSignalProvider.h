/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NviSignalProvider <NSObject>
@property (nonatomic,readonly) unsigned long long sigType; 
@required
-(void)reset;
-(void)addDelegate:(id)arg1;
-(void)removeDelegate:(id)arg1;
-(id)initWithDataSource:(id)arg1 assetsProvider:(id)arg2;
-(void)startWithNviContext:(id)arg1 didStartHandler:(/*^block*/id)arg2;
-(void)stopWithDidStopHandler:(/*^block*/id)arg1;
-(unsigned long long)sigType;

@end
