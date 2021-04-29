/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOLocationShifter;

@interface _MKLocationShifter : NSObject {

	GEOLocationShifter* _locationShifter;

}

@property (getter=isLocationShiftEnabled,nonatomic,readonly) BOOL locationShiftEnabled; 
+(BOOL)isLocationShiftRequiredForLocation:(id)arg1 ;
-(id)init;
-(BOOL)isLocationShiftEnabled;
-(void)_prepareShiftForLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 withShiftRequestBlock:(/*^block*/id)arg3 ;
-(void)shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)shiftLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 callbackQueue:(id)arg3 ;
@end

