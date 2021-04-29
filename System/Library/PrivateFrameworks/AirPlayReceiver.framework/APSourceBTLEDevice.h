/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface APSourceBTLEDevice : NSObject {

	int _lastRSSI;
	unsigned long long _lastUpdateTicks;

}

@property (assign,nonatomic) int lastRSSI;                                    //@synthesize lastRSSI=_lastRSSI - In the implementation block
@property (assign,nonatomic) unsigned long long lastUpdateTicks;              //@synthesize lastUpdateTicks=_lastUpdateTicks - In the implementation block
-(int)lastRSSI;
-(void)setLastRSSI:(int)arg1 ;
-(unsigned long long)lastUpdateTicks;
-(void)setLastUpdateTicks:(unsigned long long)arg1 ;
@end
