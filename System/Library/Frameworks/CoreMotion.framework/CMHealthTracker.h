/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CMHealthTrackerInternal;

@interface CMHealthTracker : NSObject {

	CMHealthTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMHealthTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isMetMinutesAvailable;
+(long long)isAuthorizedForMetMinutes;
+(BOOL)isVO2MaxDataAvailable;
+(long long)isAuthorizedForVO2MaxData;
-(id)init;
-(void)dealloc;
-(CMHealthTrackerInternal *)_internal;
-(void)queryMetMinutesFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)queryVO2MaxInputsFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

