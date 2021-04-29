/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _CLLocationManagerRoutineProxy;

@interface CLLocationManagerRoutine : NSObject {

	_CLLocationManagerRoutineProxy* _locationManagerRoutineProxy;

}

@property (nonatomic,retain) _CLLocationManagerRoutineProxy * locationManagerRoutineProxy;              //@synthesize locationManagerRoutineProxy=_locationManagerRoutineProxy - In the implementation block
@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate; 
-(id)init;
-(void)dealloc;
-(id<CLLocationManagerDelegate>)delegate;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(_CLLocationManagerRoutineProxy *)locationManagerRoutineProxy;
-(void)setLocationManagerRoutineProxy:(_CLLocationManagerRoutineProxy *)arg1 ;
@end

