/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUUID;

@interface HMDUserActionPredictionSubscriber : NSObject {

	NSUUID* _uuid;
	unsigned long long _predictionLimit;

}

@property (copy,readonly) NSUUID * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long predictionLimit;              //@synthesize predictionLimit=_predictionLimit - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)uuid;
-(unsigned long long)predictionLimit;
-(id)initWithUUID:(id)arg1 predictionLimit:(unsigned long long)arg2 ;
@end

