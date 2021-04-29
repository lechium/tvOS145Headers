/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIFocusSystem, UIFocusUpdateContext;

@interface _UIFocusUpdateReport : NSObject {

	UIFocusSystem* _focusSystem;
	UIFocusUpdateContext* _context;

}

@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;              //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,retain) UIFocusUpdateContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL shouldLog; 
-(id)init;
-(UIFocusUpdateContext *)context;
-(void)setContext:(UIFocusUpdateContext *)arg1 ;
-(BOOL)shouldLog;
-(UIFocusSystem *)focusSystem;
-(id)initWithFocusSystem:(id)arg1 ;
@end
