/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNArrivalRegionTimerDelegate;
@class GEOArrivalRegion, NSTimer;

@interface MNArrivalRegionTimer : NSObject {

	GEOArrivalRegion* _arrivalRegion;
	NSTimer* _timer;
	id<MNArrivalRegionTimerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNArrivalRegionTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<MNArrivalRegionTimerDelegate>)delegate;
-(void)setDelegate:(id<MNArrivalRegionTimerDelegate>)arg1 ;
-(void)updateForLocation:(id)arg1 ;
-(id)initWithArrivalRegion:(id)arg1 ;
@end

