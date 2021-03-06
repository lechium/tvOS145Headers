/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/IAMMessageTarget.h>

@class NSString;

@interface SeymourUI.EngagementMessageTarget : NSObject <IAMMessageTarget> {

	 identifier;
	 onBannerUpdate;
	 onBannerRemoval;

}

@property (readonly,nonatomic) NSString * targetIdentifier; 
@property (readonly,nonatomic) BOOL shouldBeNotifiedOfNilPriorityMessageAfterRegistration; 
-(NSString *)targetIdentifier;
-(BOOL)shouldBeNotifiedOfNilPriorityMessageAfterRegistration;
-(void)messageCoordinator:(id)arg1 didUpdatePriorityMessage:(id)arg2 forTarget:(id)arg3 ;
-(id)init;
@end

