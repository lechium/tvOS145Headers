/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TSADEVValue : NSObject {

	double _observationInterval;
	double _adev;

}

@property (nonatomic,readonly) double observationInterval;              //@synthesize observationInterval=_observationInterval - In the implementation block
@property (nonatomic,readonly) double adev;                             //@synthesize adev=_adev - In the implementation block
-(id)description;
-(double)observationInterval;
-(id)initWithObservationInterval:(double)arg1 andADEV:(double)arg2 ;
-(double)adev;
@end
