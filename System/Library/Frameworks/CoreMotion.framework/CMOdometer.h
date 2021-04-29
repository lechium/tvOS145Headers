/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:22 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CMOdometerDelegate;
@class CMOdometerProxy;

@interface CMOdometer : NSObject {

	id<CMOdometerDelegate> _delegate;
	CMOdometerProxy* _odometerProxy;

}

@property (nonatomic,readonly) CMOdometerProxy * odometerProxy;              //@synthesize odometerProxy=_odometerProxy - In the implementation block
@property (assign,nonatomic) id<CMOdometerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<CMOdometerDelegate>)delegate;
-(void)setDelegate:(id<CMOdometerDelegate>)arg1 ;
-(CMOdometerProxy *)odometerProxy;
-(void)startOdometerUpdatesForActivity:(long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopOdometerUpdates;
@end

