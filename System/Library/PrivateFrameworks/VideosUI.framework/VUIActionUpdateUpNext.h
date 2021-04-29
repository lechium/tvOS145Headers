/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIAction.h>

@class NSString;

@interface VUIActionUpdateUpNext : VUIAction {

	BOOL _confirmationShouldWaitCompletion;
	NSString* _state;
	NSString* _itemID;

}

@property (nonatomic,retain) NSString * state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * itemID;                                  //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) BOOL confirmationShouldWaitCompletion;              //@synthesize confirmationShouldWaitCompletion=_confirmationShouldWaitCompletion - In the implementation block
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)initWithContextData:(id)arg1 ;
-(NSString *)itemID;
-(void)setItemID:(NSString *)arg1 ;
-(BOOL)isAccountRequired;
-(void)performWithTargetResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)confirmationShouldWaitCompletion;
-(void)setConfirmationShouldWaitCompletion:(BOOL)arg1 ;
@end

