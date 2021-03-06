/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetViewProxy.h>

@class OKRoundProgressView;

@interface OKWidgetView : OKWidgetViewProxy {

	OKRoundProgressView* _roundProgressView;

}
-(void)dealloc;
-(void)commonInit;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setActivityIndicatorVisible:(BOOL)arg1 ;
-(BOOL)isActivityIndicatorVisible;
-(BOOL)downloadIndicatorEnabled;
-(BOOL)_canRespondToEventWithPoint:(CGPoint)arg1 ;
-(void)updateProgressIndicator:(double)arg1 ;
@end

