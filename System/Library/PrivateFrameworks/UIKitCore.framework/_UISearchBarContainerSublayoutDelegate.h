/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UISearchBarContainerSublayoutDelegate <NSObject>
@property (getter=isProspective,nonatomic,readonly) BOOL prospective; 
@property (assign,getter=isHostingNavBarTransitionActive,nonatomic) BOOL hostingNavBarTransitionActive; 
@required
-(BOOL)isProspective;
-(void)containerLayoutWillUpdateLayout:(id)arg1;
-(double)layout:(id)arg1 fontScaledValueForValue:(double)arg2;
-(BOOL)isHostingNavBarTransitionActive;
-(void)setHostingNavBarTransitionActive:(BOOL)arg1;

@end
