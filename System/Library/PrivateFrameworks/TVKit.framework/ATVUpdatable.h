/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:06 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ATVUpdatable
@optional
-(id)currentState;
-(void)updateWithFeedElement:(id)arg1 state:(id)arg2 forceReload:(BOOL)arg3;
-(void)restoreState:(id)arg1;
-(void)reloadPage;

@required
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1;

@end

